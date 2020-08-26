#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
        int a;
        cin>>a;
        float c;
        cin>>c;
        string in;
        cin.ignore();
        getline(cin,in);
        cout<<a+i<<endl;
        printf("%.2f\n",c+d);
        cout<<s;
        cout<<in;
    return 0;
}
