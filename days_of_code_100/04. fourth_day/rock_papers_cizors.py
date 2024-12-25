# Rock Paper Scissors ASCII Art
import random as rdm
# Rock
rock = """
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
"""

# Paper
paper = """
     _______
---'    ____)____
           ______)
          _______)
         _______)
---.__________)
"""

# Scissors
scissors = """
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
"""
print("What do you choose? Type 0 for Rock, 1 for Paper or 2 for Scissors.")
number = int(input())
options = [rock, paper, scissors]

computer_choose = rdm.randint(0,2)
a = 0
if number != [0,1,2]:
    print("You chose:")
    print(f"{options[number]}")
    print("Computer choose:")
    print(f"{options[computer_choose]}")
    if number == computer_choose:
        a = "You draw"
    elif (number==0 and computer_choose ==2) or (number==1 and computer_choose==0) or (number == 2 and computer_choose==1):
        a = "You win"
    elif (number==2 and computer_choose ==0) or (number==0 and computer_choose==1) or (number == 1 and computer_choose==2):
        a = "You lose"
    else:
        a = "You typed an invalid number, you lose!"
else:
    a = "You typed an invalid number, you lose!"
print(a)