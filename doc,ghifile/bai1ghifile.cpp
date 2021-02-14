#include<iostream>
using namespace std;
void ghiFile(int a[],int n){
	FILE *file;
	file=fopen("Manhdepzai.txt","w");
	if(file==NULL){
		cout<<"Co loi roi";
	}else{
		    fprintf(file,"%d",n);
	    for(int i=0;i<=n;i++){
		    fprintf(file,"%3d",a[i]);
	    }
	    
	    cout<<"Ghi file thanh cong:";
    }
    fclose(file);
}
void nhapMang(int a[],int n){
	for(int i=0;i<=n;i++){
		cout<<"a"<<i<<"=";
		cin>>a[i];
	}
}
int main(){
	int *a = new int[100];
	int n;
	cout<<"Nhap n:";
	cin>>n;
	nhapMang(a,n);
	ghiFile(a,n);
    return 0;
}

