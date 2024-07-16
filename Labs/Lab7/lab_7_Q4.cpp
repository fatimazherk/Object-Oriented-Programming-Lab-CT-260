#include <iostream>
#include <string>

using namespace std;

class Employee {
    string name;
    string id;
    string designation;
    int salary;

public:
    Employee() {}
    Employee(string n, string i, string d, int s) : name(n), id(i), designation(d), salary(s) {}

    // Display function to show employee details
    void display() const {
        cout << "Name: " << name << ", ID: " << id << ", Designation: " << designation << ", Salary: " << salary << endl;
    }

    // Declaring friend functions
    friend void updateSalary(Employee &emp, int newSalary);
    friend void applyIncrement(Employee &emp, float incrementFactor);
};

// Friend function to update the salary of an Employee
void updateSalary(Employee &emp, int newSalary) {
    emp.salary = newSalary;
}

// Friend function to apply an increment factor to the salary of an Employee
void applyIncrement(Employee &emp, float incrementFactor) {
    emp.salary = static_cast<int>(emp.salary * incrementFactor);
}

int main() {
    // Creating an Employee object
    Employee e1("Fatima", "ct23024", "Engineer", 25000);
    
    // Displaying initial details
    e1.display();
    
    // Updating salary using the friend function
    updateSalary(e1, 30000);
    
    // Displaying updated details
    e1.display();

    // Applying increment using the friend function
    applyIncrement(e1, 1.2f);  // Applying a 20% increment
    
    // Displaying final details after increment
    e1.display();

    return 0;
}
