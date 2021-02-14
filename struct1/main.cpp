#include <iostream>
#include <cstdio>
using namespace std;
struct sinhvien
{
    char masv[12];
    char hoten[30];
    char gioitinh[5];
    int tuoi;
    float diem;
};
void nhapsv(sinhvien &sv)
{
    cout<<"Nhap masv:";
    gets(sv.masv);
    cout<<"Nhap ho ten:";
    fflush(stdin);
    gets(sv.hoten);
    cout<<"Nhap gioi tinh:";
    fflush(stdin);
    gets(sv.gioitinh);
    cout<<"Nhap tuoi:";
    cin>>sv.tuoi;
    cout<<"Nhap diem:";
    cin>>sv.diem;
}
void xuatsv(sinhvien x)
{
    cout<<"\nmasv:"<<x.masv<<endl;
    cout<<"ho ten:"<<x.hoten<<endl;
    cout<<"gioi tinh:"<<x.gioitinh<<endl;
    cout<<"tuoi:"<<x.tuoi<<endl;
    cout<<"diem:"<<x.diem<<endl;
}

int main()
{
    sinhvien x;
    nhapsv(x);
    xuatsv(x);
    return 0;
}
