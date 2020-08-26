#include<iostream>
#include<math.h>
using namespace std ;
int main()
{
    unsigned long x,y,a,b;
    cin>>x>>y;
    if( sqrt(x)>int( sqrt(x))  ) a=int (sqrt(x))+1;
    else a=sqrt(x);
    b=int (sqrt(y));
    cout<<b-a+1;
    
}
