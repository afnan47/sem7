#include<iostream>
#include<vector>
using namespace std;

void printBoard(int board[], int n){
    for(int i = 0; i < n; i++){
        cout << board[i] << " ";
    }
    cout << '\n';
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         if(board[i] == j){
    //             cout << "Q";
    //         }    
    //         else{
    //             cout << "X";
    //         }
    //     }
    //     cout << '\n';
    // }
}

bool isSafe(int board[], int row, int col, int n){
    //[1,3,0,2]
    //consider row = 3, col = 2
    for(int i = 0; i < col; i++){
        int rd = abs(row - i);
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
                solveNqueens(board, row+1, n);
            }
            board[row] = -1;
        }
    }
}


int main(){
    int n = 4;
    // cin >> n;
    int board[n] = {-1};
    solveNqueens(board, 0, n);
    return 0;
}