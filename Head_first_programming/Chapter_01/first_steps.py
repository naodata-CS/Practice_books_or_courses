from random import randint #First import the libraries

secret = randint(1,10) #Create secrete variable, store random number between 1 to 10
print("Welcome") #Show welcome to user
guess = 0 #Assign 0, store default valuate. Use only to create the variable

while guess != secret: #Start the loop
    guess = int(input("Guess the number: ")) #Introduce the number
    if guess == secret: #First condition
        print("You win!")
    else:
        if guess > secret: #condition to show user if it is high or low
            print("Too high")
        else:
            print("too low")

print("Game over!") #End of the program
print("Hello family")
