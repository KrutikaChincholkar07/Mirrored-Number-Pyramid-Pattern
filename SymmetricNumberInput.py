# Take input from user
n = int(input("Enter number of rows: "))

for i in range(1, n + 1):
    # Left side increasing numbers
    for j in range(1, i + 1):
        print(j, end=" ")

    # Spaces in the middle
    spaces = 2 * (n - i)
    print("  " * spaces, end="")

    # Right side decreasing numbers
    for j in range(i, 0, -1):
        print(j, end=" ")

    print()
