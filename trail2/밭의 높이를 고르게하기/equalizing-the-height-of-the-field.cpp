#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int n, h, t;
    vector<int> arr;
    cin >> n >> h >> t;
    arr.resize(n, 0);
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = abs(h - input); // h높이로 만드는데 필요한 비용
    }


    int result = INT_MAX;
    for(int i = 0; i <= n-t; i++){
        int temp = 0;
        for(int j = 0; j < t; j++){
            temp += arr[i + j];
        }
        if(result > temp) result = temp;
    }
    cout << result;

    return 0;
}

