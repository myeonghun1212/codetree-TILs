#include <iostream>
#include <vector>

using namespace std;

void printSequences(vector<int>& sequence, vector<bool>& used, int n, int index) {
    if (index == n) {
        for (int i = 0; i < n; i++) {
            cout << sequence[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            sequence[index] = i;
            used[i] = true;
            printSequences(sequence, used, n, index + 1);
            used[i] = false;
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> sequence(n);
    vector<bool> used(n + 1, false);
    printSequences(sequence, used, n, 0);

    return 0;
}