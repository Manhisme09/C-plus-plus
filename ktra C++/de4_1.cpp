#include<iostream>
#include<math.h>
using namespace std;

void nhap(int &n,int &m)
{
	cout<<"Nhap n:";
	cin>>n;
	cout<<"Nhap m:";
	cin>>m;
	if(m<n)
	{
		swap(m,n);
	}
}
int tong(int n,int m)
{
	int T=0;
	for(int i=n;i<=m;i++)
	{
		if(i%15==0)
		{
			T+=i;	
		}
	}	
	return T;
}
double tinhF(double x,int n)
{
	double F=2020*fabs(n*x);
	if(n<0){
		F=1;
	}else if(n>0){
		for(int i=1;i<=n;i++){
			F=F+x/(2*n-i);
		}
	}
	return F;
	
}
int main()
{
	int n,m;
	double x;
	nhap(n,m);
	cout<<"Nhap x:";
	cin>>x;
	cout<<"\nTong chia het cho 3va5 trong doan [n,m]:"<<tong(n,m)<<endl;
	cout<<"Tong chia het cho 3va5 trong doan [n,m]:"<<tong(1,n)<<endl;
	cout<<"T="<<tinhF(x,m)-tinhF(x,n);
    return 0;
}

