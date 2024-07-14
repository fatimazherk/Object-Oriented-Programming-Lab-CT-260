#include<iostream>
#include<string>

using namespace std;

class Employee{
char *firstName=new char[10];
string lastName;
int monthlySalary;

public:
Employee(){}
Employee(string ln,int ms):lastName(ln){
    if(monthlySalary<0){
        monthlySalary=0;
    }else{
        monthlySalary=ms;
    }
}

char *getFirstName(){
    return firstName;
}

void setLastName(string ln){
    lastName=ln;
}
string getLastName(){
    return lastName;
}
void setMonthlySalary(int ms){
    if(monthlySalary>0){
    monthlySalary=ms;
}else{
    monthlySalary=0;
}
}
int getMonthlySalary(){
    return monthlySalary;
}

void calculateRaise(){
    long long raise=monthlySalary*12;
    cout<<"Monthly Salary After Raise Is: "<<raise<<endl;
    long long yearlySalary=(monthlySalary*12)*0.1+monthlySalary*12;
    cout<<"Yearly Salary Is: "<<yearlySalary<<endl;
    }

void display(){
    cout<<"Employees name is: "<<firstName<<" "<<lastName<<endl;
}

};

int main(){
Employee e1("Khan",36000);
cout<<"Enter first Name : "<<endl;
do{
    cin>>e1.getFirstName();
}while(getchar()!='\n');
e1.display();
e1.calculateRaise();

Employee e2("Eesani",783840);
cout<<"Enter first Name : "<<endl;
do{
    cin>>e2.getFirstName();
}while(getchar()!='\n');
e2.display();
e2.calculateRaise();

}