xSize = int(input("X Size:"))
ySize = int(input("Y Size:"))

select = int(input("1 - 1280x720\n2 - 1920x1080: "))

print("Location: ")
if select == 1:
    print((1280 - xSize) / 2, end=";")
    print((720 - ySize) / 2)
elif select == 2:
    print((1920 - xSize) / 2, end=";")
    print((1080 - ySize) / 2)
