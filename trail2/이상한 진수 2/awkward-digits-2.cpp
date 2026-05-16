#include <iostream>
#include <string>
#include <vector>

using namespace std;

string a;
vector<int> ba;

int calc(vector<int> arr){
    int res = 0;
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        res *= 2;
        res += *it;
    }
    return res;
}

int main() {
    cin >> a;

    // Please write your code here.
    for(int i = 0;i < a.length(); i++){
        char c = a.at(i);
        ba.push_back(c - '0');
    }

    int res = -1;
    for(auto it = ba.begin(); it != ba.end() ; it++){
        if(*it == 0){
            *it = 1;
            int temp = calc(ba);
            if(temp > res) 
                res = temp;
            *it = 0;
        }
    }
    if(res == -1){//0이 없으면
        ba[a.length() - 1] = 0;
        res = calc(ba);
    }
    cout << res;
    return 0;
}