#include <iostream>

using namespace std;

int main(){
    int a,b,x,i;
    cout<<"Nhap a:";
    cin>>a;
    cout<<"Nhap b:";
    cin>>b;
    if(a>b){
        for(i=1;i>0;i++){
            x=a*i;
            if(x%b==0){
                break;
            }
        }
        cout<<"BCNN:"<<x;
    }
    if(a<b){
        for(i=1;i>0;i++){
            x=b*i;
            if(x%a==0){
                break;
            }
        }
        cout<<"BCNN:"<<x;

    }

    return 0;
}
