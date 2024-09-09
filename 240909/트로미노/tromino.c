#include <stdio.h>

int arr[202][202]={0,};
int n, m;

//ㄴ자 모양 계산
int calcshape1(int x, int y){
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};

    int center = arr[y][x];
    int max = -1, temp;
    for(int i = 0;i < 4; i++){
        temp = center + arr[y + dy[i]][x + dx[i]] + arr[y + dy[(i + 1) % 4]][x + dx[(i + 1) % 4]];
        max = max > temp ? max : temp;
    }
    return max;
}

//ㅡ자 모양 계산
int calcshape2(int x, int y){
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};

    int center = arr[y][x];
    int max = -1, temp;
    for(int i = 0;i < 2; i++){
        temp = center + arr[y + dy[i]][x + dx[i]] + arr[y + dy[(i + 2) % 4]][x + dx[(i + 2) % 4]];
        max = max > temp ? max : temp;
    }
    return max;
}

int main() {
    scanf("%d %d", &n, &m);

    for(int i = 1 ;i <= n; i++){
        for(int j =1; j <= m; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int max = -1;
    for(int i = 1 ;i <= n; i++){
        for(int j =1; j <= m; j++){
            int t1 = calcshape1(j, i);
            int t2 = calcshape2(j, i);
            max = max > t1 ? max : t1;
            max = max > t2 ? max : t2;
        }
    }

    printf("%d", max);

    return 0;
}