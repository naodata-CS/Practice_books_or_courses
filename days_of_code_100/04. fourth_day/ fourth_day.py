import random as rdm
import my_module
random_integer = rdm.randint(1,5)
random_float = rdm.random() * 5
print(random_integer)
print(my_module.PI)
print(random_float)
random_love = rdm.randint(1,100)
print(f"Your love score is {random_love}")
if random_love < 20:
    print("Your love is probably fake")
elif random_love > 20 and random_love < 40:
    print("Your love is true, but not good")
elif random_love > 40 and random_love < 80:
    print("Your love is true and good, but not perfect")
else:
    print("Their love are the most perfect thing on earth")

#Data sttrucutres are ways of storing single pieces of data: lists
list_random_numbers = [random_integer, random_float, "hello", "world"]
print(list_random_numbers)
for i in list_random_numbers:
    print(i)
random_print = rdm.randint(0,3)
print(list_random_numbers[random_print])
list_random_numbers.append("!")
print(list_random_numbers)
list_random_numbers.extend(["Hello","friends","!"])
print(list_random_numbers)
print("Fourth day challenge completed")

