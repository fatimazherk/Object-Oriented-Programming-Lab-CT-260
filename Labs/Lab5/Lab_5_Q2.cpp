// Create a class Teacher with the following protected attributes: Name, Age, and Institute.
// Derive three classes from it that has the following names: HumanitiesTeacher,
// ScienceTeacher, MathsTeacher. These classes should have the following members:
// - Department (this should have the value “science”, “maths” or “humanities”)
// - Course Name
// - Designation (for example, lecturer, professor, etc)
// Create proper accessors and mutators for the attributes. Create objects for each of the
// classes and display the values. You can ask the user to input the values.

#include<iostream>
using namespace std;


// Base class
class Teacher{
protected:
    string name;
    string institute;
    int age;
public:
    // Default constructor
    Teacher(): name(" "), institute(" "), age(0) {}


    // Constructor with initialization list 
    Teacher(string nm, string in, int ag): name(nm), institute(in), age(ag) {}


    // Getters
    string getName() { return name; }
    string getInstitute() { return institute; }
    int getAge() { return age; }


    // Setters
    void setName(string nm) { name = nm; }
    void setInstitute(string in) { institute = in; }
    void setAge(int ag) { age = ag; }


    // Destructor
    ~Teacher() {}
};


// Derived class for humanities
class humanitiesTeacher: public Teacher{
private:
    string department, coursename, designation;
public:
    // Constructor with initializer list
    humanitiesTeacher(const string depart = "Humanities", string cn = " ", string desig = " ") :
        Teacher(), department(depart), coursename(cn), designation(desig) {}


    // Getters
    string getCourseName() { return coursename; }
    string getDesignation() { return designation; }


    // Setters
    void setCourseName(string cn) { coursename = cn; }
    void setDesignation(string desig) { designation = desig; }


// Input method
void getInput(){
    cout << "Enter The Name Of Humanities Teacher: ";
    getline(cin, name);
    cout << "Enter The Name Of Institute: ";
    getline(cin, institute);
    cout << "Enter Age: ";
    cin >> age;
    cin.ignore(); // Clear the newline character from the buffer
    cout << "Enter Course Name: ";
    getline(cin, coursename);
    cout << "Enter Designation: ";
    getline(cin, designation);
    cout << endl;
}



    // Display method
    void display(){
        cout << "Name: " << getName() << endl;
        cout << "Institute: " << getInstitute() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Department: " << department << endl;
        cout << "Course Name: " << coursename << endl;
        cout << "Designation: " << designation << endl << endl;
    }
};


// Derived class for science
class scienceTeacher: public Teacher{
private:
    string department, coursename, designation;
public:
    // Constructor with initializer list
    scienceTeacher(const string depart = "Science", string cn = " ", string desig = " ") :
        Teacher(), department(depart), coursename(cn), designation(desig) {}


    // Getters
    string getCourseName() { return coursename; }
    string getDesignation() { return designation; }


    // Setters
    void setCourseName(string cn) { coursename = cn; }
    void setDesignation(string desig) { designation = desig; }


// Input method
void getInput(){
    cout << "Enter The Name Of Science Teacher: ";
    getline(cin, name);
    cout << "Enter The Name Of Institute: ";
    getline(cin, institute);
    cout << "Enter Age: ";
    cin >> age;
    cin.ignore(); // Clear the newline character from the buffer
    cout << "Enter Course Name: ";
    getline(cin, coursename);
    cout << "Enter Designation: ";
    getline(cin, designation);
    cout << endl;
}


    // Display method
    void display(){
        cout << "Name: " << getName() << endl;
        cout << "Institute: " << getInstitute() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Department: " << department << endl;
        cout << "Course Name: " << coursename << endl;
        cout << "Designation: " << designation << endl << endl;
    }
};


// Derived class for maths teacher 
class mathsTeacher: public Teacher{
private:
    string department, coursename, designation;
public:
    // Constructor with initializer list
    mathsTeacher(const string depart = "Maths", string cn = " ", string desig = " ") :
        Teacher(), department(depart), coursename(cn), designation(desig) {}


    // Getters
    string getCourseName() { return coursename; }
    string getDesignation() { return designation; }


    // Setters
    void setCourseName(string cn) { coursename = cn; }
    void setDesignation(string desig) { designation = desig; }
// Input method
void getInput(){
    cout << "Enter The Name Of Maths Teacher: ";
    getline(cin, name);
    cout << "Enter The Name Of Institute: ";
    getline(cin, institute);
    cout << "Enter Age: ";
    cin >> age;
    cin.ignore(); // Clear the newline character from the buffer
    cout << "Enter Course Name: ";
    getline(cin, coursename);
    cout << "Enter Designation: ";
    getline(cin, designation);
    cout << endl;
}


    // Display method
    void display(){
        cout << "Name: " << getName() << endl;
        cout << "Institute: " << getInstitute() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Department: " << department << endl;
        cout << "Course Name: " << coursename << endl;
        cout << "Designation: " << designation << endl << endl;
    }
};


int main(){
    humanitiesTeacher h1;
    h1.getInput();
    h1.display();


    scienceTeacher s1;
    s1.getInput();
    s1.display();


    mathsTeacher m1;
    m1.getInput();
    m1.display();


    return 0;
}


