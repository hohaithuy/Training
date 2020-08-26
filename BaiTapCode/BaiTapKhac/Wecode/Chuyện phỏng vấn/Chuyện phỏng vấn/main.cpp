#include<iostream>
using namespace std ;
int main()
{
    int a,b,tim,flag=1,count=1,i=1,j=1,x=0,y=0,n=0;
    cin>>a>>b>>tim;
    while((n==0) || ((x==0) &&(y==0)))
    {
        if((i==a) && (j==b)) n=count;
        if(count==tim)
        {
            x=i;
            y=j;
        }
        if(j==flag)
        {
            flag ++ ;
            i=flag;
            j=1;
            count++;
        }
        else
        {
            i--;
            j++;
            count++;
        }
        
    }
    cout<<n<<"\n"<<x<<" "<<y;
}
    
