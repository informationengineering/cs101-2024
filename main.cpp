#include <iostream>
using namespace std;

int start = 0;//是不是遊戲剛開始
int change = 0;//切換player 1.2
int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};//串列儲存or 二維陣列1-9的使用狀況->跳出錯誤訊息、重新輸入
int save[9] = {0,0,0,0,0,0,0,0,0};
int match = 0;
//勝利條件 
//(1) (i,j) = (0,0)(0,1)(0,2) 
//(2) (i,j) = (0,0)(1,0)(2,0) 
//(3) (i,j) = (0,0)(1,1)(2,2)
//(4) (i,j) = (0,2)(1,1)(2,0)
//else: 平手


class TicTacToe{
    public:
        int num;
        void run(){
            cin >> num;
            if(start == 0){
                cout << "-- Tic Tac Toe -- CSIE@CGU\n";
                cout << "Player 1 (X) - Player 2 (O)\n";
                cout << " 1 | 2 | 3 \n";
                cout << "---+---+---\n";
                cout << " 4 | 5 | 6 \n";
                cout << "---+---+---\n";
                cout << " 7 | 8 | 9 \n";
                cout << "==> Player 1 (X), enter a number:\n";
                start = 1;
            }else if(start == 1){
                check(num);
                output();
                win();
            }
    }
    
    void check(int a){
        int count = 0;
        
        if(match != 1){
            if(save[a-1] == 1){
                cout << "Invalid value, please enter again\n";
            if(change%2 == 0){
                cout << "==> Player 1 (X), enter a number:\n";
            }else if(change%2 == 1){
                cout << "==> Player 2 (O), enter a number:\n";
            }
            run();
        }else{
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    if(arr[i][j] == a){
                        if(change%2 == 0){
                            arr[i][j] = "X";
                        }else if(change%2 == 1){
                            arr[i][j] = "O";
                        }
                        change++;
                        break;
                    }
                    count++;
                    }
                }
            save[count] = 1;
            }
        }
    }
    void output(){
        for(int i = 0; i < 3; i++){
            cout << " " << arr[i][0] << " | " << arr[i][1] << " | " << arr[i][2] << endl;
            if(i != 2){
                cout << "---+---+---\n";
            }
        }
    }
    
    void win(){
        int temp = 0;
        for(int i = 0; i < 9; i++){
            if(save[i] == 1){
                temp++;
            }
        }
        
        if(temp == 9){
            match = 1;
        }
        
        for(int i = 0; i < 3; i++){
            if(arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2]){
                if(arr[i][0] == 'X'){
                    cout << "==> Player 1 (X) wins!";
                }else{
                    cout << "==> Player 2 (O) wins!";
                }
                break;
            }else if(arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0]){
                if(arr[0][0] == 'X'){
                    cout << "==> Player 1 (X) wins!";
                }else{
                    cout << "==> Player 2 (O) wins!";
                }
                break;
            }else if(arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1]){
                if(arr[0][1] == 'X'){
                    cout << "==> Player 1 (X) wins!";
                }else{
                    cout << "==> Player 2 (O) wins!";
                }
                break;
            }else if(arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2]){
                if(arr[0][2] == 'X'){
                    cout << "==> Player 1 (X) wins!";
                }else{
                    cout << "==> Player 2 (O) wins!";
                }
                break;
            }else if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]){
                if(arr[0][0] == 'X'){
                    cout << "==> Player 1 (X) wins!";
                }else{
                    cout << "==> Player 2 (O) wins!";
                }
                break;
            }else if(arr[0][2] == arr[1][1] && arr[1][0] == arr[2][0]){
                if(arr[0][2] == 'X'){
                    cout << "==> Player 1 (X) wins!";
                }else{
                    cout << "==> Player 2 (O) wins!";
                }
                break;
            }else{
                cout << "==> Game draw";
                break;
            }
        }
    }
    
};


int main()
{
    TicTacToe game;
    game.run();
    return 0;
}