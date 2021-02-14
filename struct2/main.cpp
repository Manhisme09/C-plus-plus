#include <iostream>
#include <cstdio>
using namespace std;
struct sinhvien
{
    char MSV[12];
    char hoten[15];
    char gioitinh[5];
    int tuoi;
    float diem;
};
void nhapsv(sinhvien &sv)
{
    cout<<"Nhap MSV:";
    fflush(stdin);
    gets(sv.MSV);
    cout<<"Nhap hoten:";
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
void xuatsv(sinhvien sv)
{
     cout<<"\nmasv:"<<sv.MSV<<endl;
    cout<<"ho ten:"<<sv.hoten<<endl;
    cout<<"gioi tinh:"<<sv.gioitinh<<endl;
    cout<<"tuoi:"<<sv.tuoi<<endl;
    cout<<"diem:"<<sv.diem<<endl;
}
void nhapdanhsach(sinhvien a[],int n)
{
    int i;
    for(i=0;i<n;i++){
        nhapsv(a[i]);
        cout<<endl;

    }
}
void xuatdanhsach(sinhvien a[],int n)
{
    int i;
    for(i=0;i<n;i++){
        xuatsv(a[i]);
        cout<<endl;
    }
}
int main()
{
    sinhvien a[100];
    int n;
    cout<<"Nhap n:";
    cin>>n;
    nhapdanhsach(a,n);
    cout<<"danh sach la:"<<endl;
    xuatdanhsach(a,n);
    return 0;
}
