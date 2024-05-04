#include <iostream>
#include <vector>
using namespace std;

void pick(int n, vector<int>& picked, int topick) {
    if (topick == 0) {
        for (int i = 0; i < picked.size(); ++i) {
            cout << picked[i] << " ";
        }
        cout << endl;
        return;
    }

    int smallest = picked.empty() ? 1 : picked.back() + 1;
    for (int j = smallest; j <= n; ++j) {
        picked.push_back(j);
        pick(n, picked, topick - 1);
        picked.pop_back();
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a;
    pick(n, a, m);
}