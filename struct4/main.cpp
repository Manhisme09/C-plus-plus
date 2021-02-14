#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
struct thisinh
{
    char sbd[10];
    char hoten[25];
    char ngaysinh[15];
    char gioitinh[5];
    char hokhau[15];
    int tuoi;
    float diemly,diemtoan,diemhoa,tongdiem;
};
void nhap(thisinh &ts)
{
    cout<<"\nNhap sbd:";
    fflush(stdin);
    gets(ts.sbd);
    cout<<"Nhap ho ten:";
    fflush(stdin);
    gets(ts.hoten);
    cout<<"Nhap ngay sinh:";
    fflush(stdin);
    gets(ts.ngaysinh);
    cout<<"Nhap gioi tinh:";
    fflush(stdin);
    gets(ts.gioitinh);
    cout<<"Nhap ho khau:";
    fflush(stdin);
    gets(ts.hokhau);
    cout<<"Nhap tuoi:";
    cin>>ts.tuoi;
    cout<<"Nhap diem toan:";
    cin>>ts.diemtoan;
    cout<<"Nhap diem hoa:";
    cin>>ts.diemhoa;
    cout<<"Nhap diem ly:";
    cin>>ts.diemly;
    ts.tongdiem=ts.diemhoa+ts.diemly+ts.diemtoan;
}
void xuat(thisinh ts)
{
    cout<<"\nsbd:"<<ts.sbd<<endl;
    cout<<"ho ten:"<<ts.hoten<<endl;
    cout<<"ngay sinh:"<<ts.ngaysinh<<endl;
    cout<<"gioi tinh:"<<ts.gioitinh<<endl;
    cout<<"ho khau:"<<ts.hokhau<<endl;
    cout<<"tuoi:"<<ts.tuoi<<endl;
    cout<<"diem toan:"<<ts.diemtoan<<endl;
    cout<<"diem ly:"<<ts.diemly<<endl;
    cout<<"diem hoa:"<<ts.diemhoa<<endl;
    cout<<"Tong diem:"<<ts.tongdiem<<endl;

}
void nhapds(thisinh ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        nhap(ds[i]);
        if(ds[i].sbd[0]==' ')
        {
            break;
        }
    }

}
void xuatds(thisinh ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        xuat(ds[i]);
        if(ds[i].sbd[0]==' ')
        {
            break;
        }
    }
}
void hienthi(thisinh ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(strcmp(ds[i].gioitinh,"nu")==0&&(ds[i].tongdiem)>25)
        {
            cout<<""<<ds[i].hoten;
        }
    }
}
int sosvtrungtuyen(thisinh ds[],int n,float x)
{
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(ds[i].tongdiem>=x)
        {
            dem++;
        }

    }
    return dem;
}
void trungtuyen(thisinh ds[],int n,float x)
{

    for(int i=0;i<n;i++)
    {
        if(ds[i].tongdiem>=x&&strcmp(ds[i].hokhau,"hanoi")==0)
        {
            cout<<" "<<ds[i].hoten;
        }

    }
}
void sapxep(thisinh ds[],int n)
{
    thisinh tg;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ds[i].tongdiem>ds[j].tongdiem)
            {
                tg=ds[i];
                ds[i]=ds[j];
                ds[j]=tg;
            }

        }
    }
}
int main()
{
    thisinh ds[100];
    int n;
    float x;
    cout<<"Nhap n:";
    cin>>n;
    nhapds(ds,n);
    cout<<"\ndanh sach thi sinh la:"<<endl;
    xuatds(ds,n);
    cout<<"\nHien thi ten sinh vien nu co tong diem lon hon 25:"<<endl;
    hienthi(ds,n);
    cout<<"\nNhap diem chuan:"<<endl;
    cin>>x;
    cout<<"\nSo sv trung tuyen:"<<sosvtrungtuyen(ds,n,x)<<endl;
    cout<<"\nNhung sv trung tuyen o Ha Noi la:"<<endl;
    trungtuyen(ds,n,x);
    cout<<"\nTang dan:"<<endl;
    sapxep(ds,n);
    xuatds(ds,n);

    return 0;
}





