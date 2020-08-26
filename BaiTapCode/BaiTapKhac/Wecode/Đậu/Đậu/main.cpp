#include <iostream>
using namespace std ;
int main()
{
    int n,sum=0;
    cin>>n;
    if(n<3) { cout<<"No"; }
    else
    {
    for(int i=1;i<=n;i++)
        sum+=i;
    if(sum%2==0) cout<<"Yes\n"<<1<<" "<<2;
    else{
        for(int i=3;i<=int(sum/n);i++)
        {
            if(sum%i==0)
            {
                cout<<"Yes\n"<<1<<" "<<i;
                break;
            }
            if(i==int(sum/2)) cout<<"No";
        }
    }
    }
        
}
