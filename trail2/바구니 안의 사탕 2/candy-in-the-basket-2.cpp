#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int n, k;
int candy[100], pos[100];

bool isin(int c){
    return 1 <= c && c <= 100;
}

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> candy[i] >> pos[i];
    }

    // Please write your code here.
    int result = INT_MIN;
    for(int i = 1; i <= 100; i++){
        int temp = 0;
        //i가 c
        //cout << max(1, i-k) <<' '<< min(100, i+k) <<endl;
        for(int j = 0; j < n; j++){
            if(max(1, i-k) <= pos[j] && min(100, i+k) >= pos[j]){
                temp += candy[j];
            }
        }
        if(temp > result) result = temp;
    }
    cout << result;
    return 0;
}