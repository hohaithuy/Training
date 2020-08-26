#include <iostream>
#include<string.h>
#include<cmath>

using namespace std;

int main()
{
        char s[100];
        scanf("%s",s) ;
        int n = strlen(s);
        int row = round(sqrt(n));
        int column;
        if (row >= sqrt(n)) column = row; else column = row + 1;
        for(int j=0;j<column;++j) {
            for(int i=j; i<n;i+=column)cout << s[i];
            cout << ' ';
        }
        return 0;
    
    
}
