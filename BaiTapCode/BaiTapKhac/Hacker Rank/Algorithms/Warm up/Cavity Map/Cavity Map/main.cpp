#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char a[100][100];
    int n;
    cin>>n;
    int spot1=0,spot2=0;
    for(int i=0;i<n;i++)
    {
        while(a[spot1][spot2])
        scanf("%1d",a[spot1][spot2]);
        cout<<endl;
        
    }
}
