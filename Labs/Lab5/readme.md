# Lab 5
Introduction To Inheritance

# Q1.

Create a base class with the following members:
- Private integer privateInt
- Protected integer protectedInt
- Public integer publicInt
Create getters and setters for each of these variables. Derive 3 classes from the base
class with the three types of inheritance based on visibility(public, protected, private).
You can name these classes as publicChild, privateChild and protectedChild. After
doing this, try and figure out which member you can access publicly or through getters
and setters. Then print out the way that you were able to access them. For example, if
you did private inheritance, you could not be able to access the members in the child
classes, and would need to use their getters or setters.

# Q2.

Create a class Teacher with the following protected attributes: Name, Age, and Institute.
Derive three classes from it that has the following names: HumanitiesTeacher,
ScienceTeacher, MathsTeacher. These classes should have the following members:
- Department (this should have the value “science”, “maths” or “humanities”)
- Course Name
- Designation (for example, lecturer, professor, etc)
Create proper accessors and mutators for the attributes. Create objects for each of the
classes and display the values. You can ask the user to input the values.

# Q3.

A defense organization is making a hierarchy of different types of weapons. They have
classified the nuclear bomb as follows: Weapons → Hot Weapons → Bombs →
Nuclear Bombs. Create classes and apply inheritance as necessary for the above
hierarchy. Each class should have a method called: “xxxxxDescription”, where xxxx
would be class name. The method should print out what that weapon does. Eg. Hot
weapons uses gunpowder, or explode. Bombs blow up. Nuclear bombs blow up, and
use nuclear fission and fusion.

# Q4.

A bakery is making a program to calculate the bills for each of their customers. The
items in the bakery are categorized as follows:
Item:
- Name
- Quantity
Baked Goods: (derived from item)
- Discount = 10%
Cakes: (derived from baked goods)
- Price = 600
Bread: (derived from baked goods)
- Price = 200
Drinks: (derived from item)
- Discount = 5%
- Price = 100
In your main function, as a bakery personnel,input the items and their quantities and calculate the bill accordingly.
