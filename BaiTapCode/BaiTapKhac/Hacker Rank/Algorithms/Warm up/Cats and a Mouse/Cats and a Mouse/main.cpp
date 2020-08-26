#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cin>>n;
    int a[3][n];
        for(int j=0;j<n;j++)
        {
            cin>>a[0][j];
            cin>>a[1][j];
            cin>>a[2][j];
        }
    for(int j=0;j<n;j++)
    {
      if( abs(a[0][j]-a[2][j]) < abs(a[1][j]-a[2][j]) ) cout<<"Cat A";
      else {
          if(abs(a[0][j]-a[2][j]) == abs(a[1][j]-a[2][j]) )cout<<"Mouse C";
          else cout<<"Cat B";
      }
        cout<<"\n";
    }
}
