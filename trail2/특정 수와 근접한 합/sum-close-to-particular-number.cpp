#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int sum = 0;
int N, S;
int arr[100];

int main() {
    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    // Please write your code here.
    int result = INT_MAX;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i == j) continue;
            if(abs(S - (sum - arr[i] - arr[j])) < result){
               result = abs(S - (sum - arr[i] - arr[j]));
            }
        }
    }
    cout << result;
    return 0;
}