#include <iostream>
using namespace std;
bool Triangle(int a, int b, int c) {
    if (a != b && b != c && a != c) { // Check if all sides are different
        if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b) {
            return true; 
        }
    }
    return false; 
}

int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (Triangle(a, b, c)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
