#Lab 9

# Q1.

Define an abstract class ArrayMultiplier with a pure virtual function calculate().
Then, create two derived classes: ArrayMultiplier1D for 1D array multiplication
and ArrayMultiplier2D for 2D array multiplication. In the calculate() function of
each derived class, perform the multiplication operation based on the specific array
dimension.


# Q2.

Write a program to calculate final bill after discount. “ImtiazStore” gives 7 percent
discount on total_bill while “BinHashimStore” gives 5 percent discount on total_bill.
You have to initialize value of total_bill through a constructor and then calculate
final bill after discount for both stores using the concept of abstract class and
virtual functions.


# Q3.

You are tasked with developing a car rental system for a company. The system
should allow customers to rent cars based on availability and manage the
inventory of cars. To implement this system, you decide to use object-oriented
programming and apply the concept of abstraction.
- Abstract Base Class: Vehicle - You create an abstract base class called Vehicle,
which represents a generic vehicle in the rental system. The Vehicle class
contains common attributes like carId, brand, and model. It also defines pure
virtual functions such as isAvailable( ) and rent( ), which represent the
availability of the vehicle and the process of renting it. Since these functions are
pure virtual, they have no implementation in the base class.
- Derived Class: Car - You derive a Car class from the Vehicle class, representing a
car in the rental system. The Car class provides concrete implementations for
the pure virtual functions isAvailable( ) and rent( ). In the isAvailable( )
function, you check the availability of the car by querying its specific availability
attribute. In the rent( ) function, you update the availability status of the car
after it has been rented.
- Rental System Class: RentalSystem - You create a RentalSystem class
responsible for managing the rental operations. This class interacts with the
Vehicle objects through the base class interface. It has functions like
rentVehicle( ) and returnVehicle( ), which take a Vehicle object as a parameter
and call the corresponding isAvailable( ) and rent( ) functions. The
RentalSystem class can handle rental operations for any type of Vehicle, as long
as it inherits from the Vehicle base class.
- Customer Class: Customer - You create a Customer class to represent the
customers of the rental system. The Customer class has methods like
rentVehicle( ) and returnVehicle( ), which take a Vehicle object as a parameter.
These methods interact with the RentalSystem class to perform the rental
operations without knowing the specific type of the vehicle. This allows for
flexibility and extensibility if new types of vehicles are added to the system in
the future.
By utilizing pure virtual functions, you create an abstraction that defines the
common interface and behavior for all vehicles in the system. The derived classes
provide concrete implementations specific to their type of vehicle. The
RentalSystem class and the Customer class can interact with vehicles through the
abstract base class interface, allowing for polymorphism and decoupling from the
specific implementations. This abstraction simplifies the codebase, promotes
modularity, and allows for easy addition of new vehicle types without modifying
existing classes. Write a test program by defining an array of pointers of the Base
class and dynamic memory for allocating memory to objects created.


# Q4.

Suppose you have to send an encrypted message over the network. There are two
techniques that you can use to encrypt your message. Suppose your message is
“Hello”. It will be encrypted as follows according to those 2 techniques.
Technique 1:
This technique simply
converts alphabets into
their respective ASCII
codes.

H=72 E=69 L=76 L=76
O=79

Now the string will
become, 7269767679

Technique 2:
This technique simply
converts alphabets into
their respective ASCII
code and then adding 2.

H=72+2 E=69+2 L=76+2
L=76+2 O=79+2..............

Now the string will
become, 7471787881

Make use of an abstract class EncryptionTecnique and pure virtual function
encrypt and implement this scenario. Make derived classes EncryptionTecnique1
and EncryptionTecnique2. Make a test program that takes an input string and
encrypts it using both encryption techniques calling their respective encrypt
