#include <iostream>
#include <iomanip>
using namespace std;

int main() {


 float A[5];
   for (int i = 0; i < 5; ++i) {
    cin >> A[i];
       A[i]=A[i]/2;
  }
  for (int i = 0; i < 5; i++) {
      cout <<setprecision(3)<<A[i]<<" ";
  }
  return 0;
}
