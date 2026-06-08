#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int cnt = 0;
    for(int s = 0; s < n ; s++){
        for(int e = 0; e < n; e++){
            double temp = 0;
            for(int i = s; i <= e; i++){
                temp += arr[i];
            }
            temp /= (e - s + 1);
            //cout << temp << ' ';
            for(int i = s; i <= e; i++){
                if(temp == arr[i]){
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}