// A defense organization is making a hierarchy of different types of weapons. They have
// classified the nuclear bomb as follows: Weapons → Hot Weapons → Bombs →
// Nuclear Bombs. Create classes and apply inheritance as necessary for the above
// hierarchy. Each class should have a method called: “xxxxxDescription”, where xxxx
// would be class name. The method should print out what that weapon does. Eg. Hot
// weapons uses gunpowder, or explode. Bombs blow up. Nuclear bombs blow up, and
// use nuclear fission and fusion.

#include<iostream>
using namespace std;
class weapons{
    protected:
    string name, mechanism;
    double velocity, weight;
    public:
    weapons(){}
    weapons(string n, string m, double v, double w):name(n), mechanism(m),  velocity(v), weight(w) {
    }


    string getname(){
        return name;
    }
    string getmechanism(){
        return mechanism;
    }
    double getvelocity(){
        return velocity;
    }
    double getweight(){
        return weight;
    }
    
    ~weapons(){}
};


class HotWeapons: public weapons{
    private:
    string effect, usage; 
    int range;
    public:
    HotWeapons(string e = "Intense Fire ", string u = "Destruction, smoke screens, area denial tactics", int r = 500,
                string n ="Incendiary Bomb", string m = "Ignition", double v = 500, double w = 350){
        effect = e;
        usage = u;
        range = r;
        name = n;
        mechanism = m;
        velocity = v;
        weight = w;
    }
    void HotWeaponsDescription(){
        cout<<"Name: "<<name<<endl;
        cout<<"Mechanism: "<<mechanism<<endl;
        cout<<"Velocity: "<<velocity<<" miles/hour"<<endl;
        cout<<"Weight: "<<weight<<" pounds"<<endl;
        cout<<"Range: "<<range<<" meters"<<endl;
        cout<<"Effect: "<<effect<<endl;
        cout<<"Usage: "<<usage<<endl;
        cout<<"********************************"<<endl;
    }
};


class Bombs: public weapons{
    private:
    string numberofbomblets, applications;
    public:
    Bombs(string n = "CBU-87", string m = "Disperaion", double w = 950, double v = 600, string nob = "202 BLU-97/B",
        string app = "Millitary Operations"){
        name = n;
        mechanism = m;
        velocity = v;
        weight = w;
        numberofbomblets = nob;
        applications = app;
    }
    void BombsDescription(){
        cout<<"Name: "<<name<<endl;
        cout<<"Mechanism: "<<mechanism<<endl;
        cout<<"Velocity: "<<velocity<<" miles/hour"<<endl;
        cout<<"Weight: "<<weight<<" pounds"<<endl;
        cout<<"Number of Bomblets: "<<numberofbomblets<<endl;
        cout<<"Applications: "<<applications<<endl;
        cout<<"********************************"<<endl;
    }


};


class NuclearBombs: public weapons{
    private:
    string damage;
    int range;
    public:
    NuclearBombs(string n = "B61 Mod 12", string m = "Nuclear fusion and fission", double w = 700, double v = 600,
            string d = "Immediate blast destruction with Widespread fires and Radioactive fallouts", int r = 9){
        name = n;
        mechanism = m;
        velocity = v;
        weight = w;
        damage = d;
        range = r;
    }
    void NuclaerBombsDescription(){
        cout<<"Name: "<<name<<endl;
        cout<<"Mechanism: "<<mechanism<<endl;
        cout<<"Velocity: "<<velocity<<" miles/hour"<<endl;
        cout<<"Weight: "<<weight<<" pounds"<<endl;
        cout<<"Range: "<<range<<" miles"<<endl;
        cout<<"Damage: "<<damage<<endl;
    }


};
int main(){
    HotWeapons ob;
    ob.HotWeaponsDescription();
    Bombs ob1;
    ob1.BombsDescription();
    NuclearBombs ob2;
    ob2.NuclaerBombsDescription();
    
    return 0;
}
