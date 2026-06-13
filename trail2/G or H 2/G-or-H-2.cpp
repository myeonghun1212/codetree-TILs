#include <iostream>

using namespace std;

int N;
int pos[100];
char alpha[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> pos[i] >> alpha[i];
    }

    // Please write your code here.
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(pos[i] > pos[j]){
                pos[i] ^= pos[j] ^= pos[i] ^= pos[j];
                alpha[i] ^= alpha[j] ^= alpha[i] ^= alpha[j];
            }
        }
    }
    int result = -1;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int G = 0, H = 0;
            int mi = 101, mx = -1;
            for(int k = i; k <= j; k++){
                if(alpha[k] == 'G') G++;
                else H++;
                if(pos[k] > mx) mx = pos[k];
                if(pos[k] < mi) mi = pos[k];
            }
            if(G == 0 || H == 0 || (G == H)) {
                if(result < mx - mi) result = mx - mi;
            }
        }
    }
    cout << result;
    return 0;
}