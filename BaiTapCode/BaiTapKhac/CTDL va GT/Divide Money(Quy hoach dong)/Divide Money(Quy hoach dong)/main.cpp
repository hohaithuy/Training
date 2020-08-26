#include <iostream>

using namespace std;

void DivideMoney(int a[],int p[],int n,int money)
{
    p[0]=1;
    for(int i=0;i<n;i++)
        for(int j=a[i];j<money;j++)
            p[j]+=p[j-a[i]];
}

int main()
{
    int n;
    cout<<"Nhap so phan tu: ";
    cin>>n;
    int a[n];
    cout<<"Nhap mang: "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int money;
    cout<<"Nhap so tien: ";
    cin>>money;
    int p[money+1];
    for(int i=1;i<money+1;i++)
        p[i]=0;
    DivideMoney(a, p, n, money+1);
    cout<<"So cach doi tien la: "<<p[money]<<endl;
   
    
    
}
