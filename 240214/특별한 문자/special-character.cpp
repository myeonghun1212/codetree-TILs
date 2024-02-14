#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(){
    string s;
    cin >> s;
    unordered_map<char, int> map;
    for(char c : s){
        map[c]++;
    }
    for(char c : s){
        if(map[c] == 1){
            cout << c;
            return 0;
        }
    }
    cout << "None";
    return 0;
}