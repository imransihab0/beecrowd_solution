n = int(input())

for i in range (n):
    nameone, chone, nametwo, chtwo = input().split()
    numone, numtwo = map(int, input().split())

    if (numone+numtwo)%2==0:
        if chone == "PAR":
            print(nameone)
        else:
            print(nametwo)

    else:
        if chone == "IMPAR":
            print(nameone)
        else:
            print(nametwo)