#include <iostream>
#include <math.h>
using namespace std;
bool ktra(double a1,double a2){
	double check = fabs((a2 - a1) / (a1 * 1.0));
	if(check < 0.00001)
		return true;
	return false;
}
double tinhCanBacHai(int a){
	double temp=a;
	double can=(temp*temp*1.0+a)/(2*temp);
	cout<<temp<<" "<<can;
	while(ktra(temp,can)==false){
		temp=can;
		can=(temp*temp*1.0+a)/(2*temp);
	}
	return can;
}
int main()
{
	int a;
	cout<<"Nhap a:";
	cin>>a;
	cout<<" "<<tinhCanBacHai(a);
	
    
    return 0;
}
