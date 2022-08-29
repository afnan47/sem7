#include<iostream>
using namespace std;

void printBoard(int board[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[i] == j){
                cout << " Q ";
            }    
            else{
                cout << " X ";
            }
        }
        cout << '\n';
    }
    cout << "\n\n";
}

bool isSafe(int board[], int row, int col, int n){
    for(int i = 0; i < row; i++){
        int rd = abs(row - board[i]);
        int cd = abs(col - board[i]);
        if(rd == cd || rd == 0 || cd == 0) return false;
    }
    return true;
}

void solveNqueens(int board[], int row, int n){
    if(row > n){
        printBoard(board, n);
    }
    else{
        for(int col = 0; col < n; col++){
            if(isSafe(board, row, col, n)){
                board[row] = col;
                solveNqueens(board, row + 1, n);
            }
            board[row] = -1;
        }
    }
}


int main(){
    int n = 3;
    // cin >> n;
    int board[n] = {-1};
    //[-1,-1,-1]
    solveNqueens(board, 0, n);
    return 0;
}