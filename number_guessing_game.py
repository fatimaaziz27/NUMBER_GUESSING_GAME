import random
n=random.randint(1,100)
a=-1
guesses=0
while a != n:
    guesses += 1
    a = int(input("Enter a number: "))
    if a > n :
        print("Enter lower number")
    elif a < n:
        print("Enter higher number")
print(f"The number you geussed in {guesses} attempt.")
