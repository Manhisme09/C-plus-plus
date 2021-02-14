#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Nhap a:";
    cin>>a;
    cout<<"Nhap b:";
    cin>>b;
    if(a==0&&b==0){
        cout<<"khong co UCLN";
    }if(b==0){
        cout<<"UCLN:"<<a;
    }if(a==0){
        cout<<"UCLN:"<<b;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }if(b>a){
            b=b-a;
        }
    }
    cout<<"UCLN:"<<a;

    return 0;
}
