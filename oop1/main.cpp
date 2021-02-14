#include <iostream>
using namespace std;
class Student
{
private:
    string id;
    string name;
    int age;
    float mark;
    string address;
public:

    Student();

    Student(string);

    Student(string,int);

    Student(string ,int ,string ,string ,float);

    void display();

    void setId(string);
    void setName(string);
    void setAddress(string);
    void setAge(int);
    void setMark(float);

    string getId();
    string getName();
    string getAddress();
    int getAge();
    float getMark();
    


};

Student::Student()
{

        this->name=" ";
        this->address=" ";
        this->id=" ";
        this->age=0;
        this->mark=0;
}

Student::Student(string name)
{
        this->name=name;
        this->address=" ";
        this->id=" ";
        this->age=0;
        this->mark=0;
}

Student::Student(string name,int age)
{

        this->name=name;
        this->address=" ";
        this->id=" ";
        this->age=age;
        this->mark=0;
}
Student::Student(string name,int age,string id,string address,float mark)
{

        this->name=name;
        this->id=id;
        this->address=address;
        this->age=age;
        this->mark=mark;
}
void Student::display()
{
        cout<<"+++++++++++Student Info+++++++++"<<endl;

        cout<<"Name:"<<name<<endl;
        cout<<"Address:"<<address<<endl;
        cout<<"Id:"<<id<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Mark:"<<mark<<endl;

}
    void Student::setId(string id)
    {
         this->id=id;
    }
    void Student::setName(string name)
    {
        this->name=name;
    }
    void Student::setAddress(string address)
    {
         this->address=address;
    }
    void Student::setAge(int age)
    {
        this->age=age;
    }
    void Student::setMark(float mark)
    {
        this->mark=mark;
    }

    string Student::getId()
    {
        return id;
    }
    string Student::getName()
    {
        return name;
    }
    string Student::getAddress()
    {
        return address;
    }
    int Student::getAge()
    {
        return age;
    }
    float Student::getMark()
    {
        return mark;
    }
int main()
{
    
    Student s1("Manh",19,"2019604009","hanoi",10);
    //Student s1(name);
    //Student s2(name,29);
    //Student s3(name,29,id,address,9);
    //s.showInfo();
    //s1.showInfo();
    //s2.showInfo();
    //s3.showInfo();
    
    
    s1.getAge();
    s1.getAddress();
    s1.getName();
    s1.display();
    s1.setMark(100);
    

    s1.display();

    return 0;
}
