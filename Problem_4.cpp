#include <iostream>

using namespace std;
char func(int j){
    if(j>=32 && j<=126){
        return char(j);
    }else{
        return ('W');
    }
}
int main(){
    int x;
    cin>>x;
    char a=func(x);
    if(a=='W'){
        cout<<"Wrong";
    }else{
        cout<<a;
    }
     return 0;
}
