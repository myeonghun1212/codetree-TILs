#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    // Please write your code here.
    int result = 0;
    size_t start_pos = -1;
    while(1){
        start_pos = A.find("((", start_pos + 1);
        if(start_pos == string::npos) break;
        size_t end_pos = start_pos;
        while(1){
            end_pos = A.find("))", end_pos + 1);
            if(end_pos == string::npos) break;
            result++;
        }
    }
    cout << result;
    return 0;
}