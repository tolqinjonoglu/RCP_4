#include <iostream>
#include <iomanip>
using namespace std;

double divideNumbers(double a, double b) {
    return a / b;
}

int main() {
    double a, b;
    
    cin >> a;
    
    cin >> b;
    
    double result = divideNumbers(a, b);
    
    cout << fixed << setprecision(3);
    
    cout << "" << result << endl;
    
    return 0;
}
