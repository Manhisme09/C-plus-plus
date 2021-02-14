#include <iostream>
using namespace std;
void toiGian(int a,int b){
    int i=2;
    while(i<=a){
        if(a%i==0&&b%i==0){
            a=a/i;
            b=b/i;
        }else{
            i++;
        }
    }
    cout<<" "<<a;
    cout<<" "<<b;
}
int main(){
    int a,b;
    cout<<"Nhap a:";
    cin>>a;
    cout<<"Nhap b:";
    cin>>b;
    toiGian(a,b);
    return 0;
}
