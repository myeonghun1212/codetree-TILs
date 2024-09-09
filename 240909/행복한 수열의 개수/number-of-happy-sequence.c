#include <stdio.h>

int arr[101][101]={0,};

int ishappysequence(int t, int n,int m, int isrow){
    int cnt = -1, last = -1;
    int maxcnt = -1;
    for(int i =0;i < n; i++){
        if(isrow){
            if(last == arr[t][i]){
                cnt++;
            }
            else{
                cnt = 1;
            }
            maxcnt = maxcnt > cnt ? maxcnt : cnt;
            last = arr[t][i];
        }
        else{
            if(last == arr[i][t]){
                cnt++;
            }
            else{
                cnt = 1;
            }
            maxcnt = maxcnt > cnt ? maxcnt : cnt;
            last = arr[i][t];
        }
    }
    //if(maxcnt >= m) printf("%d %d %d %d\n", t, n, m, isrow);
    return maxcnt >= m;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    int res = 0;
    scanf("%d %d", &n, &m);

    for(int i =0; i< n ;i++){
        for(int j = 0; j < n ;j ++){
            scanf("%d ", &arr[i][j]);
        }
    }

    for(int i =0; i< n ;i++){
        res += ishappysequence(i, n, m, 0);
        res += ishappysequence(i, n, m, 1);
    }
    printf("%d", res);
    return 0;
}