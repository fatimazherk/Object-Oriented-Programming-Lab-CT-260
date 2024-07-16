// Implement the given UML class diagram by following the guidelines given below.
// - All the values are required to be set through parameterized constructor
// - Provide necessary accessor methods where required.
// - Create an object of the class bus by initializing it through a parameterized constructor in
// the main function and display all data members by calling the display function of class bus.

#include<iostream>
#include<string>

using namespace std;

class Vehicle {
    string typeOfCar;
    string make;
    string model;
    string colour;
    int year;
    int milesDriven;

public:
    Vehicle() {}
    Vehicle(string toc, string ma, string mo, string co, int y, int md)
        : typeOfCar(toc), make(ma), model(mo), colour(co), year(y), milesDriven(md) {}
    
    virtual void display() {
        cout << "The Type Of Car Is: " << typeOfCar << endl;
        cout << "The Model Is: " << model << endl;
        cout << "The Colour Is: " << colour << endl;
        cout << "Made In Year: " << year << endl;
        cout << "Miles Driven: " << milesDriven << endl;
    }
};

class GasVehicle : virtual public Vehicle {
    int fuelTankSize;

public:
    GasVehicle() {}
    GasVehicle(string toc, string ma, string mo, string co, int y, int md, int fts)
        : Vehicle(toc, ma, mo, co, y, md), fuelTankSize(fts) {}
    
    void display(){
        cout << "The Fuel Tank Size Is: " << fuelTankSize << endl;
    }
};

class ElectricVehicle : virtual public Vehicle {
    int energyStorage;

public:
    ElectricVehicle() {}
    ElectricVehicle(string toc, string ma, string mo, string co, int y, int md, int es)
        : Vehicle(toc, ma, mo, co, y, md), energyStorage(es) {}
    
    void display(){
        cout << "The Energy Storage Is: " << energyStorage << endl;
    }
};

class HeavyVehicle : public GasVehicle, public ElectricVehicle {
    int maxWeight;
    int numOfWheels;
    int length;

public:
    HeavyVehicle() {}
    HeavyVehicle(string toc, string ma, string mo, string co, int y, int md, int fts, int es,
                 int mw, int now, int l)
        : Vehicle(toc, ma, mo, co, y, md), GasVehicle(toc, ma, mo, co, y, md, fts),
          ElectricVehicle(toc, ma, mo, co, y, md, es), maxWeight(mw), numOfWheels(now), length(l) {}
    
    void display(){
        cout << "Maximum Weight Is: " << maxWeight << endl;
        cout << "Number Of Wheels Are: " << numOfWheels << endl;
        cout << "Length Is: " << length << endl;
    }
};

class HighPerformance : public GasVehicle {
    int horsePower;
    int speed;

public:
    HighPerformance() {}
    HighPerformance(string toc, string ma, string mo, string co, int y, int md, int fts,
                    int hp, int sp)
        : Vehicle(toc, ma, mo, co, y, md), GasVehicle(toc, ma, mo, co, y, md, fts), horsePower(hp), speed(sp) {}
    
    void display(){
        cout << "Horse Power Is: " << horsePower << endl;
        cout << "The Top Speed Is: " << speed << endl;
    }
};

class SportsCar : public HighPerformance {
    string gearbox, drivesystem;

public:
    SportsCar() {}
    SportsCar(string toc, string ma, string mo, string co, int y, int md, int fts,
              int hp, int sp, string gb, string ds)
        : Vehicle(toc, ma, mo, co, y, md),
          HighPerformance(toc, ma, mo, co, y, md, fts, hp, sp), gearbox(gb), drivesystem(ds) {}
    
    void display(){
        cout << "GearBox: " << gearbox << endl;
        cout << "Drive System: " << drivesystem << endl;
    }
};

class ConstructionTruck : public HeavyVehicle {
    string cargo;

public:
    ConstructionTruck(string toc, string ma, string mo, string co, int y, int md,
                      int fts, int es, int mw, int now, int l, string carg)
        : Vehicle(toc, ma, mo, co, y, md), HeavyVehicle(toc, ma, mo, co, y, md, fts, es, mw, now, l),
          cargo(carg) {}
    
    void display(){
        cout << "Cargo Is: " << cargo << endl;
    }
};

class Bus : public HeavyVehicle {
    int numOfSeats;

public:
    Bus(string toc, string ma, string mo, string co, int y, int md, int fts,
        int es, int mw, int now, int l, int nos)
        : Vehicle(toc, ma, mo, co, y, md), HeavyVehicle(toc, ma, mo, co, y, md, fts, es, mw, now, l),
          numOfSeats(nos) {}
    
    void display() {
        Vehicle::display();
        ElectricVehicle::display();
        HeavyVehicle::display();
        cout << "Number Of Seats: " << numOfSeats << endl;
    }
};

int main() {
    Bus bus("Bus", "Volvo", "B9R", "White", 2018, 50000, 300, 500, 20000, 8, 12, 50);
    bus.display();

    return 0;
}
