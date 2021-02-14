#include <iostream>
#include <math.h>
using namespace std;
void nhapCapSo(int &m,int &n)
{
    cout<<"Nhap m:";
    cin>>m;
    cout<<"\nNhap n:";
    cin>>n;
    if(n>m)
    {
        swap(n,m);
    }
}
int tinhTong(int n,int m)
{
    int s=0;
    for(int i=n;i<=m;i++)
    {
        if(i%15==0)
        {
            s=s+i;
        }
    }
    return s;
}
float tinhF(int n,float x)
{
    float f=2020*fabs(n*x);
    for(int i=1;i<=n;i++)
    {
        f=f+(float)x/(2*n-i);
    }
    return f;
}
int main()
{
    float x;
    int m,n;
    nhapCapSo(m,n);
    cout<<"Nhap x:";
    cin>>x;
    cout<<"\nTong cac so nguyen vua chia het cho 3 ,5 trong doan m,n:"<<tinhTong(n,m)<<endl;
    cout<<"Tong cac so nguyen vua chia het cho 3 ,5 trong doan 1,n:"<<tinhTong(1,n)<<endl;
    cout<<"Hieu:"<<tinhF(m,x)-tinhF(n,x);

    return 0;
}
