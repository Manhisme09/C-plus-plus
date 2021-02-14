#include <iostream>
using namespace std;
int main(){
    int n,i=2;
    do{
	    cout<<"Nhap n:";
	    cin>>n;
	}while(n<=0);
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
