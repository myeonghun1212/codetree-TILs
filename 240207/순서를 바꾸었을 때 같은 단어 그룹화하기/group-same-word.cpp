#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    unordered_map<string, int> map;
    string a;
    int n;
    cin >> n;
    for(int i =0 ;i < n ;i++){
        cin >> a;
        sort(a.begin(), a.end());
        map[a]++;
    }
    int res = -1;
    for(auto & it: map){
        if(it.second > res) res = it.second;
    }
    cout << res;
    return 0;
}