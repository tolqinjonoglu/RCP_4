#include <iostream>
using namespace std;
void showprime(int j, int s)
{
    bool flag;
    for(int i=j+1; i<=s;i++)
    {
        flag=false;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=true;
                break;
                
            }
        }
        if(flag==false && i>1)
            cout<<i<<" ";
    }
}
        

int main () {
    int j,s;
    cin>>j>>s;
    showprime(j,s);
    
    
    return 0;
}
