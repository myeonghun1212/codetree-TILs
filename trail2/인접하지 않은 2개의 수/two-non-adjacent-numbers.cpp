#include <iostream>
#include <climits>

using namespace std;

int n;
int numbers[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    // Please write your code here.
    int result = INT_MIN;

    for(int i = 0; i < n - 2; i++){
        for(int j = i + 2; j < n; j++){
            if(result < numbers[i] + numbers[j]) result = numbers[i] + numbers[j];
        }
    }
    cout << result;
    return 0;
}