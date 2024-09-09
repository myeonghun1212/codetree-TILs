#include <iostream>
using namespace std;

int arr[21][21]{0,};

int calc(int x, int y){
    int sum =0;
    for(int i =0;i < 3; i++){
        for(int j =0; j < 3; j++){
            sum += arr[y+i][x+j];
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    for(int i =0;i < n ;i++){
        for(int j =0;j < n;j++){
            cin >> arr[i][j];
        }
    }
    int mv = -1;
    for(int i =0;i <= n -3; i++){
        for(int j =0;j <= n -3; j++){
            int temp =  calc(j, i);
            if(mv < temp){
                mv = temp;
            }
        }
    }
    cout << mv;
    return 0;
}