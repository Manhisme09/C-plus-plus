#include <iostream>
using namespace std;
int main(){
    int n,a=0,m;
    cout<<"Nhap n:";
    cin>>n;
    m=n;
    while(m>0){
      a=a*10+m%10;
      m=m/10;
    }
    if(n==a){
        cout<<""<<n<<" La so thuan nghich";

    }else{
        cout<<""<<n<<" khong";
    }
}
