#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    map<int, int> m;
    int n;
    int k, v;
    string cmd;
    cin >> n;
    for(int i = 0; i< n; i++){
        cin >> cmd;
        if(cmd == "add"){
            cin >> k >> v;
            m[k] = v;
        }
        else if(cmd == "remove"){
            cin >> k;
            m.erase(k);
        }
        else if(cmd == "find"){
            cin >> k;
            if(m.find(k) == m.end()){
                cout << "None\n";
            }
            else{
                cout << m[k] << "\n";
            }

        }
        else{
            if(m.empty()){
                cout << "None\n";
            }
            else{
                for(auto it : m){
                    cout << it.second << " ";
                }
                cout << "\n";
            }
        }
    }
    return 0;
}