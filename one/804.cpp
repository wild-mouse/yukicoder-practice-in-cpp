#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ac = 1 + c;
    int e;
    if (d < ac) {
        e = 0;
    } else {
        int acd = d / ac;
        int bc = b / c;
        e = min(min(a, bc), acd);
    }
    cout << e << endl;

    return 0;
}