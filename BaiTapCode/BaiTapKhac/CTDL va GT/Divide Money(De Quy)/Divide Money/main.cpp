#include <iostream>

using namespace std;

int W(int a[],int n,int sum)
{
    if(sum==0) return 1;
    if(sum<0 || n<1) return 0;
    return W(a,n,sum-a[n-1]) + W(a,n-1,sum);
}

int main()
{
    cout<<"Nhap so tien can doi: ";
    int sum;
    cin>>sum;
    cout<<"Nhap so phan tu: ";
    int n;
    cin>>n;
    cout<<"Nhap phan tu mang: "<<endl;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"So cach doi tien la: "<<W(a,n,sum)<<endl;
}
