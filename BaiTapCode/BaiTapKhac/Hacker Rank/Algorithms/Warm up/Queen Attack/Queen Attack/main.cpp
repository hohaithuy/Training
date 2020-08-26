#include<iostream>
using namespace std;
int CountLeft(int n,int x,int y)
{
    int left=n-abs(x-y)-1;
    return left;
}
int CountRight(int n,int x,int y)
{
    int right=n-abs(n+1-x-y)-1;
    return right;
}
int H(int n,int a,int b,int x,int y,int &count)
{
    if((a==x|| b==y) && !((a==x) && (b==y)))
    {
        if(a==x)
        {
            if(b>y) count-=(n-b+1);
            else count-=b;
        }
        if(b==y)
        {
            if(a>x) count-=(n-a+1);
            else count-=a;
        }
    }
    else
    {
        if(a-b==x-y)
            {
                if(x-y>=0)
                {
                    if(y>b) count-=b;
                    else count-=(n-abs(a-b)-b+1);
                }
                else
                {
                    if(x>a) count-=a;
                    else count-=(n-abs(a-b)-a+1);
                }

            }
        if((a+b==x+y) && ( CountRight(n, x, y) == CountRight(n, a, b) ))
        {
            if(x+y<=n+1)
            {
                if(y>=b) count-=(n-a+1);
                else count-=(n-a);
            }
            else
            {
                if(a>x) count-=(a-x);
                else count-=(n+1-y);
            }
        }
    }
    return count;
}
int main()
{
    int n,k,x,y;
    cin>>n>>k;
    cin>>x>>y;
    int array1[k],array2[k];
    int rightMain=CountRight(n, x, y),leftMain=CountLeft(n, x, y);
    int count=n*2-2+rightMain+leftMain;
    for(int i=0;i<k;i++)
    {
        cin>>array1[1]>>array2[2];
    }
    cout<<count<<endl;
}
    

