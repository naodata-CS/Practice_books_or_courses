print("Welcome to Tresure Island.")
print("Your mission is to find the treasure")
direction = input("You're at a cross road. Where de you want to go? Type \"left\" or \"right\"\n",)
if direction == "left":
    print("You came to a lake. There is an island in the middle of the lake. Type \"wait\" to wait for a boat. Type \"swim\" to swim across.")
    action = input()
    if action == "wait":
        print("You arrived at the island unharmed. The There is a house with 3 doors. One red, one yellow and one blue. Which colour do you choose?")
        color = input()
        if color == "yellow":
            print("You Win!")
        elif color == "blue":
            print("Eaten by beasts. Game Over.")
        elif color == "red":
            print("Burned by fire. Game over.")
        else:
            print("Game Over.")
    else:
        print("Attacked by trout. Game Over.")
else:
    print("Fall into a hole. Game Over.")
