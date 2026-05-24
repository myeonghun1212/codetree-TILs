#include <iostream>

using namespace std;

int n;
int arr[20];

int carrydetect(int a, int b, int c){
    int div = 10;
    for(int i = 0;i < 5; i++){//10000이하수만 주어짐
        if(a % div + b % div + c % div >= 10) return 1; // carry 발생
        a = a / div;
        b = b / div;
        c = c / div;
    }
    return 0;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int res = -1;
    for(int i = 0; i < n-2; i++){
        for(int j = i + 1; j < n - 1; j++){
            for(int k = j + 1; k < n; k++){
                if(!carrydetect(arr[i],arr[j],arr[k]) && arr[i] + arr[j] + arr[k] > res){
                    res = arr[i] + arr[j] + arr[k];
                }
            }
        }
    }
    cout << res;
    return 0;
}