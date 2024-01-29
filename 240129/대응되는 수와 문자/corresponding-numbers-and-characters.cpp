#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map<string, int> stoint;
    string* itostring;

    int n, m;

    cin >> n >> m;
    itostring = new string[n+1];
    for(int i =0 ;i < n; i++){
        string s;
        cin >> s;
        stoint[s] = i+1;
        itostring[i+1] = s;
    }
    for(int i =0 ;i < m; i++){
        string s;
        cin >> s;
        int a = atoi(s.c_str());
        if(a != 0){
            cout << itostring[a] << '\n';
        }
        else{
            cout << stoint[s] << '\n';
        }
    }
}