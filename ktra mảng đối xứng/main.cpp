#include<iostream>
using namespace std;
void nhapMang(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}
bool ktranchan(int a[],int n){
    int i=0,dem1=0;
       while(i<(n/2)){
           if(a[i]==a[n-i-1]){
               dem1++;
           }
           i++;
       }
       if(dem1==(n/2)){
        return true;
       }else{
           return false;
       }
}
bool ktranle(int a[],int n){
    int i=0,dem2=0;
    while(i<((n-1)/2)){
        if(a[i]==a[n-i-1]){
            dem2++;
        }
        i++;
    }
    if(dem2==((n-1)/2)){
        return true;
       }else{
           return false;
       }
}
int main(){
    int a[100],n;
    cout<<"Nhap n:";
    cin>>n;
    nhapMang(a,n);
    if(n%2==0){
        if(ktranchan(a,n)){
            cout<<"mang doi xung";
        }else{
            cout<<"mang ko doi xung";
        }
    }else{
          if(ktranle(a,n)){
            cout<<"mang doi xung";
        }else{
            cout<<"mang ko doi xung";
        }
    }

    return 0;
}
