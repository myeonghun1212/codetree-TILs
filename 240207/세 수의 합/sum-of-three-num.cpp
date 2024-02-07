#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    unordered_map<int,int> map;
    vector<int> arr;
    int n, k;
    cin >> n >> k;

    for(int i = 0;i < n; i++){
        int t;
        cin >> t;
        arr.push_back(t);
        if(map.find(t) != map.end()){
            map[t]++;
        }
        else{
            map[t] = 1;
        }
    }
    int ans = 0;

    for(int i = 0;i < n; i++){
        map[arr[i]]--;
        for(int j = 0; j < i; j++){
            if(map.count(k - arr[i] - arr[j]) > 0)
                ans += map[k - arr[i] - arr[j]];
        }
    }

    cout << ans;
    return 0;
}