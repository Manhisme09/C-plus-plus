#include<iostream>
#include<stdio.h>
using namespace std;
void nhap(int n,float *a)
{
	for(int i = 0;i < n; i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}
void xuat(int n,float *a)
{
	for(int i = 0;i < n;i++)
	{
		cout<<" "<<a[i];
	}
}
void ghiFile(int n,float *a)
{
	FILE *file;
	file = fopen("ABC2017.txt","w");
	if(file==NULL)
	{
		cout<<"co loi roi";	
	}
	else
	{
		for(int i=0;i<n;i++)
		{
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
	file=fopen("ABC2017.txt","a");
	if(file==NULL){
		cout<<"co loi ko tao duoc file";
	}else{
		fprintf(file,"\n");
		for(int i=0;i<n;i++){
			fprintf(file," %.2f",a[i]);
		}
		cout<<"\nGhi them vao tep thanh cong";
	}
	fclose(file);
}
void find(int n,float *a)
{
	int dem=0;
	float min=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]<min){
			min=a[i];
		}
	}
	cout<<"\nso nho nhat trong day la:"<<min<<endl;
	for(int i=0;i<n;i++)
	{
		if(a[i]==min)
		dem++;
	}	
	cout<<"co "<<dem<<" so do trong day"<<endl;
}
int kiemTra(int n,float *a,float x)
{
	int dem1=0;
	for (int i=0;i<n;i++)
	{
		if(a[i]>x)
		{
			dem1++;
		}
	}
	return dem1;
}
int timViTri(int n,float *a,float x)
{
	for (int i=0;i<n;i++)
	{
		if(a[i]>x)
		{
			return i;
			break;
		}
	}

}
void chen(int &n,float *a,int k,float x)
{
	for(int i=n;i>k;i--){
		a[i]=a[i-1];
	}
	a[k]=x;
	n++;
}
int main()
{
	int n;
	float x;
	float *a = new float[100];
	float *temp = new float[100];
	int itemp = 0;
	cout<<"Nhap n:";
	cin>>n;
	nhap(n,a);
	cout<<"Mang vua nhap la:"<<endl;
	xuat(n,a);
	for(int i=0;i<n;i++)
	{
		temp[itemp]=a[i];
		itemp++;
	}
	ghiFile(n,a);
	sapXep(a,n);
	find(itemp,temp);
	cout<<"Nhap x:";
	cin>>x;
	if(kiemTra(itemp,temp,x)==0){
		cout<<"ko co phan tu lon hon x";
	}else{
		int k = timViTri(itemp,temp,x)+1;
		chen(itemp,temp,k,x);
		xuat(itemp,temp);
	}
	
    return 0;
}

