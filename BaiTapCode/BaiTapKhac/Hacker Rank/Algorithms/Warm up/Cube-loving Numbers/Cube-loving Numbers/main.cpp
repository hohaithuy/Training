#include <iostream>
#include <cmath>

using namespace std;

bool check(int n)
{
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
        if(count==0) return true;
        else return false;
}
int main()
{
    int n;
    cin>>n;
    unsigned long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int count=0;
        unsigned long int number=pow(a[i],1.0/3);
        for(int j=2;j<=number;j++)
        {
            if(check(j)==true)
            count+=a[i]/pow(j,3);
        }
        for(int j=2;j<=number;j++)
        {
            for(int k=j+1;k<=number;k++)
                if(check(j)==true && check(k)==true)
                    if(pow(j,3)*pow(k,3)<=a[i])
                    count-=a[i]/(pow(j,3)*pow(k,3));
        }
        cout<<count<<endl;
    }
    return 0;
}



