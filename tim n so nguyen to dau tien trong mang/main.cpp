#include <iostream>
using namespace std;
bool ktra(int k){
    int j,dem=0;
    for(j=2;j<k;j++){
        if(k%j==0){
            dem++;
        }
    }
    if(dem==0){
        return true;
    }else{
        return false;
    }
}
void manga(int n){
    int k=2,i=0,dem1=0;
    while(dem1<n){

            if(ktra(k)){
                cout<<"a["<<i<<"]="<<k<<endl;
                dem1++;
                i++;
            }
            k++;

}
}
int main(){
    int n;
    do{
        cout<<"Nhap n:";
        cin>>n;
    }while(n<=1||n>=30);
    manga(n);


    return 0;
}
