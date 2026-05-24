#include <iostream>
#include <climits>

using namespace std;

int n;
int a[1003];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int result = INT_MAX;
    // Please write your code here.
    for(int i = 0; i < n; i++){ // i 번째 방에서 시작
        int tres = 0;
        for(int j = 0; j < n; j++){
            int rn = (i + j ) % n; // 지금 방 번호
            tres += a[rn] * j; // 방에 필요한 인원 * 방까지 이동한 거리(j)
        }
        if(tres < result) result = tres;
    }
    cout << result;
    return 0;
}