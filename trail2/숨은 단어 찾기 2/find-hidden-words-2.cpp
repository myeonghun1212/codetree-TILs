#include <iostream>
#include <string>

using namespace std;

int N, M;
string arr[50];

int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
string target = "LEE";

bool isLegalRange(int a, int r){
    return a >= 0 && a < r;
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int result = 0;
    for(int y = 0; y < N; y++){
        for(int x = 0; x < M; x++){
            for(int i = 0; i < 8; i++){
                bool islee = true;
                for(int j = 0; j < 3; j++){
                    if(!(isLegalRange(y + dy[i] * j, N) &&
                    isLegalRange(x + dx[i] * j, M))){
                        islee = false;
                        break;
                    }
                    if(arr[y + dy[i] * j][x + dx[i] * j] != target[j]){
                        islee = false;
                        break;
                    }
                }
                if(islee){
                    result++;
                    //cout << x << ' ' << y << ' ' << i << '\n';
                }
            }
        }
    }
    cout << result;
    
    return 0;
}