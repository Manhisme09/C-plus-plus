#include <iostream>
#include <string>
using namespace std;
void xoa_khoang_trang_o_dau_va_cuoi_chuoi(string &str){
    while(str[0]==' '){
        str.erase(str.begin()+0);
    }
    while(str[str.length()-1]==' '){
        str.erase(str.begin()+str.length()-1);
    }

}
void xoa_khoang_trang_giua_cac_tu(string &str){
    for(int i=0;i<str.length();i++){
        if(str[i]==' '&&str[i+1]==' '){
            str.erase(str.begin()+i);
            i--;
        }
    }
}
int main()
{
    string str;
    cout<<"Nhap chuoi S<100 ky tu:";
    getline(cin,str);
    cout<<"Chuoi nhan duoc:"<<str<<endl;
    xoa_khoang_trang_o_dau_va_cuoi_chuoi(str);
    xoa_khoang_trang_giua_cac_tu(str);
    cout<<"Chuoi sau khi chuan hoa: "<<str<<endl;
    return 0;
}
