#include <iostream>
#include <unordered_map>
using namespace std;


int main(){
    unordered_map<int,int> map;
    int n , k;
    int res = 0;
    cin >> n >> k;
    for(int i =0 ;i < n; i++){
        int t;
        cin >> t;
        if(map.find(t) == map.end()){
            map[t] = 1;
        }
        else{
            map[t]++;
        }
    }
    
    for(auto& i : map){
        if(map.find(k - i.first) != map.end()){
            if(i.first * 2 == k){
                res += i.second * (i.second - 1);
            }
            else{
                res += i.second * map[k - i.first];
            }
        }
    }
    cout << res / 2;
    
}