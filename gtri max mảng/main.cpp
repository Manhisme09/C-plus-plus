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
        cout<<"   "<<a[i];
    }
}
int timMax(int a[],int n){
    int i;
    int max=a[0];
    for(i=1;i<n;i++){
        if(max<a[i]){
            max=a[i];

        }
    }
    return max;
}
int main(){
    int n,a[100];
    cout<<"Nhap n:";
    cin>>n;
    nhapMang(a,n);
    xuatMang(a,n);
    cout<<"\n Gia tri lon nhat trong mang la:"<<timMax(a,n);
    return 0;
}
