# SARIKAS NIKOLAOS - TEP B' - 6914 - 26/4/2023

print("-----------------------------------------")
x = int (input("Dwse ena tripsifio arithmo\n> "))

while x>999: # an den einai tripsifios
    x = int(x/10)

y1 = x//100
y2 = (x%100)//10
y3 = x%10

print("O arithmos %d apoteleitai apo ta pshfia:" %x)

if y1:
    print("\t\t", y1, y2, y3)
elif y2:
    print("\t\t", y2, y3)
else:
    print("\t\t", y3)

print("-----------------------------------------\n")
input("Press a button to exit....")

