# Lab 6

# Q1.

Create a class named Shape. All our shapes will be inherited from this class. It will
contain the following data members and functions: numberOfSides, area,
parametrized constructor, accessors and mutators for the data members.Create
classes called Rectangle, Circle and Triangle, which are all inherited from the class
Shape. Create a class called Square which is inherited from Rectangle. The derived
classes will have the following members:
Rectangle: length, width, parameterized constructor, generateArea( ) – should
place the result in area.
Circle: radius, parameterized constructor, generateArea( ) – should place the
result in area
Triangle: height, base, parameterized constructor, generateArea( ) – should place
the result in area (Area = height*base/2)
Square:
- It should have a parameterized constructor that takes one side as input. The
constructor should call the constructor for the Rectangle class with that value
as parameters.
- checkSides( ); - checks if both sides are equal. Sides are inherited from
Rectangle.
- generateArea( ) – should place the result in area
You must make use of parameterized constructors to initialize the values.

# Q2.

Create a class called Calculator that has three private member variables Num1,
Num2, Num3. In this class, you have to overload the functions for addition and
multiplication such that they take two and three inputs respectively. You also have
to make methods for subtraction and division. For example: add(1,2) and
add(1,2,3) similarly for multiply, it would be multiply(1,2) and multiply(1,2,3). You
may ask the user for input at the time of object creation. Afterwards just
demonstrate how the functions are being called.

# Q3.

Create a class called Vector which represents a two-dimensional vector with x and
y components. The class should have the following member functions:
- A constructor that initializes the x and y components of the vector.
- An overloaded operator + that adds two Vector objects and returns a new Vector
object.
- An overloaded operator - that subtracts two Vector objects and returns a new Vector
object.
- An overloaded operator * that multiplies a Vector object by a scalar value and returns a
new Vector object.
- An overloaded operator / that divides a Vector object by a scalar value and returns a
new Vector object.
- A member function magnitude that returns the magnitude of the vector.
In the main function, create two Vector objects and demonstrate the use of all the
overloaded operators.

# Q4.

Create the classes following the diagram given below. Keep the following things
in mind:
- When an object of Artist is created, the value “artist” will be set to occupation.
- When an object of Gunman is created, the value “gunman” will be set to
occupation.
- Person::Draw() will print out “A person can draw in many ways”
- Artist::Draw()willprint out “An artist can drawwith a paint brush”
- Gunman::Draw() will print out “A gunman draws a gun to shoot”
- Write a test code by creating an array of pointers of type Person. Dynamically create
objects of each class and store address in the array. After that call Draw function for each
object.
