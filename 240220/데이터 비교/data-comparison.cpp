#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    unordered_set<int> a;
    vector<int> b;

    cin >> n;
    for(int i = 0;i < n;i++){
        int t;
        cin >> t;
        a.insert(t);
    }

    cin >> m;
    for(int i = 0;i < m;i++){
        int t;
        cin >> t;
        b.push_back(t);
    }

    for(int item : b){
        if(a.find(item) != a.end()){
            cout << 1 << ' ';
        }
        else{
            cout << 0 << ' ';
        }
    }

    return 0;
}