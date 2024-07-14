// 2. In a virtual battle arena game called "Epic Clash," players control powerful characters to engage in intense battles against each other. Each character has  distinct abilities and attributes, including health, attack power, and defense. Your task is to implement the Character class to encapsulate these attributes, provide getter and setter methods for them, and offer different constructors to create characters with various starting conditions.
// Encapsulation: Ensure that the character's attributes (health, attackPower, and defense) are private to the Character class, accessible only through appropriate getter and setter methods, allocated memory dynamically in heap.
// Constructors: Implement three constructors: A default constructor that initializes a character with standard starting values for health, attack power, and defense. A parameterized constructor that allows specifying custom values for health, attack power, and defense. A copy constructor that creates a new Character object by copying the data from an existing Character object.

#include<iostream>
class character{
    std::string name;
    double *health, *attackpower, *defence;
    public:
    //default constructor
    character(int size = 2){
        health = new double[size];
        attackpower = new double[size];
        defence = new double[size];
        //default values
        name = "Pack-Man";
        *health = 100.0;
        *attackpower = 90;
        *defence = 95;
    }

    //parameterized constructor
    character(std::string n, double h, double ap, double d){
        name = n;
        health = new double(h);
        attackpower = new double(ap);
        defence = new double(d);
    }

    //getters
    std::string getName(){
        return name;
    }
    double *gethealth(){
        return health;
    }
    double *getap(){
        return attackpower;
    }
    double *getdefence(){
        return defence;
    }

    //setters
    void setName(std::string n){
        name = n;
    }
    void sethealth(double h){
        *health = h;
    }
    void setap(double ap){
        *attackpower = ap;
    }
    void setdefence(double d){
        *defence = d;
    }

    //copy constructor
    character(const character& ch){
        name = ch.name;
        health = new double(*ch.health);
        attackpower = new double(*ch.health);
        defence = new double(*ch.health);
    }

    void display(){
        std::cout<<std::endl<<"Name: "<<name<<std::endl;
        std::cout<<"Health: "<<*health<<"%"<<std::endl;
        std::cout<<"Attack Power: "<<*attackpower<<"%"<<std::endl;
        std::cout<<"Defence: "<<*defence<<"%"<<std::endl;
    }

};
int main(){
    std::cout<<"*********************** EPIC CLASH ***********************"<<std::endl;
    std::cout<<"Following is the list of most used game characters"<<std::endl;

    //default values 
    character ch0;
    ch0.display();

    //passed values
    character ch1("JillValentine", 96.4, 91, 85);
    ch1.display();
    
    character ch2("MetalSonic", 80.1, 90.7, 93);
    ch2.display();

    character ch3("Mario", 80, 55, 50);
    ch3.display();

    //copying the properties of first character using copy constructor
    character ch101 = ch1;
    ch1.display();

    //after modification of copied ch values
    ch101.setName("SamusAran");
    ch101.sethealth(71.9);
    ch101.setap(80);
    ch101.setdefence(66);
    ch101.display();
    
    return 0;
}
