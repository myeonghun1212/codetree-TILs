#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int,int> map;

    int m, n;
    cin >> n >> m;
    for(int i =0 ;i < n;i++){
        int t;
        cin >> t;
        if(map.find(t) != map.end()){
            map[t]++;
        }
        else{
            map[t] = 1;
        }
    }

    for(int i =0 ;i < m; i++){
        int t;
        cin >> t;
        if(map.find(t) != map.end()){
            cout << map[t] << " ";
        }
        else{
            cout << "0 ";
        }

    }

    return 0;
}