// You are developing a software application for a library that manages various types of media,
// including books, magazines, and DVDs. Each type of media has specific attributes and
// functionalities, such as the author for books, issue number for magazines, and director for
// DVDs. Additionally, there are certain operations that are common to all types of media, such as
// borrowing, returning, and displaying information. Design a class hierarchy using multiple
// inheritance to handle the different types of media and their functionalities.
// - Create a base class called Media to represent the common attributes and functionalities
// shared by all types of media. This class will include operations such as borrowing,
// returning, and displaying information.
// - Create individual classes for each type of media, such as Book, Magazine, and DVD. Each
// class will inherit from both the Media class and their respective specific attribute classes.
// - Create individual classes for each type of media, such as Book, Magazine, and DVD. Each
// class will inherit from both the Media class and their respective specific attribute classes.
// - Create individual classes for each type of media, such as Book, Magazine, and DVD. Each
// class will inherit from both the Media class and their respective specific attribute classes.
// With this class hierarchy, the library application can handle different types of media such as
// books, magazines, and DVDs. The common functionalities like borrowing, returning, and
// displaying information will be inherited from the Media class, while the specific attributes and
// functionalities for each media type will be defined in their respective classes.

#include<iostream>
#include<string>


using namespace std;


class Media{
string borrowed;
string returned;
public:
Media(){}
Media(string b,string r):borrowed(b),returned(r){}
void display(){
    cout<<"This book has been borrowed on: "<<borrowed
    <<endl<<"This book will be returned on: "<<returned<<endl;
}
};


class Book:virtual public Media{
    string bookName;
    string author;
    public:
    Book(string b,string r,string bn,string a):Media(b,r),bookName(bn),author(a){}
    void display(){
       
        cout<<"The Name Of The Book Is: "<<bookName<<endl;
        cout<<"The Author Is: "<<author<<endl;
         Media::display();
        cout<<endl;
    }
};


class Magazine:virtual public Media{
    string magazineName;
int issueNumber;
public:
Magazine(string b,string r,string mn,int in):Media(b,r),magazineName(mn),issueNumber(in){}
void display(){
    cout<<"the name of the magazine is: "<<magazineName<<endl;
    cout<<"the issue number is: "<<issueNumber<<endl;
     Media::display();
    cout<<endl;
}
};


class DVD:virtual public Media{
    string dvdName;
string director;
public:
DVD(string b,string r,string dn,string d):Media(b,r),dvdName(dn),director(d){}
void display(){
    cout<<"the name of the dvd is: "<<dvdName<<endl;
    cout<<"the name of the director is: "<<director<<endl;
     Media::display();
    cout<<endl;
}
};


int main(){
    Book ob1("23 march","28 march","The Liberation Of Sita","Volga");
    ob1.display();
    Magazine ob2("16 March", "18 March","The Newyork Times",333);
    ob2.display();
    DVD ob3("21 may","30 may","Veer Zaara","Yashraj Films");
    ob3.display();
    return 0;


}
