#include <iostream>
#include <string.h>

using namespace std;

string biggerIsGreater(string w) {
    for(unsigned long int i=w.length() ;i>0 ; i--)
    {
        if(w[i]>w[i-1])
        {   unsigned long spot = 0;
            for(unsigned long j=i;j<w.length();j++)
            {
                int min=10000;
                if(w[j]<min && w[j]>w[i-1])
                {
                spot=j;
                min=w[j];
                }
            }
            char a[0];
            a[0]=w[i-1];
            w[i-1]=w[spot];
            w[spot]=a[0];
            for(unsigned long j=i;j<w.length();j++)
            {
                for(unsigned long k=j+1;k<w.length();k++)
                    if(w[j]>w[k])
                    {
                        a[0]=w[j];
                        w[j]=w[k];
                        w[k]=a[0];
                    }
            }
            return w;
        }
    }
    return "no answer";
}

int main()
{

    int T;
    cin >> T;
    for (int i = 0; i<T; i++) {
        string w;
        cin>>w;

        w = biggerIsGreater(w);

        cout << w << "\n";
    }


    return 0;
}
