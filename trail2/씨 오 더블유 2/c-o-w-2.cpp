#include <iostream>
#include <string>

using namespace std;

int n;
string str;

int main() {
    cin >> n;
    cin >> str;

    // Please write your code here.
/*
C 다음에 O 다음에 W가 오기만 하면 되는거 아님?
*/
    int result = 0;
    size_t cpos = -1, opos = -1, wpos = -1;
    while(1){
        cpos = str.find('C', cpos+1);
        if(cpos == string::npos) break;
        opos = cpos;
        while(1){
            opos = str.find('O', opos+1);
            if(opos == string::npos) break;
            wpos = opos;
            while(1){
                wpos = str.find('W', wpos+1);
                if(wpos == string::npos) break;
                result++;
            }
        }
    }
    cout << result;
    return 0;
}