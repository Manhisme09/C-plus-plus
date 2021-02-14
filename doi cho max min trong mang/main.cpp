#include <iostream>
using namespace std;
void nhapMang(float a[],int n){
    int i;
    for(i=0;i<n;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}
void xuatMang(float a[],int n){
    int i;
    for(i=0;i<n;i++){
        cout<<"\t"<<a[i];
    }
}
void ptmax(float a[],int n){
    int i,dem1=1;
    float max=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
            dem1=i+1;
        }
    }
    cout<<"\nmax:"<<max<<endl;

}
int vitrimax(float a[],int n){
    int i,dem1=1;
    float max=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
            dem1=i+1;
        }
    }
    return dem1;
}
void ptmin(float a[],int n){
    int i,dem2=1;
    float min=a[0];
    for(i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
            dem2=i+1;
        }
    }
    cout<<"\nmin:"<<min<<endl;

}
int vitrimin(float a[],int n){
    int i,dem2=1;
    float min=a[0];
    for(i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
            dem2=i+1;
        }
    }

    return dem2;
}
void doicho(float a[],int n,int x,int y){
    float temp;
    temp=a[x-1];
    a[x-1]=a[y-1];
    a[y-1]=temp;

}
int main(){
    float a[100];
    int n,x,y;
    do{
        cout<<"Nhap n:";
        cin>>n;
    }while(n<1||n>50);
    nhapMang(a,n);
    xuatMang(a,n);
    ptmax(a,n);
    ptmin(a,n);
    x=vitrimin(a,n);
    y=vitrimax(a,n);
    doicho(a,n,x,y);
    xuatMang(a,n);
    return 0;
}
