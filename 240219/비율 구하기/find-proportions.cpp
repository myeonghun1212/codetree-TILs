#include <iostream>
#include <iomanip>
#include <map>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    map<string, int> m;
    cin >> n;
    for(int i = 0;i < n; i++){
        string a;
        cin >> a;
        m[a]++;
    }
    for(auto it : m){
        cout << it.first << " " << setprecision(4) << fixed << it.second / (float) n  * 100 << "\n";
    }
    return 0;
}