#include <iostream>
#include <climits>

using namespace std;

int N, K;
int x[100];
char c[100];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> c[i];
    }

    // Please write your code here.
    int arr[10001]{0,};
    for(int i =0;i < N; i++){
        arr[x[i]] += (c[i] == 'G' ? 1 : 2);
    }
    
    int s[10001]{0,};
    s[0] = arr[0];
    for(int i = 1; i <= 10000; i++){
        s[i] = s[i-1] + arr[i];
        //cout << s[i] <<' ';
    }

    int result = INT_MIN;
    for(int i = 0; i <= 10000-K; i++){
        int temp = s[i+K] - s[i-1];
        if(result < temp) result = temp;
    }

    cout << result;
    return 0;
}