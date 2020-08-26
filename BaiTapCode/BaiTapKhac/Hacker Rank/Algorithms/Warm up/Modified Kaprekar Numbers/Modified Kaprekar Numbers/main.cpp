#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

bool Check(long long int a)
{
    int d=0;
    long long int tg=a;
    while(tg>0)
    {
        tg=tg/10;
        d++;
    }
    long long int check=a*a;
    long long int b=0;
    int chia=pow(10,d);
    while(check>0)
    {
        b+=check%chia;
        check/=chia;
    }
    if (a==b) return true;
    else return false;
}
void kaprekarNumbers(int p, int q)
{
 int count=0;
 for(long long int i=q;i<=p;i++)
 {
    
    if(Check(i)==true)
    {
        cout<<i<<" ";
        count++;
    }
     
 }
 if(count==0) cout<<"INVALID RANGE"<<endl;

}

int main()
{
    int p;
    cin >> p;
    int q;
    cin >> q;
    kaprekarNumbers(p, q);

    return 0;
}
