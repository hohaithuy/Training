#include <iostream>
using namespace std ;
int main()
{
int max=0,hieu,tong=0,soghe,nguoi,ai;
cin>>soghe>>nguoi;
for(int i=0;i<soghe;i++)
{
    cin>>ai;
    tong+=ai;
    if(ai>max) max=ai;
}
hieu=max*soghe-tong;
if(nguoi<=hieu) cout<<max<<" "<<max+nguoi;
else cout<<max+nguoi-hieu<<" "<<max+nguoi;
}
