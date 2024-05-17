xSizeForm = 1280
ySizeForm = 720
# xSizeForm = int(input("X заднего элемента:"))
# ySizeForm = int(input("Y заднего элемента:"))

xSize = int(input("X элемента:"))
ySize = int(input("Y элемента:"))

print(int((xSizeForm - xSize) / 2), end=";")
print(int((ySizeForm - ySize) / 2))
