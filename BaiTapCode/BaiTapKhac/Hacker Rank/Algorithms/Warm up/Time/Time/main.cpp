#include<iostream>
#include<vector>
using namespace std;
void Xuat(int n)
{
    vector<string> numbers = {
        "twelve",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "fifteen",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty",
        "twenty one",
        "twenty two",
        "twenty three",
        "twenty four",
        "twenty five",
        "twenty six",
        "twenty seven",
        "twenty eight",
        "twenty nine"
    };
    cout<<numbers[n];
}
int main()
{
    int hrs,min;
    cin>>hrs>>min;
    if(min<=30)
    {
    if (min==0)
    {
        Xuat(hrs);
        cout<<" o' clock"<<endl;
    }
    else{
    if(min==30)
    {
        cout<<"half past ";
        Xuat(hrs);
    }
    else{
        if(min==15)
        {
            cout<<"quarter past ";
            Xuat(hrs);
        }
        else
        {
            if(min>=10)
            {
            Xuat(min);
            cout<<" minute past ";
            Xuat(hrs);
            }
        else
            {
            Xuat(min);
            cout<<" minutes past ";
            Xuat(hrs);
            }
        }
        }
    }
    }
    else
    {
        if(min==45)
        {
            cout<<"quarter to ";
            Xuat(hrs+1);
        }
        else
        {
            Xuat(60-min);
            cout<<" minutes to ";
            Xuat(hrs+1);
        }
    }
}
