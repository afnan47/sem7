def isSafe(i, j, board, N):
    #Row Attack
    for k  in range(j):
        if board[i][k] == 1:
            return True
    
    #Column Attack
    for k in range(i):
        if board[k][j] == 1:
            return True
    
    #Diagonal Attack row - 1, col - 1
    x = i
    y = j
    while(i > 0 and j > 0):
        
