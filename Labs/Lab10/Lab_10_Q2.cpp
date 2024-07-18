// Create a C++ program to swap the data using template function, instead of calling
// a function by passing a value, use call by reference. Two numbers can be of same
// data type or combination of different data types.

#include<iostream>
#include<string>
using namespace std;

template <typename T>
void swapData(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=20,y=24;
    swapData(x,y);
    cout<<x<<y<<endl;

    string str1="Fatimaa ",str2=" Khan";
    swapData(str1,str2);
    cout<<str1<<str2;
}