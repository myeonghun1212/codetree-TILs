#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int R, C;
char grid[15][15];

deque<pair<pair<int,int>, int>> q;

pair<pair<int,int>, int> make_item(int y, int x, int cnt){
    return make_pair(make_pair(y,x), cnt);
}

int main() {
    int res = 0;
    cin >> R >> C;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    q.push_front(make_item(0,0,0));

    while(!q.empty()){
        pair<pair<int,int>, int> temp = q.back();
        q.pop_back();
        pair<int,int> pos = temp.first;
        int cnt = temp.second;
        char c = grid[pos.first][pos.second];

        if(cnt == 3){
            if(pos.first == R-1 && pos.second == C-1){
                res++;
            }
            continue;
        }

        for(int i = pos.first + 1; i < R; i++){
            for(int j = pos.second + 1; j < C; j++){
                if(c != grid[i][j]){
                    q.push_front(make_item(i, j, cnt + 1));
                }
            }
        }
    }
    cout << res;
    return 0;
}