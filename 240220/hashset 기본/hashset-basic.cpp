#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    unordered_set<int> s;
    int n, t;
    cin >> n;
    string cmd;
    for(int i = 0;i < n; i++){
        cin >> cmd;
        if(cmd == "add"){
            
            cin >> t;
            s.insert(t);
        }
        else if(cmd == "remove"){
            
            cin >> t;
            s.erase(t);
        }
        else{
            cin >> t;
            if(s.find(t) != s.end()){
                cout << "true\n";
            }
            else{
                cout << "false\n";
            }
        }
    }
    return 0;
}