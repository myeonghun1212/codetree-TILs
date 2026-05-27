#include <iostream>
#include <cmath>

using namespace std;

int N;
int arr[20][20];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> arr[i][j];

    // Please write your code here.
    int res = -1;

    for(int i = 0; i < N; i++){
        for(int j = 0 ; j <= N-3; j++){
            //i , j : 첫번째 13위치
            for(int k = 0; k < N ; k++){
                for(int l = 0; l <= N-3;l ++){
                    //k,l : 두번째 13 위치
                    //둘이 겹침?
                    int tsum = 0;
                    if(i == k && abs(j - l) < 3){
                        //겹침
                        continue;
                    }
                    
                    for(int t = 0; t < 3; t++){
                        tsum += arr[i][j+t] + arr[k][l+t];
                    }

                    if(tsum > res) res = tsum;
                }
            }
        }
    }
    cout << res;
    return 0;
}