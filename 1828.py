n = int(input())

for i in range(n):
    spock = "Spock"
    lizard = "lagarto"
    scissor = "tesoura"
    paper = "papel"
    rock = "pedra"

    sheldon, raj = input().split()

    if sheldon == spock:
        if raj == spock:
            print(f"Caso #{i+1}: De novo!")
        elif raj == paper or raj == lizard:
            print(f"Caso #{i+1}: Raj trapaceou!")
        else:
            print(f"Caso #{i+1}: Bazinga!")
    if sheldon == scissor:
        if raj == scissor:
            print(f"Caso #{i+1}: De novo!")
        elif raj == spock or raj == rock:
            print(f"Caso #{i+1}: Raj trapaceou!")
        else:
            print(f"Caso #{i+1}: Bazinga!")
    if sheldon == paper:
        if raj == paper:
            print(f"Caso #{i+1}: De novo!")
        elif raj == scissor or raj == lizard:
            print(f"Caso #{i+1}: Raj trapaceou!")
        else:
            print(f"Caso #{i+1}: Bazinga!")
    if sheldon == rock:
        if raj == rock:
            print(f"Caso #{i+1}: De novo!")
        elif raj == paper or raj == spock:
            print(f"Caso #{i+1}: Raj trapaceou!")
        else:
            print(f"Caso #{i+1}: Bazinga!")
    if sheldon == lizard:
        if raj == lizard:
            print(f"Caso #{i+1}: De novo!")
        elif raj == rock or raj == scissor:
            print(f"Caso #{i+1}: Raj trapaceou!")
        else:
            print(f"Caso #{i+1}: Bazinga!")