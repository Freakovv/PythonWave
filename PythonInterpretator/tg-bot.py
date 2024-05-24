import qrcode
import requests
import datetime
import asyncio
from telegram import Update, InputFile
from telegram.ext import ApplicationBuilder, CommandHandler, MessageHandler, filters, CallbackContext

async def start(update: Update, context: CallbackContext) -> None:
    await update.message.reply_text('Привет! Я ваш Telegram бот. Для просмотра моих команд введите /help')

async def help_command(update: Update, context: CallbackContext) -> None:
    await update.message.reply_text('Команды, которые я понимаю:\n/start - Запустить бота\n/help - Получить помощь\n/update - Получить последнее обновление PythonWave\n/news_us - Получить последние новости из USA\n/news_by - Получить последние новости из Беларуси\n/translate <язык> <текст> - Перевести текст\n/reminder <время> <сообщение> - Установить напоминание')

async def update_command(update: Update, context: CallbackContext) -> None:
    qr_data = 'https://clck.ru/3ApiAL'
    qr_img = qrcode.make(qr_data)
    qr_img_path = 'qr_code.png'
    qr_img.save(qr_img_path)

    await update.message.reply_text('Последнее обновление PythonWave C++\nДата: 24.05.2024\nhttps://clck.ru/3ApiAL')

    with open(qr_img_path, 'rb') as qr_file:
        await update.message.reply_photo(photo=InputFile(qr_file))

async def news_us_command(update: Update, context: CallbackContext) -> None:
    api_key = 'ff3d36bbceaa4414987b630f948ec9d5'
    url = f'https://newsapi.org/v2/top-headlines?country=us&apiKey={api_key}'

    try:
        response = requests.get(url)
        response.raise_for_status()
        data = response.json()

        if data['status'] == 'ok':
            articles = data['articles'][:5]
            news_message = '\n\n'.join([f"{article['title']}\n{article['url']}" for article in articles])
            await update.message.reply_text(news_message)
        else:
            await update.message.reply_text('Не удалось получить последние новости.')
    except requests.RequestException as e:
        await update.message.reply_text(f'Произошла ошибка при получении новостей: {e}')

async def news_by_command(update: Update, context: CallbackContext) -> None:
    api_key = 'ff3d36bbceaa4414987b630f948ec9d5'
    url = f'https://newsapi.org/v2/top-headlines?country=ru&apiKey={api_key}'

    try:
        response = requests.get(url)
        response.raise_for_status()
        data = response.json()

        if data['status'] == 'ok':
            articles = data['articles'][:5]
            news_message = '\n\n'.join([f"{article['title']}\n{article['url']}" for article in articles])
            await update.message.reply_text(news_message)
        else:
            await update.message.reply_text('Не удалось получить последние новости.')
    except requests.RequestException as e:
        await update.message.reply_text(f'Произошла ошибка при получении новостей: {e}')

      

async def translate_command(update: Update, context: CallbackContext) -> None:
    if len(context.args) < 2:
        await update.message.reply_text('Используйте команду в формате /translate <язык> <текст>')
        return

    target_language = context.args[0]
    text_to_translate = ' '.join(context.args[1:])
    translate_url = 'https://translate.googleapis.com/translate_a/single'
    params = {
        'client': 'gtx',
        'sl': 'auto',
        'tl': target_language,
        'dt': 't',
        'q': text_to_translate,
    }

    try:
        response = requests.get(translate_url, params=params)
        response.raise_for_status()
        data = response.json()
        translated_text = data[0][0][0]
        await update.message.reply_text(translated_text)
    except requests.RequestException as e:
        await update.message.reply_text(f'Произошла ошибка при переводе текста: {e}')

async def send_reminder(context: CallbackContext, chat_id: int, message: str):
    await context.bot.send_message(chat_id=chat_id, text=message)

def set_reminder(context: CallbackContext, chat_id: int, message: str, delay: int) -> None:
    loop = asyncio.get_event_loop()
    loop.call_later(delay, asyncio.create_task, send_reminder(context, chat_id, message))

async def reminder_command(update: Update, context: CallbackContext) -> None:
    if len(context.args) < 2:
        await update.message.reply_text('Используйте команду в формате /reminder <время в формате ЧЧ:ММ> <сообщение>')
        return

    time_str = context.args[0]
    reminder_message = ' '.join(context.args[1:])

    try:
        reminder_time = datetime.datetime.strptime(time_str, '%H:%M').time()
        now = datetime.datetime.now().time()
        reminder_delay = (datetime.datetime.combine(datetime.date.today(), reminder_time) - datetime.datetime.combine(datetime.date.today(), now)).seconds
        chat_id = update.message.chat_id

        if reminder_delay < 0:
            await update.message.reply_text('Время напоминания должно быть в будущем.')
            return

        set_reminder(context, chat_id, reminder_message, reminder_delay)
        await update.message.reply_text(f'Напоминание установлено на {time_str}.')
    except ValueError:
        await update.message.reply_text('Неверный формат времени. Используйте формат ЧЧ:ММ')

async def echo(update: Update, context: CallbackContext) -> None:
    await update.message.reply_text('Примите мои извинения, но такого я ещё не знаю\nДля просмотра команд введите /help')

def main() -> None:
    token = '6764008255:AAFPe3yK16ZsCE7sCaaH1RkzSpx0yK0ebDM'

    app = ApplicationBuilder().token(token).build()

    app.add_handler(CommandHandler("start", start))
    app.add_handler(CommandHandler("help", help_command))
    app.add_handler(CommandHandler("update", update_command))
    app.add_handler(CommandHandler("news_us", news_us_command))
    app.add_handler(CommandHandler("news_by", news_by_command))
    app.add_handler(CommandHandler("translate", translate_command))
    app.add_handler(CommandHandler("reminder", reminder_command))


    app.add_handler(MessageHandler(filters.TEXT & ~filters.COMMAND, echo))

    app.run_polling()

if __name__ == '__main__':
    main()
