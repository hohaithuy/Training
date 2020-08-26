#include<iostream>

using namespace std;

int main()
{
    int sale,limit,price;
    int wallet;
    cin>>price>>sale>>limit>>wallet;
    int count=0;
    while(wallet>=price)
    {
        count++;
        wallet-=price;
        if(price-sale<limit) price=limit;
        else price-=sale;
    }
    cout<<count<<endl;
}
