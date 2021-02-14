#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
struct doanhnghiep
{
    char madoanhnghiep[15];
    char giamdoc[15];
    float vondieule;
    int sonhanvien;
};
void nhap(doanhnghiep &dn)
{
    cout<<endl;
    cout<<"Nhap mdn:";
    fflush(stdin);
    gets(dn.madoanhnghiep);
    cout<<"Nhap giam doc:";
    fflush(stdin);
    gets(dn.giamdoc);
    cout<<"Nhap von dieu le:";
    cin>>dn.vondieule;
    cout<<"Nhap sonhanvien:";
    cin>>dn.sonhanvien;

}
void xuat(doanhnghiep dn)
{
    cout<<endl;
    cout<<"\nmdn:"<<dn.madoanhnghiep<<endl;
    cout<<"giam doc:"<<dn.giamdoc<<endl;
    cout<<"von diu le:"<<dn.vondieule<<endl;
    cout<<"so nhan vien:"<<dn.sonhanvien<<endl;

}
void nhapdanhsach(doanhnghiep ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        nhap(ds[i]);
    }
}
void xuatdanhsach(doanhnghiep ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        xuat(ds[i]);
    }
}
void sapxep(doanhnghiep ds[],int n)
{
    doanhnghiep tg;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ds[i].vondieule>ds[j].vondieule)
            {
                tg=ds[i];
                ds[i]=ds[j];
                ds[j]=tg;
            }
        }
    }
}
void in(doanhnghiep dn)
{
    cout<<"\nMadn:"<<dn.madoanhnghiep<<endl;
    cout<<"So nhan vien:"<<dn.sonhanvien;
}
void indn(doanhnghiep ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(ds[i].sonhanvien>300&&ds[i].madoanhnghiep[0]=='D'&&ds[i].madoanhnghiep[1]=='N')
        {
            in(ds[i]);
        }
    }
}
int kiemtradaucach(char madoanhnghiep[])
{
    for(int i=0;i<strlen(madoanhnghiep);i++)
    {
        if(madoanhnghiep[i]==' ')
        {
            return 1;
        }
    }
    return 0;
}
void demdnkohople(doanhnghiep ds[],int n)
{
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(ds[i].vondieule<10||kiemtradaucach(ds[i].madoanhnghiep)==1)
        {
            dem++;
        }
    }
    cout<<"so doanh nghiep khong hop le la:"<<dem<<endl;
}
int main()
{
    doanhnghiep ds[100];
    int n;
    cout<<"Nhap n:";
    cin>>n;
    nhapdanhsach(ds,n);
    cout<<"\nsau khi sap xep:";
    sapxep(ds,n);
    xuatdanhsach(ds,n);
    cout<<"\nDoanh nghiep dc chon:";
    indn(ds,n);
    cout<<endl;
    demdnkohople(ds,n);
    return 0;
}
