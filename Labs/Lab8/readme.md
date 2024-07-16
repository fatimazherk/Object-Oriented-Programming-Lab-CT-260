# Lab 8

Multiple Inheritance

# Q1.

Implement the given UML class diagram by following the guidelines given below.
- All the values are required to be set through parameterized constructor
- Provide necessary accessor methods where required.
- Create an object of the class bus by initializing it through a parameterized constructor in
the main function and display all data members by calling the display function of class bus.

![Diagram](https://github.com/fatimazherk/Object-Oriented-Programming-Lab-CT-260/blob/main/QuestionDiagrams/Screenshot%202024-07-16%20012213.png?raw=true)

# Q2.

Suppose you are designing a game engine for a new video game. The game engine needs to
support different types of characters, such as warriors, mages, and archers. Each character
type has specific attributes and abilities. The game also includes non-playable characters
(NPCs) that have their own unique behaviors. Additionally, there are special characters called
"Mighty" that possess both the abilities of a warrior and a mage. To design the character
classes and utilize multiple inheritance in this scenario, you can create a class hierarchy with
appropriate base classes and derived classes. Here's a possible implementation:
- Create a base class called Character that contains common attributes and behaviors for all
characters, such as name, level, and health.
- Create derived classes for specific character types: a. Warrior class, derived from Character,
which includes attributes and abilities specific to warriors, such as strength, melee weapons proficiency, and a "slash" ability. b. Mage class, derived from Character, which
includes attributes and abilities specific to mages, such as intelligence, spell casting
proficiency, and a "fireball" ability. c. Archer class, derived from Character, which includes
attributes and abilities specific to archers, such as dexterity, ranged weapons proficiency,
and a "rapid shot" ability.
- Create a class called NPC (Non-Playable Character), derived from Character, which includes
additional behaviors specific to non-playable characters, such as predefined movement
patterns or scripted dialogues.
- Create a class called Mighty, derived from both Warrior and Mage, to represent special
Mighty characters. This class inherits attributes and abilities from both Warrior and Mage,
allowing the Mighty to possess the combined traits of a warrior and a mage. For example, a
Mighty might have high strength and melee prowess like a warrior, as well as the ability to
cast powerful spells like a mage.
By using multiple inheritance, you can design a class hierarchy that allows for the sharing of
common attributes and behaviors while also enabling specific character types to inherit and
extend upon those features. The Mighty class demonstrates the ability to combine attributes
and abilities from multiple base classes, showcasing the flexibility of multiple inheritance in this
scenario.

# Q3.

Implement the given UML class diagram by following the guidelines given below.
- The interest Account class adds interest for every deposit, assuming a default of 30%.
- The charging account class charges a default fee of Rs. 25 for every withdrawal.
- Transfer method of ACI class tasks two parameters: amount to be transferred and object of
class in which we have to transfer that amount.
- Make parameterized constructor and default constructor to take user input for all data
members.
- Make a driver program to test all functionalities.
![Diagram](https://github.com/fatimazherk/Object-Oriented-Programming-Lab-CT-260/blob/main/QuestionDiagrams/Screenshot%202024-07-16%20012816.png?raw=true)

# Q4. 

You are developing a software application for a library that manages various types of media,
including books, magazines, and DVDs. Each type of media has specific attributes and
functionalities, such as the author for books, issue number for magazines, and director for
DVDs. Additionally, there are certain operations that are common to all types of media, such as
borrowing, returning, and displaying information. Design a class hierarchy using multiple
inheritance to handle the different types of media and their functionalities.
- Create a base class called Media to represent the common attributes and functionalities
shared by all types of media. This class will include operations such as borrowing,
returning, and displaying information.
- Create individual classes for each type of media, such as Book, Magazine, and DVD. Each
class will inherit from both the Media class and their respective specific attribute classes.
- Create individual classes for each type of media, such as Book, Magazine, and DVD. Each
class will inherit from both the Media class and their respective specific attribute classes.
- Create individual classes for each type of media, such as Book, Magazine, and DVD. Each
class will inherit from both the Media class and their respective specific attribute classes.
With this class hierarchy, the library application can handle different types of media such as
books, magazines, and DVDs. The common functionalities like borrowing, returning, and
displaying information will be inherited from the Media class, while the specific attributes and
functionalities for each media type will be defined in their respective classes.
