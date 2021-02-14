#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c,p,s;
    cout<<"Nhap a:";
    cin>>a;
    cout<<"Nhap b:";
    cin>>b;
    cout<<"Nhap c:";
    cin>>c;
    if(a+b>c||a+c>b||c+b>a){
        cout<<"la 1 tam giac"<<endl;
        p=(a+b+c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        cout<<"dien tich "<<s<<" cm2";


    }else{
        cout<<"khong la 1 tam giac";
    }


}
