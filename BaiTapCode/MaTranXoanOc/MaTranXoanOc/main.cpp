#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
using namespace std;
void Xuat(int a[][MAX],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("  %-5d  ",a[i][j]);
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[MAX][MAX];
    int d=1;
    int t=0,k=n;
    while(d<=n*n)
    {
        for(int i=t;i<k;i++)
        {
            a[t][i]=d;
            d++;
        }
        for(int i=t+1;i<k;i++)
        {
            a[i][k-1]=d;
            d++;
        }
        for(int i=k-2;i>=t;i--)
        {
            a[k-1][i]=d;
            d++;
        }
        for(int i=k-2;i>t;i--)
        {
            a[i][t]=d;
            d++;
        }
        t++;
        k--;
    }
    Xuat(a, n);
    
}
