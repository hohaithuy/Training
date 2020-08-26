#include<iostream>
#define MAX 300
using namespace std;

void OutputMatrix(unsigned long int array[][MAX] ,  int m , int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout<<array[i][j]<<" ";
        cout<<endl;
    }
}

void rotateMatrix(unsigned long int array[][MAX] ,  int a , int c,int d,unsigned long int k,int loop)
{
        
    if (k>loop) k=k%loop;
    for(int i=0;i<k;i++)
    {
        unsigned long int tg=array[a][a];
        for(int i=a;i<d;i++)
        {
            array[a][i]=array[a][i+1];
        }
        for(int i=a;i<c;i++)
        {
            array[i][d]=array[i+1][d];
        }
        for(int i=d;i>a;i--)
        {
            array[c][i]=array[c][i-1];
        }
        for(int i=c;i>a+1;i--)
        {
            array[i][a]=array[i-1][a];
        }
        array[a+1][a]=tg;
    }
        
        
}

int main()
{
    unsigned long int  k ;
    int m ,n ;
    cin>>m>>n>>k;
    unsigned long int array[MAX][MAX];
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
        cin>>array[i][j];
    int circle;
    if(m<n) circle=m/2;
    else circle=n/2;
    int a=0;
    int c=m-1;
    int d=n-1;
    int loop=m*n - (m-2)*(n-2);
    for(int i=0;i<circle;i++)
    {
        rotateMatrix(array , a, c, d ,k,loop);
        a++;
        c--;
        d--;
        loop-=8;
    }
OutputMatrix(array, m, n);
}



