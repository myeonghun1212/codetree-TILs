#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
int main(){
    string str;
    int n;
    unordered_map<string, int> cnt;
    int res = -1;
    cin >> n;
    for(int i =0 ;i <n; i++){
        cin >> str;
        if(cnt.find(str) != cnt.end()){
            cnt[str] ++;
        }
        else{
            cnt[str] = 1;
        }
        if(cnt[str] > res) res = cnt[str];
    }
    cout << res;
}