#include <iostream>
#include <cstdio>

using namespace std;
struct hocsinh
{
    char hoten[30];
    int namsinh;
    float dtbk1,dtbk2,dtbcn;
};
void nhap(hocsinh &hs)
{
    cout<<"Nhap hoten:";
    fflush(stdin);
    gets(hs.hoten);
    cout<<"Nhap nam sinh:";
    cin>>hs.namsinh;
    cout<<"Nhap diem tb ki 1:";
    cin>>hs.dtbk1;
    cout<<"Nhap diem tb ki 2:";
    cin>>hs.dtbk2;
    hs.dtbcn=((hs.dtbk1+hs.dtbk2*2)/3);
}
void xuat(hocsinh hs)
{
    cout<<"\nHo ten:"<<hs.hoten<<endl;
    cout<<"Nam sinh:"<<hs.namsinh<<endl;
    cout<<"diem tb ki 1:"<<hs.dtbk1<<endl;
    cout<<"diem tb ki 2:"<<hs.dtbk2<<endl;
    cout<<"diem trung binh ca nam:"<<hs.dtbcn<<endl;
}
void nhapdanhsach(hocsinh ds[],int n)
{
    int i;
    for(i=0;i<n;i++){
        nhap(ds[i]);
        cout<<endl;

    }
}
void xuatdanhsach(hocsinh ds[],int n)
{
    int i;
    for(i=0;i<n;i++){
        xuat(ds[i]);
        cout<<endl;
    }
}

void hienthi(hocsinh ds[],int n)
{
    hocsinh temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ds[i].dtbcn<ds[j].dtbcn)
               {
                    temp=ds[i];
                    ds[i]=ds[j];
                    ds[j]=temp;
               }
        }
    }
        for(int i=0;i<n;i++)
    {
        if(ds[i].dtbcn>5.0)
        {
            cout<<" "<<ds[i].hoten;
        }
    }


}
int main()
{
    int n;
    hocsinh ds[100];
    cout<<"Nhap so luong hoc sinh:";
    cin>>n;
    nhapdanhsach(ds,n);
    xuatdanhsach(ds,n);
    cout<<"/n....";
    hienthi(ds,n);
    return 0;
}
