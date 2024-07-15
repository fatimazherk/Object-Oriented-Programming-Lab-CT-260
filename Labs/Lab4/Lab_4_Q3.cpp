// Write a program in which a class named Account has private member variables
// named account_no ,account_bal ,security_code. Use a public function to initialize
// the variables and print all data. Keep track of number of objects using the keyword
// static.

#include<iostream>
#include<string>

using namespace std;

static int count=0;

class Account{
string accountNo;
int accountBal;
int securityCode;
public:
Account(){}
Account(string an,int ab, int sc):accountNo(an),accountBal(ab),securityCode(sc){
count++;
}
void display(){
cout<<"Account Number Is: "<<accountNo<<endl;
cout<<"Account Balance Is: "<<accountBal<<endl;
cout<<"Security Code Is: "<<securityCode<<endl;
cout<<"*****************************************"<<endl;
}
void displayCount(){
    cout<<"Number Of Objects Is: "<<count<<endl;
}
};

int main(){
    Account a1("AB365",3000,786);
    a1.display();
    Account a2("KILLME",947,567);
    a2.display();
    Account a3("???",72693,736);
    a3.display();
    a3.displayCount();
}