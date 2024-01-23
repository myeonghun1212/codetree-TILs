#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){
    //freopen("sample_input.txt", "r", stdin);
    
    int n, ss;
    vector<int> arr;
    arr.push_back(0);
    cin >> n >> ss;
    for(int i =0 ;i < n; i++){
      int t;
      cin >> t;
      arr.push_back(arr[arr.size() - 1] + t);
    }    
    int s, e;
    s = e = 1;
    int res = -1;
    while(true){
      int size = arr[e] - arr[s - 1];
      
      if(size > ss){
        if(res == -1) res = e - s + 1;
        else res = min(res, e - s + 1);
        s += 1;
        if(s > e) break;
      }
      else{
        e += 1;
        if(e > n) break;
      }
    }
    cout << res;
    return 0;
}