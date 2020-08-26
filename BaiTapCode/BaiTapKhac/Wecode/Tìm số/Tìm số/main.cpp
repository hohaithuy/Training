#include <iostream>
using namespace std ;
int main()
{
    int n,max=0,bien = 0,tong = 0,sodung,sosai,hieu;
    cin>>n;
    for(int i=1;i<=n;i++)
    {   tong+=i;
        cin>>bien;
        max+=bien;
    }
    hieu=max-tong;
    if(hieu>0) sodung=bien-hieu;sosai=sodung-hieu;
    
}
