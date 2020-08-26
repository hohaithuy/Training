#include<iostream>

using namespace std;

int main()
{
    int n;
    int wallet,price,count,wrapper;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>wallet>>price>>wrapper;
        count=wallet/price;
        int wrap=count;
        while(wrap>=wrapper)
        {
            count+=wrap/wrapper;
            wrap=wrap/wrapper+wrap%wrapper;
            cout<<wrap<<endl;
        }
        cout<<count<<endl;

    }
}
