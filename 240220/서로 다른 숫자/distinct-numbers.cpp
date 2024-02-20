#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    unordered_set<int> s;
    int n;
    int res = 0;
    cin >> n;
    for(int i =0 ;i < n; i++){
        int t;
        cin >> t;
        if(s.find(t) == s.end()){
            res += 1;
            s.insert(t);
        }
    }
    cout << res;
    return 0;
}