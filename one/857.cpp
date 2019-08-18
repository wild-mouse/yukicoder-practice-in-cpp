#include <iostream>

using namespace std;

int main() {
    long long int x, y, z;
    cin >> x >> y >> z;

    long long int c = z;
    if (z >= x) {
        c--;
    }
    if (z >= y) {
        c--;
    }
    cout << c << endl;

    return 0;
}