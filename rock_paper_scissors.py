#birsuyilmaz
import random

exit = False
computer_score = 0
user_score = 0
while (exit == False):
    options = ["rock", "paper", "scissor"]
    user_input = input("\nDo you wanna play a game with me, human?\nChoose rock, paper, scissor or exit: ")
    user_input = user_input.lower()
    computer_input = random.choice(options)
    print(f"\nI chose {computer_input} and you chose {user_input}")
    match user_input:
        
        case "rock": 
            if (computer_input == "rock"):
                print(f"It is a tie. {user_score}-{computer_score}")
                computer_score += 1
                user_score += 1
            elif(computer_input == "paper"):
                computer_score += 1
                print(f"I beat you on this one, human. {user_score}-{computer_score}")
            else:
                user_score += 1
                print(f"You beat me on this one, human. {user_score}-{computer_score}")
                
        case "paper":
            if (computer_input == "paper"):
                computer_score += 1
                user_score += 1
                print(f"It is a tie. {user_score}-{computer_score}")
            elif(computer_input == "scissor"):
                computer_score += 1
                print(f"I beat you on this one, human. {user_score}-{computer_score}")
            else:
                user_score += 1
                print(f"You beat me on this one, human. {user_score}-{computer_score}")
                
        case "scissor":
            if (computer_input == "scissor"):
                computer_score += 1
                user_score += 1
                print(f"It is a tie. {user_score}-{computer_score}")
            elif(computer_input == "rock"):
                computer_score += 1
                print(f"I beat you on this one, human. {user_score}-{computer_score}")
            else:
                user_score += 1
                print(f"You beat me on this one, human. {user_score}-{computer_score}")
        
        case "exit":
            print("Thank you for playing with me, human")
            exit == True
        
        case _:
            print(f"Do not cheat, human. This {user_input} is not an option.")
#birsuyilmaz