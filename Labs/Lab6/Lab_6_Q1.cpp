// Create a base class with the following members:
// - Private integer privateInt
// - Protected integer protectedInt
// - Public integer publicInt
// Create getters and setters for each of these variables. Derive 3 classes from the base
// class with the three types of inheritance based on visibility(public, protected, private).
// You can name these classes as publicChild, privateChild and protectedChild. After
// doing this, try and figure out which member you can access publicly or through getters
// and setters. Then print out the way that you were able to access them. For example, if
// you did private inheritance, you could not be able to access the members in the child
// classes, and would need to use their getters or setters.

#include<iostream>
#include<string>

using namespace std;

class Base{
private:
int privateInt;

protected:
int protectedInt;

public:
int publicInt;
Base(int pri,int pro,int pub):privateInt(pri),protectedInt(pro),publicInt(pub){}

void setPrivateInt(int pri){
    privateInt=pri;
} int getPrivateInt(){
    return privateInt;
}

void setProtectedInt(int pro){
    protectedInt=pro;
} int getProtectedInt(){
    return protectedInt;
}

void setPublicInt(int pub){
    publicInt=pub;
} int getPublicInt(){
    return publicInt;
}

};

class privateChild:private Base{
    public:
    privateChild(int pri,int pro,int pub):Base(pri,pro,pub){}

    void display(){
cout<<"Your Private Integer Is: "<<getPrivateInt()<<endl;
cout<<"Your Protected Integer Is: "<<protectedInt<<endl;
cout<<"Your Public Integer Is: "<<publicInt<<endl;
    }
};

class protectedChild:protected Base{
    public:
    protectedChild(int pri,int pro,int pub):Base(pri,pro,pub){}
    void display(){
cout<<"Your Private Integer Is: "<<getPrivateInt()<<endl;
cout<<"Your Protected Integer Is: "<<protectedInt<<endl;
cout<<"Your Public Integer Is: "<<publicInt<<endl;
    }
};

class publicChild:public Base{
    public:
    publicChild(int pri,int pro,int pub):Base(pri,pro,pub){}
    void display(){
cout<<"Your Private Integer Is: "<<getPrivateInt()<<endl;
cout<<"Your Protected Integer Is: "<<protectedInt<<endl;
cout<<"Your Public Integer Is: "<<publicInt<<endl;
    }
};

int main(){
    privateChild pri1(2,4,6);
    pri1.display();

    protectedChild pro1(5,6,7);
    pro1.display();

    publicChild pub1(1,2,3);
    pub1.display();
}
