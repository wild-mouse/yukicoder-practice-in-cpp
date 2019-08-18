#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    if (n >= k) {
        cout << fixed << (int)pow(2, n -k) << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}