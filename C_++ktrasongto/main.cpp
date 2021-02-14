#include<iostream>
using namespace std;

int main(){
    int a,b,dem=1;
    cin>>a>>b;
    while(1){
        if(a*3>=b*2){
            break;
        }
        b=b*2;
        a=a*3;
        dem++;
    }
    cout<<""<<dem;
    return 0;
}
