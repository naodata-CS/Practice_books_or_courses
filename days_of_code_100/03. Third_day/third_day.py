#Conditionales if condition: / else:
height = float(input("What is your height in cm?: "))
bill=0
if height >= 120:
    print("Print ticket")
    print("Have a good time")
    number = int(input("Write your age: "))
    if number<12:
        bill = 5      
    elif number <=18:
        bill = 7
    else:
        bill=12
    
    wants_photo=input("Do you want a photo taken? Y or N. ")     
    if wants_photo == "Y":
        bill +=3
        print(f"Now your total bill is: {bill}")
    else:
        print(f"Your ticket price is ${bill}")     
else:
    print("Too short, you can't go")
#comparison operators >,<,>=,<=,== (checking values)
#Nested if/else
"""
if condition:
    if another condition:
        do this
    elif:
        do this
    else:
        do this
else:
    do this
"""
"""
if condition:
    do this
elif condition:
    do this
else:
    do this
"""




