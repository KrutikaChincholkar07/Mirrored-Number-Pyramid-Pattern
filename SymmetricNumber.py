rows = 4
for i in range(1, rows + 1):
    # Left side increasing numbers
    for j in range(1, i + 1):
        print(j, end=" ")
    
    # Spaces in the middle
    print("  " * (rows - i), end="")
    print("  " * (rows - i), end="")
    
    # Right side decreasing numbers
    for j in range(i, 0, -1):
        print(j, end=" ")
    
    print()
