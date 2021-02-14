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
        cout<<"\t"<<a[i];
    }
}
/*void chen(int a[],int &n,int x,int k){
    int i;
    for(i=n;i>k-1;i--){
        a[i]=a[i-1];

    }
    a[k-1]=x;
    n++;
}*/
void xoa(int a[],int &n,int k){
    for(int i=k-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
}
int main(){
    int a[100];
    int n,k,x;
    do{
        cout<<"Nhap n:";
        cin>>n;
    }while(n<=0||n>=50);
    nhapMang(a,n);
    cout<<"nhap vt k:";
    cin>>k;
    cout<<"nhap x:";
    cin>>x;
    //chen(a,n,x,k);
    xoa(a,n,k);
    xuatMang(a,n);

    return 0;
}
