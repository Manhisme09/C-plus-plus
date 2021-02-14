#include <iostream>
using namespace std;
int nto(int m){
    int i,dem=0;
    if(m<2){
        return 0;
    }
    for(i=2;i<m;i++){
        if(m%i==0){
            dem++;
        }
        if(dem==0){
            return 1;
        }else{
            return 0;
        }
    }
}
bool ktra(int n){
    while(n>0){
        if(nto(n)==0){
            return false;
        }
        n=n/10;
    }
    return true;

}
int main(){
    int n;
    cout<<"Nhap n:";
    cin>>n;
    if(ktra(n)){
        cout<<"la so sieu nguyen to";
    }else{
        cout<<"ko la so siêu nugyen to";
    }
    return 0;
}
