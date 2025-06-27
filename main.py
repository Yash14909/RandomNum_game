import random
n=random.randint(1,100)
a=-1
guesses=0
while(a != n):
    
     a=int(input("Guess a Number:"))
     if(a>n):
          print("Lower num please!")
          guesses+=1
     elif(a<n):
          print("Higher num please!")
          guesses+=1          
print(f"You have guessed the num in {guesses}attempt")          