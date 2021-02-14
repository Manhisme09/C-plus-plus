#include <iostream>
#include<string.h>
using namespace std;
void xoa_khoang_trang_o_dau_va_cuoi_chuoi(string &str){
    while(str[0]==' '){
        str.erase(str.begin()+0);
    }
    while(str[str.length()-1]==' '){
        str.erase(str.begin()+str.length()-1);
    }

}
void xoa_khoang_trang_giua_cac_phan_tu(string &str){
    int i;
    for(i=0;i<str.length();i++){
            if(str[i]==' '&&str[i+1]==' '){
                str.erase(str.begin()+i);
                i--;
            }

    }
}
void in_hoa(string &str){
    int i;
    for(i=0;i<str.length();i++){
        if(str[i]>=65&&str[i]<=90){
            str[i]=str[i]+32;
        }
    }
    for(i=0;i<str.length();i++){
        if(str[i]==' '&&str[i+1]!=' '){
            str[i+1]=str[i+1]-32;
        }
    }
    if(str[0]>=97&&str[0]<=122){
        str[0]=str[0]-32;
    }
}

int main()
{
    string str;
    cout<<"Nhap chuoi S<100 ky tu:";
    getline(cin,str);
    cout<<"Chuoi nhan duoc:"<<str<<endl;
    cout<<"do dai cua chuoi:"<<str.length()<<endl;
    xoa_khoang_trang_o_dau_va_cuoi_chuoi(str);
    xoa_khoang_trang_giua_cac_phan_tu(str);
    in_hoa(str);
    cout<<"Chuoi sau khi chuan hoa la:"<<str<<endl;
    cout<<"do dai cua chuoi:"<<str.length()<<endl;

    return 0;
}
