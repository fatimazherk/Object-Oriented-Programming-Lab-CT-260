// 3. Create a class tollbooth. The two data items are a type int to hold the total number
// of cars and a type double to hold the total amount of money collected. A
// constructor initializes both these to 0. When a car passes the toll, a member
// function called payingCar( ) increments the car total and adds 0.50 to the cash
// total. Another member function displays the two totals. DESIGN and IMPLEMENT
// this case. Make assumptions (if required) and include it in the description before
// designing the solution.

#include<iostream>
#include<string>

using namespace std;

class Tollbooth{
int totalCars;
double totalMoney;
public:
Tollbooth(){
    totalCars=0;
    totalMoney=0;
}
void payingCars(){
    totalCars++;
    totalMoney=totalMoney+0.50;
}
void display(){
    cout<<"The Total Number Of Cars Is: "<<totalCars<<endl;
    cout<<"The Total Amount Collected Is: $ "<<totalMoney<<endl;
}
};

int main(){
    Tollbooth t1;
    t1.payingCars();
    t1.payingCars();
    t1.payingCars();
    t1.payingCars();

    t1.display();
}