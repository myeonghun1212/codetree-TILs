#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    unordered_map<int,int> map;
    vector<pair<int,int>> s;
    int n, k;
    cin >> n >> k;

    for(int i =0 ;i < n; i++){
        int t;
        cin >> t;
        map[t]++;
    }
    for(auto & it: map){
        s.push_back(make_pair(it.second, it.first));
    }
    sort(s.begin(), s.end(), greater<pair<int,int>>());

    for(int i =0 ;i < k; i++){
        cout << s[i].second << " ";
    }
    return 0;
}