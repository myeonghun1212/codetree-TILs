#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    unordered_map<int,int> map;

    int n, k, v;
    string cmd;
    cin >> n;
    for(int i =0 ;i < n; i++){
        cin >> cmd;
        if(cmd == "add"){
            cin >> k >> v;
            map[k] = v;
        }
        if(cmd == "remove"){
            cin >> k;
            map.erase(k);
        }
        if(cmd == "find"){
            cin >> k;
            if(map.find(k) != map.end()){
                cout << map[k];
            }
            else{
                cout << "None";
            }
            cout << "\n";
        }
        
    }
    return 0;
}