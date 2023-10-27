#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    const int j=6;
    int ARR[j];
    for(int i=0; i<j; i++){
        cin>>ARR[i];
    }
    for(int i=1; i<j; i+=2){
        ARR[i]=pow(ARR[i],3);
    }
    for(int i=0; i<j; i++){
        cout<<ARR[i]<<" ";
    }
    return 0;
}
