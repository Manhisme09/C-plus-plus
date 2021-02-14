#include<iostream>
using namespace std;
void ghiFile(float* a,int n){
	FILE* file;
	file=fopen("ktlt123.txt","w");
	if(file==NULL){
		cout<<"Co loi roi";
	}else{
		for(int i=0;i<n;i++){
			fprintf(file," %.2f",a[i]);
		}
		cout<<"\nghi file thanh cong";
	}
	fclose(file);
	
}
void nhapMang(float* a,int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}
void xuatMang(float* a,int n){
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
		
	}
}
void sapxep(float* a,int n){
	 for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
    FILE* file;
	file=fopen("ktlt123.txt","a");
	if(file==NULL){
		cout<<"Co loi roi";
	}else{
		
		for(int i=0;i<n;i++){
			fprintf(file,"\n%.2f",a[i]);
		}
		cout<<"\nghi file thanh cong";
	}
	fclose(file);
    
	
    
}
int main(){
	float* a=new float[100];
	int n;
	cout<<"Nhap n:";
	cin>>n;
	nhapMang(a,n);
	xuatMang(a,n);
	ghiFile(a,n);
	sapxep(a,n);
	
	
	   
}


