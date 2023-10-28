#include <iostream>
using namespace std;
double convertToMeters(double km) {
    return km * 1000;
}

int main() {
    double km;
    
    cin >> km;
    
    double meters = convertToMeters(km);
    
    cout << "" << meters << endl;
    
    return 0;
}
