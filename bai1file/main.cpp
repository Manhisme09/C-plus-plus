#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

void nhap(float *a,int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}
void xuat(float *a,int n){
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	}
}
void ghiFile(float *a,int n){
	FILE *file;
	file=fopen("ABC2018.txt","w");
	if(file==NULL){
		cout<<"co loi ko tao duoc file";
	}else{
		for(int i=0;i<n;i++){
			fprintf(file," %.2f",a[i]);
		}
		cout<<"\nghi file thanh cong";

	}
	fclose(file);
}
void sapXep(float *a,int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				swap(a[i],a[j]);
			}
		}
	}
	FILE *file;
	file=fopen("ABC2018.txt","a");
	if(file==NULL){
		cout<<"co loi ko tao duoc file";
	}else{

		for(int i=0;i<n;i++){

			fprintf(file," \n%.2f",a[i]);
		}
		cout<<"\nGhi them vao tep thanh cong";
	}
	fclose(file);
}
float tim(float *a,int n){
	float min = a[0];
	int dem=0;
	for(int i=1;i<n;i++){
		if(a[i]<min){
			min = a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]>0&&a[i]==min){
			return a[i];
		}
	}

}
void kiemTra(float *a,int n){
	int dem=0;
	for(int i=0;i<n-1;i++){
		if(a[i]>0&&a[i+1]>0&&a[i]+a[i+1]>5){
			dem++;
		}
	}
	if(dem==n-1){
		cout<<"\nday A hop le:";
	}else{
		cout<<"\nday A ko hop le";
	}
}
int main(){
	int n;
	float *a = new float[100];
	cout<<"Nhap n:";
	cin>>n;
	nhap(a,n);
	xuat(a,n);
	ghiFile(a,n);
	sapXep(a,n);
	if(isnan(tim(a,n))){
		cout<<"\nko co so duong";
	}else{
		cout<<"\nso duong nho nhat la:"<<tim(a,n);
	}
	kiemTra(a,n);
    return 0;
}

