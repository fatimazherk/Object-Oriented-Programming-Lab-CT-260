// You are tasked with developing a car rental system for a company. The system should allow customers to rent cars based on availability and manage the inventory of cars. 
// To implement this system, you decide to use object-oriented programming and apply the concept of abstraction.
// Abstract Base Class: Vehicle - You create an abstract base class called Vehicle, which represents a generic vehicle in the rental system
//. The Vehicle class contains common attributes like carId, brand, and model. It also defines pure virtual functions such as isAvailable( ) 
//and rent( ), which represent the availability of the vehicle and the process of renting it. Since these functions are pure virtual, they have no implementation in the base class.
// Derived Class: Car - You derive a Car class from the Vehicle class, representing a car in the rental system. The Car class provides concrete implementations
//for the pure virtual functions isAvailable( ) and rent( ). In the isAvailable( ) function, you check the availability of the car by querying its specific availability
//attribute. In the rent( ) function, you update the availability status of the car after it has been rented.
// Rental System Class: RentalSystem - You create a RentalSystem class responsible for managing the rental operations. This class interacts with the Vehicle objects through
//the base class interface. It has functions like rentVehicle( ) and returnVehicle( ), which take a Vehicle object as a parameter and call the corresponding isAvailable( ) and rent( ) 
//functions. The RentalSystem class can handle rental operations for any type of Vehicle, as long as it inherits from the Vehicle base class.
// Customer Class: Customer - You create a Customer class to represent the customers of the rental system. The Customer class has methods like rentVehicle( ) and returnVehicle( ),
//which take a Vehicle object as a parameter. These methods interact with the RentalSystem class to perform the rental operations without knowing the specific type of the vehicle.
//This allows for flexibility and extensibility if new types of vehicles are added to the system in the future. By utilizing pure virtual functions, you create an abstraction that defines the 
//common interface and behavior for all vehicles in the system. The derived classes provide concrete implementations specific to their type of vehicle. The RentalSystem class and the Customer
//class can interact with vehicles through the abstract base class interface, allowing for polymorphism and decoupling from the specific implementations. This abstraction simplifies the codebase,
//promotes modularity, and allows for easy addition of new vehicle types without modifying existing classes. Write a test program by defining an array of pointers of the Base class and dynamic memory 
//for allocating memory to objects created.

#include <iostream>
#include <string>
#include <vector>
using namespace std;


// Abstract base class Vehicle
class Vehicle {
protected:
    string carId;
    string brand;
    string model;
    bool available;


public:
    Vehicle(const string& id, const string& br, const string& mo)
        : carId(id), brand(br), model(mo), available(true) {}


    virtual bool isAvailable() const = 0;
    virtual void rent() = 0;
    virtual void returnVehicle() = 0;


    virtual ~Vehicle() {}
};


// Derived class Car
class Car : public Vehicle {
public:
    Car(const string& id, const string& br, const string& mo)
        : Vehicle(id, br, mo) {}


    bool isAvailable() const override {
        return available;
    }


    void rent() override {
        if (available) {
            available = false;
            cout << "Car " << carId << " has been rented." << endl;
        } else {
            cout << "Car " << carId << " is already rented." << endl;
        }
    }


    void returnVehicle() override {
        if (!available) {
            available = true;
            cout << "Car " << carId << " has been returned." << endl;
        } else {
            cout << "Car " << carId << " is already available." << endl;
        }
    }
};


// RentalSystem class
class RentalSystem {
private:
    vector<Vehicle*> vehicles;


public:
    void addVehicle(Vehicle* vehicle) {
        vehicles.push_back(vehicle);
    }


    void rentVehicle(Vehicle* vehicle) {
        if (vehicle->isAvailable()) {
            vehicle->rent();
        } else {
            cout << "Vehicle is not available for rent." << endl;
        }
    }


    void returnVehicle(Vehicle* vehicle) {
        vehicle->returnVehicle();
    }
};


// Customer class
class Customer {
public:
    void rentVehicle(RentalSystem& system, Vehicle* vehicle) {
        system.rentVehicle(vehicle);
    }


    void returnVehicle(RentalSystem& system, Vehicle* vehicle) {
        system.returnVehicle(vehicle);
    }
};


int main() {
    // Create RentalSystem instance
    RentalSystem rentalSystem;


    // Create an array of pointers to Vehicle
    Vehicle* vehicles[] = {
        new Car("1", "Toyota", "Camry"),
        new Car("2", "Honda", "Civic"),
        new Car("3", "Ford", "Mustang")
    };


    // Add vehicles to the rental system
    for (Vehicle* vehicle : vehicles) {
        rentalSystem.addVehicle(vehicle);
    }


    // Create a customer
    Customer customer;


    // Customer rents a car
    customer.rentVehicle(rentalSystem, vehicles[0]);
    customer.rentVehicle(rentalSystem, vehicles[1]);


    // Customer tries to rent an already rented car
    customer.rentVehicle(rentalSystem, vehicles[0]);


    // Customer returns a car
    customer.returnVehicle(rentalSystem, vehicles[0]);


    // Customer rents the car again after returning
    customer.rentVehicle(rentalSystem, vehicles[0]);


    // Cleanup dynamically allocated memory
    for (Vehicle* vehicle : vehicles) {
        delete vehicle;
    }


    return 0;
}


