#include <iostream>
using namespace std;
int nguyenTo(int n){
    int i,dem=0;
    for(i=2;i<n;i++){
        if(n%i==0){
            dem++;
        }
    }
    if(dem==0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int n,j;
    do{
        cout<<"Nhap n:";
        cin>>n;
    }while(n<0);
    cout<<"uoc nguyen to cua n la:";
    for(j=1;j<=n;j++){
        if(n%j==0&&nguyenTo(j)==1){
            cout<<" "<<j;
        }
    }
    cout<<endl;
    cout<<"uoc khong nguyen to cua n la:";
    for(j=1;j<=n;j++){
        if(n%j==0&&nguyenTo(j)==0){
            cout<<" "<<j;
        }
    }


    return 0;
}
