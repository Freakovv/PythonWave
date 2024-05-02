xSize = int(input("X Size:"))
ySize = int(input("Y Size:"))

select = int(input("1 - 1280x720\n2 - 1920x1080\n3 - Enter by keyboard"))

xSizeForm = int
ySizeForm = int

if select == 1:
    xSizeForm = 346
    ySizeForm = 615
elif select == 2:
    xSizeForm = 1920
    ySizeForm = 1080
elif select == 3:
    xSizeForm=int(input("X:"))
    ySizeForm=int(input("Y:"))


print("Location: ")
print((xSizeForm - xSize) / 2, end=";")
print((ySizeForm - ySize) / 2)
