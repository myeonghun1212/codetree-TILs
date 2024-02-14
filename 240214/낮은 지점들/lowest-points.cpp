#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    int x, y;
    int n;
    unordered_map<long long int,long long int> map;
    cin >> n;
    for(int i = 0;i < n; i++){
        cin >> x >> y;
        if(map.find(x) != map.end()){
            map[x] = map[x] < y ? map[x] : y;
        }
        else{
            map[x] = y;
        }
    }
    long long int res = 0;
    for(auto it : map){
        res += it.second;
    }
    cout << res;
    return 0;
}