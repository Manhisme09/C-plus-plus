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
bool ngto(int n){
    int j,dem=0;
    if(n<2){
        return false;
    }
    for(j=2;j<n;j++){
        if(n%j==0){
            dem++;
        }
    }
    if(dem==0){
        return true;
    }else{
        return false;
    }
}
void xoa(int a[],int n,int k){
    int i;
    for(i=k-1;i<n;i++){
        a[i]=a[i+1];
    }
    n--;
}

int main(){
    int n,a[100],i,k;
    cout<<"Nhap n:";
    cin>>n;
    nhapMang(a,n);
    for(i=0;i<n;i++){
        if(ngto(a[i])){
            k=i+1;
            xoa(a,n,k);
        }
    }

    xuatMang(a,n);

    return 0;
}
