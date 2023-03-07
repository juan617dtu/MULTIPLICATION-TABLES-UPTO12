print("\n\n\n*********************************")
print("      MULTIPLICATION TABLES      ")
print("*********************************")
print("\n\n___________________________________________________________________________________________________\n\n")

while True:
    data = input("\n\nENTER A NUMBER FROM 1 TO 12 (0 TO EXIT): ")
    checkData = data.strip()
    if checkData.isdigit():
        num = int(checkData)
        if num <= 12 and num >= 1:
            break
        elif num == 0: exit(0)

print("\n\n ---------------")

i = 0

while i != num:
    j = i * num
    print("| {:<2d} X {:<2d} = {:<3d} |".format(i, num, j))
    i += 1

j = i * num
print("| {:<2d} X {:<2d} = {:<3d} |".format(i, num, j))
print(" ---------------\n\n\n")


'''
    <	Left aligned to the remaining space
    ^	Center aligned to the remaining space
    >	Right aligned to the remaining space
    =	Forces the signed (+) (-) to the leftmost position
'''
