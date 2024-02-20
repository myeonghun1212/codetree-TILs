#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    map<string, int> cnt;
    int n;
    cin >> n;
    for(int i =0; i < n;i++){
        string temp;
        cin >> temp;
        cnt[temp]++;
    }
    for(auto it : cnt){
        cout << it.first << " " << it.second << "\n";
    }
    return 0;
}