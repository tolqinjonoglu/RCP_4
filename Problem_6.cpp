#include <iostream>
using namespace std;
int main () {
    int result=1;
   
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
        result*=arr[i];
    }
    cout <<result;
    
    return 0;
}
