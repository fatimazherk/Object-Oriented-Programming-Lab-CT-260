// Create a class called Employee that includes three pieces of information as data
// members—a first name (type char* (DMA)), a last name (type string) and a monthly salary
// (type int). Your class should have a setter function that initializes the three data members.
// Provide a getter function for each data member. If the monthly salary is not positive, set it
// to 0. Write a test program that demonstrates class Employee’s capabilities. Create two
// Employee objects and display each object’s yearly salary. Then give each Employee a 10
// percent raise and display each Employee’s yearly salary again. Identify and add any other
// related functions to achieve the said goal.
    
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
