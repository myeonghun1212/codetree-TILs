#include <iostream>

using namespace std;

int board[19][19];

int main() {
    for (int i = 0; i < 19; i++)
        for (int j = 0; j < 19; j++) cin >> board[i][j];

    // Please write your code here.
    for(int i = 0; i < 19; i++){
        for(int j = 0; j < 19; j++){
            int col = board[i][j];
            int cnt = 0;
            if(col == 0) continue;
            if(j + 4 < 19){
                for(int k = 0; k < 5; k++){
                    if(board[i][j + k] == col) cnt++;
                }
                if(cnt == 5){
                    cout << col << '\n' << i + 1  << ' ' << j + 3;
                    return 0;
                }
                cnt = 0;
            }
            if(i + 4 < 19){
                for(int k = 0; k < 5; k++){
                    if(board[i + k][j] == col) cnt++;
                }
                if(cnt == 5){
                    cout << col << '\n' << i + 3 << ' ' << j + 1;
                    return 0;
                }
                cnt = 0;
            }
            if(i + 4 < 19 && j + 4 < 19){
                for(int k = 0; k < 5; k++){
                    if(board[i + k][j + k] == col) cnt++;
                }
                if(cnt == 5){
                    cout << col << '\n' << i + 3 << ' ' << j + 3;
                    return 0;
                }
                cnt = 0;
            }
            if(i + 4 < 19 && j - 4 > -1){
                for(int k = 0; k < 5; k++){
                    if(board[i + k][j - k] == col) cnt++;
                }
                if(cnt == 5){
                    cout << col << '\n' << i + 3 << ' ' << j - 1;
                    return 0;
                }
                cnt = 0;
            }
        }
    }
    cout << "0";
    return 0;
}