#include <iostream>
using namespace std;
bool thuanNghich(int i){
    int dao=0;
    int temp=i;
    while(i>0){
        dao=dao*10+i%10;
        i=i/10;
    }
    if(dao==temp){
        return true;
    }else{
        return false;
    }
}
int chiaHet(int i){
    int a=0;
    while(i>0){
        a=a+i%10;
        i=i/10;
    }
    return a;
}
int main(){
    int n,k;
    do{
        cout<<"nhap k:";
        cin>>k;
    }while(k<0);
     for(n=10000000;n<=99999999;n++){
        if(thuanNghich(n)&&chiaHet(n)%k==0){
            cout<<" "<<n;
        }
     }

    return 0;
}
