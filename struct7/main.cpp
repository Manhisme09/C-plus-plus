#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
using namespace std;
struct date
{
    int ngay,thang,nam;
};
struct canbo
{
    char macanbo[20],hoten[30],chucvu[25],gioitinh[10];
    date ngaysinh;
    int bacluong,tuoi;
};
void nhap(canbo &cb)
{
    cout<<"\nNhap ma can bo:";
    fflush(stdin);
    gets(cb.macanbo);
    cout<<"Nhap ho ten:";
    fflush(stdin);
    gets(cb.hoten);
    cout<<"Nhap chuc vu:";
    fflush(stdin);
    gets(cb.chucvu);
    cout<<"Nhap gioi tinh:";
    fflush(stdin);
    gets(cb.gioitinh);
    cout<<"Nhap ngay sinh:";
    fflush(stdin);
    cin>>cb.ngaysinh.ngay>>cb.ngaysinh.thang>>cb.ngaysinh.nam;
    cout<<"Nhap bac luong:";
    cin>>cb.bacluong;
    cb.tuoi=2020-cb.ngaysinh.nam;
}
void formal()
{
    cout<<setw(10)<<"Macanbo"<<setw(10)<<"Hoten"<<setw(10)<<"Chucvu"<<setw(10)<<"Gioitinh"<<setw(10)<<"Ngaysinh"<<setw(10)<<"Bacluong"<<endl;
}
void xuat(canbo cb)
{
    cout<<setw(10)<<cb.macanbo;
    cout<<setw(10)<<cb.hoten;
    cout<<setw(10)<<cb.chucvu;
    cout<<setw(10)<<cb.gioitinh;
    cout<<setw(3)<<cb.ngaysinh.ngay<<"/"<<cb.ngaysinh.thang<<"/"<<cb.ngaysinh.nam;
    cout<<setw(10)<<cb.bacluong<<endl;
}
void nhapds(canbo ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        nhap(ds[i]);
    }
}
void xuatds(canbo ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        xuat(ds[i]);
    }
}
void hienthi(canbo ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(strcmp(ds[i].gioitinh,"nu")==0&&ds[i].tuoi>=55)
        {
            cout<<" "<<ds[i].hoten;
        }
        if(strcmp(ds[i].gioitinh,"nam")==0&&ds[i].tuoi>=60)
        {
            cout<<" "<<ds[i].hoten;
        }

    }
}
void chen(canbo ds[],int &n,canbo x)
{

    for(int i=n;i>2;i--)
    {
        ds[i]=ds[i-1];
    }
    ds[2]=x;
    n++;
}
void xoa(canbo ds[],int &n)
{
    for(int i=0;i<n;i++)
    {
        if(strcmp(ds[i].gioitinh,"nu")==0&&ds[i].tuoi>=55)
        {
            for(int j=i;j<n;j++)
            {
                ds[j]=ds[j+1];
            }
            n--;
        }
        if(strcmp(ds[i].gioitinh,"nam")==0&&ds[i].tuoi>=60)
        {
            for(int j=i;j<n;j++)
            {
                ds[j]=ds[j+1];
            }
            n--;
        }

    }
}
int main()
{
    int n;
    canbo ds[100];
    canbo x;
    cout<<"NHap n:";
    cin>>n;
    nhapds(ds,n);
    formal();
    xuatds(ds,n);
    cout<<"\nDanh sach can bo da ve huu:";
    hienthi(ds,n);
    nhap(x);
    cout<<"SAU khi chen:"<<endl;
    chen(ds,n,x);
    xuatds(ds,n);
    cout<<"SAU khi xoa:"<<endl;
    xoa(ds,n);
    xuatds(ds,n);

    return 0;
}
