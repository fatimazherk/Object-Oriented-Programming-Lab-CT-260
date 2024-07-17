//encryption 

#include<iostream>
#include<string>

using namespace std;

class encrypTech{
    virtual void encrypt()=0;
};
class encrypTech1: public encrypTech{
string message;
protected:
int size;
char *encrypted;
encrypTech1(){}
encrypTech1(string msg):message(msg),size(message.length()){
    encrypted=new char[msg.length()];
}
void encrypt(){
    for(int i=0;i<size;i++){
        encrypted[i]=message.at(i);
        cout<<(int)encrypted[i];
    }
    cout<<endl;
    delete[] encrypted;
}
string getmsg(){
    return message;
}
};
class encrypTech2:public encrypTech{
string message;
int size;
char* encrypted;
public:
encrypTech2(){}
encrypTech2(string msg):message(msg),size(message.length()){
    encrypted=new char[msg.length()];
}
void encrypt(){
    for(int i=0;i<size;i++){
        encrypted[i]=message.at(i);
        cout<<((int)encrypted[i]+2);
    }
    cout<<endl;
    delete[] encrypted;
}
};

class deEncrypTech:public encrypTech1{
string m=getmsg();
public:
using encrypTech1::encrypTech1;
void deencrypt(){
    for(int i=0;i<size;i++){
        encrypted[i]=m.at(i);
    }
    cout<<endl;
    delete[]encrypted;
}
};

int main(){
    encrypTech1 ob("hello");
    ob.encrypt();

    encrypTech2 obj("hello");
    obj.encrypt();

    deEncrypTech obj3("hello");
    obj3.deencrypt();
}