#include<iostream>
#include<cstring>

using namespace std;

struct Fraction
{
    int numerator;
    int denominator;
};
typedef Fraction F;

Fraction add(F result,F fracs)
{
    F a;
    a.numerator=result.denominator*fracs.numerator+fracs.denominator*result.numerator;
    a.denominator=result.denominator*fracs.denominator;
    return a;
}
Fraction sub(F result,F fracs)
{
    F a;
    a.numerator=fracs.denominator*result.numerator-result.denominator*fracs.numerator;
    a.denominator=result.denominator*fracs.denominator;
    return a;
}
Fraction mul(F result,F fracs)
{
    F a;
    a.numerator=result.numerator*fracs.numerator;
    a.denominator=result.denominator*fracs.denominator;
    return a;
}
Fraction div(F result,F fracs)
{
    F a;
    a.numerator=result.numerator*fracs.denominator;
    a.denominator=result.denominator*fracs.numerator;
    return a;
}


Fraction strToFrac(string str)
{
    Fraction frac;
    size_t slashPos=str.find('/');
    string strNumerator=str.substr(0,slashPos);
    string strDenominator=str.substr(slashPos+1,str.length()-slashPos-1);
    frac.numerator=stoi(strNumerator);
    frac.denominator=stoi(strDenominator);
    return frac;
}
int gcd(int a, int b)
{
if (a == 0 || b == 0)
{
    return a + b;
}
while (a != b){
    if (a > b){
        a -= b;
    }else{
        b -= a;
    }
}
return a;
}

int main(int argc, const char*argv[])
{
    string action=argv[1];
    Fraction fracs[argc-2];
    for(int i=0;i<argc-2;i++)
    {
        fracs[i]=strToFrac(argv[i+2]);
    }
    Fraction result;
    result.numerator=fracs[0].numerator;
    result.denominator=fracs[0].denominator;
    if(action=="add")
    {
        for(int i=1;i<argc-2;i++)
        result=add(result,fracs[i]);
    }
    if(action=="sub")
    {
        for(int i=1;i<argc-2;i++)
        result=sub(result,fracs[i]);
    }
    if(action=="mul")
    {
        for(int i=1;i<argc-2;i++)
        result=mul(result,fracs[i]);
    }
    if(action=="div")
    {
        for(int i=1;i<argc-2;i++)
        result=div(result,fracs[i]);
    }
    int a=gcd(abs(result.numerator), abs(result.denominator));
    cout<<result.numerator/a<<"/"<<result.denominator/a<<endl;
    
    
}
