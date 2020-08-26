#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std ;

bool NamNhuan(int year)
{
    if( (year%4==0) || ((year%100==0) && (year%400==0)))return true;
       else return false;
}
void checkNam(int nam)
{
    if(nam<1)
    {
    cout<<"Ban da nhap sai";
    exit(0);
    }
}
int Thang(int thang,int nam)
{
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
        case 2: if(NamNhuan(nam)==true) return 29;
        else return 28;
            default:
                   cout << "So thang nhap khong hop le"<<endl;
                   exit(0);
    }
}
int Thu(int day, int month, int year){
int JMD;
JMD = (day + ((153 * (month + 12 * ((14 - month) / 12) - 3) + 2) / 5) +
  (365 * (year + 4800 - ((14 - month) / 12))) +
  ((year + 4800 - ((14 - month) / 12)) / 4) -
 ((year + 4800 - ((14 - month) / 12)) / 100) +
 ((year + 4800 - ((14 - month) / 12)) / 400)  - 32045) % 7;
    return JMD  ;
}
void TimNgay(int ngay,int thang,int nam)
{
    cout<<"Nhap ngay: ";
    cin>>ngay;
    cout<<"Nhap thang: ";
    cin>>thang;
    cout<<"Nhap nam: ";
    cin>>nam;
    checkNam(nam);
    if((ngay<0)||(ngay>Thang(thang, nam)))
    {
    cout<<"Ban da nhap sai";
    exit(0);
    }
    printf("Ngay %d thang %d nam %d la thu: ",ngay,thang,nam);
    switch (Thu(ngay, thang, nam)) {
         case 0:cout<<"Thu 2"<<endl;       break;
         case 1:cout<<"Thu 3"<<endl;       break;
         case 2:cout<<"Thu 4"<<endl;       break;
         case 3:cout<<"Thu 5"<<endl;       break;
         case 4:cout<<"Thu 6"<<endl;       break;
         case 5:cout<<"Thu 7"<<endl;       break;
         case 6:cout<<"Chu nhat"<<endl;    break;
                                    }
}
void Lich(int thang,int nam)
{
    cout<<"Nhap thang: ";
    cin>>thang;
    cout<<"Nhap nam: ";
    cin>>nam;
    checkNam(nam);
    int n;
    n=Thang(thang, nam);
    cout<<"Mon  Tue  Wed  Thu  Fri  Sat  Sun\n";
    for(int i=1;i<=Thu(1, thang, nam);i++) { printf("     "); }
    for(int i=1;i<=n;i++)
    {   if((i+Thu(1, thang, nam))%7==0) printf("%-3d\n",i);
        else printf("%-3d  ",i);
    }
    cout<<endl;
}
void CanChi(int nam)
{
    cout<<"Nhap nam: ";
    cin>>nam;
    checkNam(nam);
    switch(nam%10) {
            case 4 : cout<<"Giap "; break ;
            case 5 : cout<<"At ";   break ;
            case 6 : cout<<"Binh "; break ;
            case 7 : cout<<"Dinh "; break ;
            case 8 : cout<<"Mau ";  break ;
            case 9 : cout<<"Ky ";   break ;
            case 0 : cout<<"Canh "; break ;
            case 1 : cout<<"Tan ";  break ;
            case 2 : cout<<"Nham "; break ;
            case 3 : cout<<"Quy ";  break ;
        }
        switch(nam%12) {
            case 0 : cout<<"Than";  break ;
            case 1 : cout<<"Dau";   break ;
            case 2 : cout<<"Tuat";  break ;
            case 3 : cout<<"Hoi";   break ;
            case 4 : cout<<"Ti";    break ;
            case 5 : cout<<"Suu";   break ;
            case 6 : cout<<"Dan";   break ;
            case 7 : cout<<"Meo";   break ;
            case 8 : cout<<"Thin";  break ;
            case 9 : cout<<"Ty";    break ;
            case 10 : cout<<"Ngo";  break ;
            case 11 : cout<<"Mui";  break ;
        }
    }

int main()
{   int ngay,thang,nam;
    TimNgay(ngay,thang,nam);
    Lich(thang,nam);
    CanChi(nam);
    return 0;
}
