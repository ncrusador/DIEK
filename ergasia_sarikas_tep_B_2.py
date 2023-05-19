# SARIKAS NIKOLAOS - TEP B' - 6914 - 14/5/2023
# ergasia 1.1 reworked

print("-------------------------------------------")

count = x = 1
while x: # dwse 0 gia eksodo
    print()
    while 2023:
        x = float (input("(%d) Dwse akeraio tripshfio arithmo: " %count))
        x = int(x) # float->int: gia anoxh dekadikou lathous sthn eisodo
        if x<1000 and x>-1000:
              break
    
    p = "thetikos"
    if x<0:
        x *= -1
        p = "arnhtikos"

    y1 = x//100
    y2 = (x%100)//10
    y3 = x%10
    print("O %s (%d) apoteleitai apo ta pshfia:\n\t\t" %(p, x), y1, y2, y3)
    count += 1

print("-------------------------------------------\n")
input("\tPress a button to exit....")

# end
