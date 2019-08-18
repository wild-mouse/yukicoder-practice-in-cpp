#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if ((s1 == "Sun" || s1 == "Sat") && (s2 == "Sun" || s2 == "Sat")) {
        cout << "8/33" << endl;
    } else if (s1 == "Sun" || s1 == "Sat") {
        cout << "8/32" << endl;
    } else {
        cout << "8/31";
    }

    return 0;
}