#include <iostream>
using namespace std;
void nhapMang(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}
void xuatMang(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        cout<<" "<<a[i];
    }
}
void hienThi(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        if(a[i]%2==0&&a[i]%3==0){
            cout<<" "<<a[i];
        }
    }
}
void sapXep(int a[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]%2!=0&&a[j]%2==0){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                break;


            }

        }
    }


}
void sapXep1(int a[],int n){
    int i,j,temp;
      for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]&&a[j]%2==0){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=n-1;i>=0;i--){
        for(j=i-1;j>=0;j--){
            if(a[i]>a[j]&&a[j]%2!=0){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int n,a[100];
    cout<<"Nhap n:";
    cin>>n;
    nhapMang(a,n);
    hienThi(a,n);
    cout<<"\n";
    sapXep(a,n);
    xuatMang(a,n);
     cout<<"\n";
    sapXep1(a,n);
    xuatMang(a,n);
    return 0;
}
