#include <iostream>
using namespace std;
void nhapMang(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}
void xuatMang(int a[],int n){
    int i;
     for(i=0;i<n;i++){
        cout<<"\t"<<a[i];
    }
}
void hienthinguoc(int a[],int n){
    int i;
    for(i=n-1;i>=0;i--){
        cout<<"\t"<<a[i];
    }
}
void sapxep(int a[],int n){
    int i,j,temp;
    for(j=0;j<n-1;j++){
        for(i=j+1;i<n;i++){
                if(a[i]>a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
        }
    }
}
int timvitri(int a[],int n,int m){
     int vt,i;
     for(i=0;i<n;i++){
        if(m<a[i]&&m>a[i+1]){
            vt=i+2;
            break;
        }
        if(m>a[0]){
            vt=1;
            break;
        }
        if(m<a[n-1]){
            vt=n+1;
            break;
        }
    }
    return vt;
}
void chen(int a[],int &n,int m,int k){
    int i;
    for(i=n;i>k-1;i--){
        a[i]=a[i-1];

    }
    a[k-1]=m;
    n++;
}
int main(){
    int a[100];
    int n,k,m;
    do{
        cout<<"Nhap n:";
        cin>>n;
    }while(n<=0||n>=50);
    nhapMang(a,n);
    hienthinguoc(a,n);
    cout<<"\nsap xep giamq dan:";
    sapxep(a,n);
    xuatMang(a,n);
    cout<<"\nNhap so m:";
    cin>>m;
    k=timvitri(a,n,m);
    chen(a,n,m,k);
    xuatMang(a,n);
    return 0;
}
