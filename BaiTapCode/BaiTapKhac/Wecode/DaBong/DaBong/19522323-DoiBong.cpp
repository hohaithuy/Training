#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct DoiBong
{
    char ten[100];
    int sotran;
    int Diemso=0;
    int Hieuso=0;
    int Thang=0;
    int Thua=0;
};
typedef DoiBong DB;
void Xuat(DB a)
{
    printf("******************************************\n");
    printf("**  Thong tin doi bong                       **\n");
    printf("**    1.Ten:                   %10s          **\n",a.ten);
    printf("**    2.Sotran:                %5d           **\n",a.sotran);
    printf("**    3.Diem so:               %5d           **\n",a.Diemso);
    printf("**    4.Hieu so ban thang:     %5d           **\n",a.Hieuso);
    printf("**    5.So ban thang:          %5d           **\n",a.Thang);
    printf("**    6.So ban thua:           %5d           **\n",a.Thua);
    printf("***********************************************\n");
}
int main()
{
    int n;
    cout<<"Nhap so doi bong: ";
    cin>>n;
    DB a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap ten doi bong "<<i+1<<": ";
        cin>>a[i].ten;
        a[i].sotran=n-1;
    }
    for(int i=0;i<n;i++)
    {   int b,c;
        for(int j=i+1;j<n;j++)
        {
            printf("Nhap ti so giua doi %s va %s: ",a[i].ten,a[j].ten);
            cin>>b;
            a[i].Thang+=b;
            a[j].Thua+=b;
            cin>>c;
            a[j].Thang+=c;
            a[i].Thua+=c;
            if(b>c) a[i].Diemso=a[i].Diemso+3;
            else
            {
                if(b<c) a[j].Diemso=a[j].Diemso+3;
                else {
                    a[j].Diemso=a[j].Diemso+1;
                    a[i].Diemso=a[i].Diemso+1;
                    }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        a[i].Hieuso=a[i].Thang-a[i].Thua;
    }
    for(int i=0;i<n;i++)
    {
        DB b;
        for(int j=i+1;j<n;j++){
            if(a[i].Diemso<a[j].Diemso)
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
            else
            {
                if(a[i].Diemso==a[j].Diemso)
                {
                    if(a[i].Hieuso<a[j].Hieuso)
                    {
                            b=a[i];
                            a[i]=a[j];
                            a[j]=b;
                    }
                    if(a[i].Hieuso==a[j].Hieuso)
                    {
                        if(a[i].Thang<a[j].Thang)
                        {
                            b=a[i];
                            a[i]=a[j];
                            a[j]=b;
                        }
                    }
                    }
                }
            }
        }
    for(int i=0;i<n;i++)
        Xuat(a[i]);
        
}
