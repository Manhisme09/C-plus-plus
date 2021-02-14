#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    int pid;
    string ho;
    string dem;
    string ten;
    string gioitinh;
    string address;
    string sdt;
    int tuoi;
public:
    static int id;
    Person();
    Person(string ,string ,string ,string ,string ,string ,int ,int );
    int getId();
    void setId(int);
    string getHo();
    void setHo(string);
    string getDem();
    void setDem(string);
    string getTen();
    void setTen(string);
    string getGioiTinh();
    void setGioiTinh(string);
    string getAddress();
    void setAddress(string);
    string getSdt();
    void setSdt(string);
    int getTuoi();
    void setTuoi(int);

    void showInfo();
    string fullName();




};
Person::Person()
{
    this->pid=100;
    this->ho="";
    this->dem="";
    this->ten="";
    this->gioitinh="";
    this->address="";
    this->sdt="";
    this->tuoi=0;
}
Person::Person(string ho,string dem,string ten,string gioitinh,string address,string sdt,int tuoi,int id)
{

}
int Person::id = 100;
void Person::setId(int id)
{
    this->pid=(id>=100)? id : Person::id++;
}
void Person::setHo(string ho)
{
    this->ho=ho;
}
void Person::setDem(string dem)
{
    this->dem=dem;
}
void Person::setTen(string ten)
{
    this->ten=ten;
}
void Person::setGioiTinh(string gioitinh)
{
    this->gioitinh=gioitinh;
}
void Person::setAddress(string address)
{
    this->address=address;
}
void Person::setSdt(string sdt)
{
    this->sdt=sdt;
}
void Person::setTuoi(int tuoi)
{
    this->tuoi=tuoi;
}
int Person::getId()
{
    return this->pid;
}
string Person::getHo()
{
    return this->ho;
}
string Person::getDem()
{
    return this->dem;
}
string Person::getTen()
{
    return this->ten;
}
string Person::getGioiTinh()
{
    return this->gioitinh;
}
string Person::getAddress()
{
    return this->address;
}
string Person::getSdt()
{
    return this->sdt;
}
int Person::getTuoi()
{
    return this->tuoi;
}
void Person:: showInfo()
{
    cout<<"+++++++++++++++++++++++++"<<endl;
    cout<<"ID:"<<pid<<endl;
    cout<<"Ho:"<<ho<<endl;
    cout<<"Dem:"<<dem<<endl;
    cout<<"Ten:"<<ten<<endl;
    cout<<"Gioitinh:"<<gioitinh<<endl;
    cout<<"Address:"<<address<<endl;
    cout<<"SDT:"<<sdt<<endl;
    cout<<"Tuoi:"<<tuoi<<endl;
}
string Person::fullName()
{
    return getHo()+' '+getDem()+' '+getTen();
}

void getPersonInfo(Person* ps,int n)
{
    int age;
    Person p;
    string ho,dem,ten,gioitinh,address,sdt;
    for (int i=0;i<n;i++)
    {
        cout<<"Ho:";
        cin>>ho;
        cout<<"Dem:";
        cin.ignore();
        getline(cin,dem);
        cout<<"Ten:";
        cin>>ten;
        cout<<"Address:";
        cin.ignore();
        getline(cin,address);
        cout<<"Gioitinh:";
        cin>>gioitinh;
        cout<<"SDT";
        cin>>sdt;
        cout<<"Age";
        cin>>age;

        Person p(0,ho,ten,dem,address,gioitinh,sdt,age);
        ps[i]=p;


    }
}
void showInfo(Person* ps,int n)
{
    for(int i=0;i<n;i++)
    {
        ps[i].showInfo();
    }

}
int main()
{
    Person* people;
    int n;
    cout<<"Nhap n:";
    cin>>n;

    people = new Person[n];
    getPersonInfo(people,n);

    showInfo(people,n);
    return 0;
}
