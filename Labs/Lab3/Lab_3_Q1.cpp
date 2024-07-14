// Write a C++ program to copy the value of one object to another object using copy
// constructor. For example you can define a class for complex number and create its
// object for performing this task. Remember that you must allocate memory
// dynamically to data members.

#include <iostream>
#include <string>

using namespace std;

class ComplexNumber{
private:
    int *real;
    int *imaginary;

public:
   ComplexNumber(){
    real=new int(0);
    imaginary=new int(0);
   }
   //default constructor

   ComplexNumber(int r,int i){
    real=new int(r);
    imaginary=new int(i);
   }
   //parametrized

   ComplexNumber (const ComplexNumber &obj){
    real=new int(*obj.real);
    imaginary=new int(*obj.imaginary);
   }
   //copy

   void display(){
    cout<<"Complex Number Is: ("<<*real<<"+"<<*imaginary<<"i)"<<endl;
    //dereferencing pointers to get the actual values of real and imaginary
   }

   ~ComplexNumber(){
    delete real;
    delete imaginary;
   }

};

int main(){
    ComplexNumber c1;
    c1.display();
    ComplexNumber c2(2,3);
    c2.display();
    ComplexNumber c3(c2);
    c3.display();
}