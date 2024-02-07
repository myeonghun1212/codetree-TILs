#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    //freopen("sample_input.txt", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> t1, t2;
    unordered_map<int, int> ab, cd;
    int n;
    int res = 0;
    cin >> n;
    for(int i = 0;i < n; i++){
        int t;
        cin >> t;
        t1.push_back(t);
    }
    for(int i = 0;i < n; i++){
        int t;
        cin >> t;
        t2.push_back(t);
    }
    for(int i : t1){
        for(int j : t2){
            ab[i + j]++;
        }
    }
    t1.clear();
    t2.clear();
    for(int i = 0;i < n; i++){
        int t;
        cin >> t;
        t1.push_back(t);
    }
    for(int i = 0;i < n; i++){
        int t;
        cin >> t;
        t2.push_back(t);
    }
    for(int i : t1){
        for(int j : t2){
            cd[i + j]++;
        }
    }

    for(auto & it1: ab){
        for(auto & it2: cd){
            if(it1.first + it2.first == 0){
                res += it1.second * it2.second;
            }
        }
    }

    cout << res;
    return 0;
}