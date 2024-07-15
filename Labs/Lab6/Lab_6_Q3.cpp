// Create a class called Vector which represents a two-dimensional vector with x and y components.
// The class should have the following member functions:
// - A constructor that initializes the x and y components of the vector.
// - An overloaded operator + that adds two Vector objects and returns a new Vector object.
// - An overloaded operator - that subtracts two Vector objects and returns a new Vector object. An
// overloaded operator * that multiplies a Vector object by a scalar value and returns a new Vector
// object.
// - An overloaded operator / that divides a Vector object by a scalar value and returns a new Vector
// object.
// - A member function magnitude that returns the magnitude of the vector.
// In the main function, create two Vector objects and demonstrate the use of all the overloaded
// operators.
#include<iostream> 
using namespace std; 
class Vector{ 
double x, y; 
public: 
Vector(double xcomp = 0, double ycomp = 0): x(xcomp), y(ycomp){} double getx(){ 
return x; 
} 
double gety(){ 
return y; 
} 
Vector operator+(const Vector& obj){ 
Vector temp; 
temp.x = x + obj.x; 
temp.y = y + obj.y; 
return temp; 
} 
Vector operator-(const Vector& obj){ 
Vector temp; 
temp.x = x - obj.x; 
temp.y = y - obj.y; 
return temp; 
} 
Vector operator*(const Vector& obj){ 
Vector temp; 
temp.x = x * obj.x;
temp.y = y * obj.y; 
return temp; 
} 
Vector operator/(const Vector& obj){ 
Vector temp; 
if(obj.x == 0 || obj.y == 0){ 
cerr<<"Error in division with 0"<<endl; exit(1); 
} 
else{ 
temp.x = x / obj.x; 
temp.y = y / obj.y; 
return temp; 
} 
} 
void display(){ 
cout<<"X-component: "<<x<<endl; 
cout<<"Y-component: "<<y<<endl; 
} 
}; 
int main(){ 
Vector v1(2, 4); 
Vector v2(3, 6); 
Vector v3 = v1 +v2; 
cout<<"ADDITION"<<endl; 
v3.display(); 
v3 = v1 - v2; 
cout<<"SUBTRACTION"<<endl; 
v3.display(); 
v3 = v1 * v2; 
cout<<"MULTIPLICATION"<<endl; 
v3.display(); 
v3 = v1 / v2; 
cout<<"DIVISION"<<endl; 
v3.display(); 
return 0; 
}
