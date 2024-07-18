// Create a C++ class called mycontainer that can store one element of
// any type and it has just one member function called increase, which
// increases its value. But we find that when it stores an element of type
// char it would be more convenient to have a completely different
// implementation with a function member uppercase, declare a
// class template specialization for that type.

#include<iostream>
#include<string>

using namespace std;

template<class T>
class myContainer{
T element;
public:
myContainer(){}
myContainer(T e):element(e){}
void increase(){
    element++;
    cout<<"Your element Is: "<<element<<endl;
}

};

template<>
class myContainer<char>{
    char element;
    public:
    myContainer(char e):element(e){}

    void increase(){
        if(element>='a' && element<='z'){
            element=(element=='z')?'a':element+1;
        }else if(element>='A' && element<='Z'){
            element=(element=='Z')?'A':element+1;
    
    }else{
        element++;
    }}
    void display(){
        cout<<"element is: "<<element<<endl;
    }
    };

    int main(){
        myContainer<int> c1(3);
        c1.increase();
        
        myContainer<char> c3('z');
        c3.increase();
        c3.display();
    }
