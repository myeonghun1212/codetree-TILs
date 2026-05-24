#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int n;
int x[100];
int y[100];
int result;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    result = INT_MAX;

    for(int i = 1 ; i < n - 1; i++){
        int tres = 0;
        int bx, by;
        bx = x[0]; by = y[0];
        for(int j = 1; j < n; j++){
            if(i == j) continue; // i번째 스킵
            int dis = abs(x[j] - bx) + abs(y[j] - by); // 거리 구하기
            tres += dis;
            bx = x[j]; by = y[j];
        }
        if(tres < result) result = tres;
    }
    cout << result;
    return 0;
}