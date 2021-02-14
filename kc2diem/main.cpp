#include <iostream>
#include<math.h>
using namespace std;
struct diem{
    double x;
    double y;
};
void nhap2Diem(diem &dm){
    cout<<"Nhap x:";
    cin>>dm.x;
    cout<<"Nhap y:";
    cin>>dm.y;
}
void nhapds(diem dm[],int n){
    for(int i=0;i<n;i++){
        nhap2Diem(dm[i]);
    }
}
double khoangCach(diem a,diem b){
    double D = sqrt(pow(b.x-a.x,2)+pow(b.y-a.y,2));
    return D;
}
int main()
{
    diem dm[100];
    double d[100];
    int n,a=0;
    cout<<"Nhap n:";
    cin>>n;
    nhapds(dm,n);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            d[a]=khoangCach(dm[i],dm[j]);
            a++;
        }
    }
    double max=d[0];
    for(int i=0;i<a;i++){
        if(d[i]>max){
            max=d[i];
        }

    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(khoangCach(dm[i],dm[j])==max){
                cout << "toa do hai diem can tim la : " << endl;
				cout << "(" << dm[i].x << "," << dm[i].y << ")" << endl;
				cout << "(" << dm[j].x << "," << dm[j].y << ")" << endl;
				break;
            }
        }
    }

    return 0;
}
