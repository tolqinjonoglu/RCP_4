#include <iostream>
#include <iomanip>
using namespace std;
    float func(float x, float y){
        return x/y;
    }
int main (){
    float j,s;
    cin>>j;
    cin>>s;
    
    cout<< setprecision(3) <<func(j,s);
    return 0;
}
