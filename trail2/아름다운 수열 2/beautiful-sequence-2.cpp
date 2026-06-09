#include <iostream>

using namespace std;

int N, M;
int a[100];
int b[101]{0,};

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) cin >> a[i];

    for (int i = 0; i < M; i++) {
        int t;
        cin >> t;
        b[t]++;
    }

    // Please write your code here.
    int s = 0;
    int e = 0;
    int T[101]{0,};
    for(int i = 0; i < M; i++){
        T[a[e++]]++;
    }
    int res = 0;
    while(e<=N){
        int isbeautifularr = 1;
        for(int i = 0; i < 101; i++){
            if(T[i] != b[i]) {
                isbeautifularr = 0;
                break;
            }
        }
        if(isbeautifularr) res++;
        T[a[s++]]--;
        T[a[e++]]++;
    }
    cout << res;
    return 0;
}