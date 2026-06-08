#include <iostream>
#include <climits>

using namespace std;

int n, k;
int arr[100];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int result = INT_MIN;
    for(int i =0 ;i <= n - k; i++){
        int temp = 0;
        for(int j = 0; j < k ;j++){
            temp += arr[i+j];
        }
        if(temp > result) result = temp;
    }
    cout << result;
    return 0;
}