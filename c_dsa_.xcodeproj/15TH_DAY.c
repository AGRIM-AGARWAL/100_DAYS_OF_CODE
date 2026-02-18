# Read rows and columns
m, n = map(int, input().split())

# Read matrix
matrix = []
for i in range(m):
    row = list(map(int, input().split()))
    matrix.append(row)

# Check if square
if m != n:
    print("Not a Symmetric Matrix")
else:
    symmetric = True
    
    # Check symmetry
    for i in range(m):
        for j in range(n):
            if matrix[i][j] != matrix[j][i]:
                symmetric = False
                break
        if not symmetric:
            break
    
    if symmetric:
        print("Symmetric Matrix")
    else:
        print("Not a Symmetric Matrix")