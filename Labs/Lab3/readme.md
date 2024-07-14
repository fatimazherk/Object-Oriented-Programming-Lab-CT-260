# Lab 3

# Q1

Write a C++ program to copy the value of one object to another object using copy
constructor. For example you can define a class for complex number and create its
object for performing this task. Remember that you must allocate memory
dynamically to data members.

# Q2

In a virtual battle arena game called "Epic Clash," players control powerful
characters to engage in intense battles against each other. Each character has
distinct abilities and attributes, including health, attack power, and defense. Your
task is to implement the Character class to encapsulate these attributes, provide
getter and setter methods for them, and offer different constructors to create
characters with various starting conditions.
Encapsulation: Ensure that the character's attributes (health, attackPower, and
defense) are private to the Character class, accessible only through appropriate
getter and setter methods, allocated memory dynamically in heap.
Constructors: Implement three constructors: A default constructor that initializes a
character with standard starting values for health, attack power, and defense. A
parameterized constructor that allows specifying custom values for health, attack
power, and defense. A copy constructor that creates a new Character object by
copying the data from an existing Character object.

# Q3

Create a class tollbooth. The two data items are a type int to hold the total number
of cars and a type double to hold the total amount of money collected. A
constructor initializes both these to 0. When a car passes the toll, a member
function called payingCar( ) increments the car total and adds 0.50 to the cash
total. Another member function displays the two totals. DESIGN and IMPLEMENT
this case. Make assumptions (if required) and include it in the description before
designing the solution.

# Q4

Some of the characteristics of a book are the title, author(s), publisher, ISBN, price,
and year of publication. Design a class bookType that defines the book as an ADT.
 Each object of the class bookType can hold the following information about a
book: title, up to four authors, publisher, ISBN, price, and number of copies in
stock. To keep track of the number of authors, add another member variable.
 Include the member functions to perform the various operations on objects of
type bookType.
For example, the usual operations that can be performed on the title are to
show the title, set the title, and check whether a title is the same as the actual
title of the book. Similarly, the typical operations that can be performed on the
number of copies in stock are to show the number of copies in stock, set the
number of copies in stock, update the number of copies in stock, and return the
number of copies in stock. Add similar operations for the publisher, ISBN, book
price, and authors. Add the appropriate constructors and a destructor (if one is
needed).
 Write the definitions of the member functions of the class bookType.
 Write a program that uses the class bookType and tests various operations on
the objects of the class bookType. Declare an array of 100 components of type
bookType. Some of the operations that you should perform are to search for a
book by its title, search by ISBN, and update the number of copies of a book.
