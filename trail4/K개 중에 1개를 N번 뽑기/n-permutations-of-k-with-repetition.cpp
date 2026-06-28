#include <iostream>
#include <vector>

using namespace std;


void go(int k , int n, vector<int> &res){
    if(res.size() == n){
        for(int i = 0; i < n-1; i++){
            cout << res[i] << ' ';
        }
        cout << res[res.size()-1] << '\n';
        return;
    }

    for(int i = 1; i <= k; i++){
        res.push_back(i);
        go(k, n, res);
        res.pop_back();
    }

}

int main() {
    // Please write your code here.
    int k , n;
    cin >> k >> n;
    vector<int> temp;
    go(k, n, temp);
    return 0;
}