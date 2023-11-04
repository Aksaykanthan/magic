
def print_chessboard(n,x):
    f = "W"
    s = "B"
    if x == "B":
        f,s = s,f

    for i in range(n):
        for j in range(n):
            if (i+j+2)%2==0: 
                print(f,end = " ")
            else:
                print(s,end=" ")
        print()

print_chessboard(8,"W")