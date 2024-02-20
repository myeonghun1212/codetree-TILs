#include <iostream>
#include <map>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    map<int,int> m;
    cin >> n;
    for(int i =0 ;i < n ;i++){
        int t;
        cin >> t;
        if(m.find(t) == m.end()){
            m[t] = i + 1;
        }
    }
    for(auto it : m){
        cout << it.first << " " << it.second << "\n";
    }
    return 0;
}