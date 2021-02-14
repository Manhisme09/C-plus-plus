#include <iostream>

using namespace std;

int main(){
    int n,a=0;
    cout<<"Nhap n:";
    cin>>n;
    while(n>0){
        a=a+(n%10);
        n=n/10;
    }
    cout<<"tong la: "<<a;


    return 0;
}
