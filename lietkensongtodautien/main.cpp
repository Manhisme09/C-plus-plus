#include <iostream>

using namespace std;
bool ktra(int n){
    int i,dem=0;
    for(i=2;i<n;i++){
        if(n%i==0){
            dem++;
        }
    }
    if(dem==0){
        return true;
    }else{
        return false;
    }

}
int main(){
    int n,dem=0,j=2,k=0;
    cout<<"Nhap n:";
    cin>>n;
    while(k!=n){
        if(ktra(j)){
            cout<<" "<<j;
            k++;
        }
            j++;

    }


    }
