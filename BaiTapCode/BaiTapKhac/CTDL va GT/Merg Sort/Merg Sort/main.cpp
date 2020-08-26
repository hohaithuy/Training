#include<iostream>

using namespace std;

void outPut(int a[],int n)
{
    cout<<"Mang la: "<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<"  ";
}
void mergeSoft(int array[],int l,int m,int r)
{
    int n1=m-l;
    int n2=r-m;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++)
        a[i]=array[l+i];
    for(int j=0;j<n2;j++)
        b[j]=array[m+j];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])
        {
            array[k]=a[i];
            i++;
            k++;
        }
        else {
            array[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        array[k]=a[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        array[k]=b[j];
        k++;
        j++;
    }
}
void merge(int a[],int l,int r)
{
    if(l+1<r)
    {
        int mid=l+(r-l)/2;
        merge(a,l,mid);
        merge(a,mid,r);
        mergeSoft(a, l, mid, r);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    merge(a,0,n);
    outPut(a, n);
}
