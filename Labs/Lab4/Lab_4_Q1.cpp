// Create a class ‘Employee’ having two data members ‘EmployeeName’(char*) and
// ‘EmployeeId’ (int). Keep both data members private. Create three initialized
// objects ‘Employee1’, ‘Employee2’ and ‘Employee3’ of type ‘Employee’ in such a way
// that the employee name for each employee can be changed when required but the
// employee Id for each employee must be initialized only once and should remain
// same always. Use member initializer list, accessors/getters and mutators/setters
// for appropriate data members. The result must be displayed by calling the
// accessors.

#include <iostream>
#include <cstring> // For strcpy and strlen

using namespace std;

class Employee {
    char* employeeName;
    const int employeeId; // const ensures the ID can't be changed

public:
    // Constructor with initializer list
    Employee(const char* en, int ei) : employeeId(ei) {
        employeeName = new char[strlen(en) + 1]; // Allocate memory with the /0 terminator 
        strcpy(employeeName, en); // Copy the name
    }

    // Mutator/Setter for employeeName
    void setEmployeeName(const char* en) {
        delete[] employeeName; // Free the old memory
        employeeName = new char[strlen(en) + 1]; // Allocate new memory
        strcpy(employeeName, en); // Copy the name
    }

    // Accessor/Getter for employeeName
    const char* getEmployeeName(){
        return employeeName;
    }

    // Accessor/Getter for employeeId
    int getEmployeeId() const {
        return employeeId;
    }

     // Destructor to free allocated memory
    ~Employee() {
        delete[] employeeName;
    }
};

int main() {
    // Creating three initialized objects
    Employee e1("Armaan", 365);
    Employee e2("Chandramukhi", 223);
    Employee e3("Devdas", 90);

    // Display initial values
    cout << "Employee Name: " << e1.getEmployeeName() << " Employee Id: " << e1.getEmployeeId() << endl;
    cout << "Employee Name: " << e2.getEmployeeName() << " Employee Id: " << e2.getEmployeeId() << endl;
    cout << "Employee Name: " << e3.getEmployeeName() << " Employee Id: " << e3.getEmployeeId() << endl;

    // Change employee names
    e1.setEmployeeName("Farzan");
    e2.setEmployeeName("Madhavi");
    e3.setEmployeeName("Parvati");

    // Display updated values
    cout << "Employee Name: " << e1.getEmployeeName() << " Employee Id: " << e1.getEmployeeId() << endl;
    cout << "Employee Name: " << e2.getEmployeeName() << " Employee Id: " << e2.getEmployeeId() << endl;
    cout << "Employee Name: " << e3.getEmployeeName() << " Employee Id: " << e3.getEmployeeId() << endl;

    return 0;
}
