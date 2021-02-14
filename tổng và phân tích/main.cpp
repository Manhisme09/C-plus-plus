#include <iostream>
using namespace std;
int tong(int n){
    int a=0;
    while(n>0){
       a=a+n%10;
       n=n/10;
    }
    return a;
}
void phanTich(int n){
    int i=2;
    while(n>1){
       if(n%i==0){
           cout<<""<<i;
           if(n!=i){
            cout<<" x ";
           }
           n=n/i;
       }else{
           i++;
       }
    }
}

int main(){
    int n;
    do{
        cout<<"Nhap n:";
        cin>>n;
    }while(n<0);
    cout<<"Tong cac chu so la:"<<tong(n)<<endl;
    phanTich(n);
    return 0;


}
