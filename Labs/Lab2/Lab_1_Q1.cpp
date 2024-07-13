#include<iostream>
#include<string>

using namespace std;

class Student{
string name, rollNumber;
int semester;
char section;
public:
Student(){}
Student(string n, string rn, int s, char se):name(n),
rollNumber(rn),semester(s),section(se){}

void display(){
    if(section=='a' || section=='A'){
        cout<<"Name Is: "<<name<<endl;
        cout<<"Roll Number Is: "<<rollNumber<<endl;
        cout<<"Enrolled In Semester Number: "<<semester<<endl;
        cout<<"Section: "<<section<<endl;
    }
}
};
int main(){
    Student s1("Fatima Khan","CT-23024",2,'a');
    s1.display();
    Student s2("Rania Imran","CT-23005",2,'b');
    Student s3("Azmaray Khan","CT-2040",8,'A');
    s2.display();
    s3.display();
}