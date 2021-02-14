#include<iostream>
using namespace std;
void docFile(int a[],int &n){
	FILE *file;
	file=fopen("Manhdepzai2222.txt","r");
	if(file==NULL){
		cout<<"file khong ton tai:";
	}else{
		fscanf(file,"%d",&n);
		cout<<" "<<n<<endl;
	    for(int i=1;i<=n;i++){
		    fscanf(file,"%d",&a[i]);
		    cout<<" "<<a[i];
	    }
	    cout<<"\nDoc file thanh cong:";
    }
    fclose(file);
}
int main(){
	int *a = new int[100];
	int n;
	docFile(a,n);
    return 0;
}
