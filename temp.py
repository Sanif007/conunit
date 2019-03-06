print(" 1. °C to K ")
print(" 2. K to °C  ")
print(" 3. °C to °F ")
print(" 4. °F to °C ")
print(" 5. K to °F ")
print(" 6. °F to K ")
op = input(" >>> ")
if op == "1" :
       num1 = float(input("Enter temp in °C  : "))
       result = str(num1 + 273 )
       print("Temp in K is : " +result)
elif op == "2" :
       num1 = float(input("Enter temp in K : "))
       result = str(num1 - 273 )
       print("Temp in °C is : " +result)
elif op == "3" :
       num1 = float(input("Enter temp in °C : "))
       result = str( ( num1 * 1.8) + 32 )
       print("Temp in °F is : " +result)
elif op == "4" :
       num1 = float(input("Enter temp. in °F : "))
       result = str( (num1 - 32) * (5 / 9) )
       print("Temp in °C is : " +result)
elif op == "5" :
       num1 = float(input("Enter temp in K : "))
       intermediate = num1 - 273 
       result = str( (intermediate * 1.8 ) + 32)
       print("Temp in °F is : " +result)
elif op == "6" :
       num1 = float(input("Enter temp in °F : "))
       intermediate = ( (num1 - 32) * (5 / 9) )
       result = str(intermediate + 273 )
       print("Temp in K is : " +result)
else : 
       print(" Invalid option !! ")