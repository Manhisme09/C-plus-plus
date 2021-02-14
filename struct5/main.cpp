#include <iostream>
#include <cstdio>
#include <string.h>
#include <iomanip>
using namespace std;
// họ tên và chức vụ nên dùng String, phần ngày sinh nên tạo thêm một struct NgaySinh, struct thì nên viết hoa đầu từ
/*

*/
struct canbo
{
    char hoten[30];
    char chucvu[10];
    char ngaysinh[10];
    int bacluong;
};
void nhap(canbo &cb)
{
    cout<<"\nNhap ho ten:";
    fflush(stdin);
    gets(cb.hoten);
    cout<<"Nhap chuc vu:";
    fflush(stdin);
    gets(cb.chucvu);
    cout<<"Nhap ngay sinh:";
    fflush(stdin);
    gets(cb.ngaysinh);
    cout<<"Nhap bac luong:";
    cin>>cb.bacluong;
}
void formal(){
    cout << setw(10) << "HoTen" << setw(10) << "ChucVu" << setw(10) << "Ngaysinh"<< setw(10) << "Bacluong" << endl;
}
void xuat(canbo cb)
{
    cout<<setw(10)<<cb.hoten<<setw(10)<<cb.chucvu<<setw(10)<<cb.ngaysinh<<setw(10)<<cb.bacluong<<endl;
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
bool ktra(canbo ds[],int n,char chuoi[])
{
    for(int i=0;i<n;i++)
    {
        if(strcmp(ds[i].hoten,chuoi)==0)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    char chuoi[80];
    canbo ds[100];
    cout<<"Nhap n:"<<endl;
    cin>>n;
    nhapds(ds,n);
    formal();
    xuatds(ds,n);
    /*cout<<"Nhap can bo bat ki:";
    fflush(stdin);
    gets(chuoi);
    if(ktra(ds,n,chuoi)){
        cout<<"Co";
    }else{
        cout<<"KHong";
    }
    */
    return 0;
}
