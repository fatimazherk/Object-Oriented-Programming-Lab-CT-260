// Suppose you are designing a game engine for a new video game. The game engine needs to
// support different types of characters, such as warriors, mages, and archers. Each character
// type has specific attributes and abilities. The game also includes non-playable characters
// (NPCs) that have their own unique behaviors. Additionally, there are special characters called
// "Mighty" that possess both the abilities of a warrior and a mage. To design the character
// classes and utilize multiple inheritance in this scenario, you can create a class hierarchy with
// appropriate base classes and derived classes. Here's a possible implementation:
// - Create a base class called Character that contains common attributes and behaviors for all
// characters, such as name, level, and health.
// - Create derived classes for specific character types: a. Warrior class, derived from Character,
// which includes attributes and abilities specific to warriors, such as strength, weapons proficiency, and a "slash" ability. b. Mage class, derived from Character, which
// includes attributes and abilities specific to mages, such as intelligence, spell casting
// proficiency, and a "fireball" ability. c. Archer class, derived from Character, which includes
// attributes and abilities specific to archers, such as dexterity, ranged weapons proficiency,
// and a "rapid shot" ability.
// - Create a class called NPC (Non-Playable Character), derived from Character, which includes
// additional behaviors specific to non-playable characters, such as predefined movement
// patterns or scripted dialogues.
// - Create a class called Mighty, derived from both Warrior and Mage, to represent special
// Mighty characters. This class inherits attributes and abilities from both Warrior and Mage,
// allowing the Mighty to possess the combined traits of a warrior and a mage. For example, a
// Mighty might have high strength and melee prowess like a warrior, as well as the ability to
// cast powerful spells like a mage.
// By using multiple inheritance, you can design a class hierarchy that allows for the sharing of
// common attributes and behaviors while also enabling specific character types to inherit and
// extend upon those features. The Mighty class demonstrates the ability to combine attributes
// and abilities from multiple base classes, showcasing the flexibility of multiple inheritance in this
// scenario.

#include <iostream>
#include <string>
using namespace std;


class Character {
protected:
    string name;
    int level;
    int health;
public:
    Character(string n, int lvl, int hp) : name(n), level(lvl), health(hp) {}


    virtual void display() const {
        cout << "Name: " << name << endl;
        cout << "Level: " << level << endl;
        cout << "Health: " << health << endl;
    }


    virtual void ability() const = 0;
};


class Warrior : virtual public Character {
protected:
    int strength;
public:
    Warrior(string n, int lvl, int hp, int str) : Character(n, lvl, hp), strength(str) {}


    void display() const override {
        Character::display();
        cout << "Strength: " << strength << endl;
    }


    void ability() const override {
        cout << "Ability: Slash" << endl;
    }
};
class Mage : virtual public Character {
protected:
    int intelligence;
public:
    Mage(string n, int lvl, int hp, int intl) : Character(n, lvl, hp), intelligence(intl) {}


    void display() const override {
        Character::display();
        cout << "Intelligence: " << intelligence << endl;
    }


    void ability() const override {
        cout << "Ability: Fireball" << endl;
    }
};
class Archer : public Character {
protected:
    int dexterity;
public:
    Archer(string n, int lvl, int hp, int dex) : Character(n, lvl, hp), dexterity(dex) {}


    void display() const override {
        Character::display();
        cout << "Dexterity: " << dexterity << endl;
    }


    void ability() const override {
        cout << "Ability: Rapid Shot" << endl;
    }
};
class NPC : public Character {
public:
    NPC(string n, int lvl, int hp) : Character(n, lvl, hp) {}


    void display() const override {
        Character::display();
        cout << "Behavior: NPC-specific behavior" << endl;
    }


    void ability() const override {
        cout << "Ability: Scripted Dialogue" << endl;
    }
};
class Mighty : public Warrior, public Mage {
public:
    Mighty(string n, int lvl, int hp, int str, int intl)
        : Character(n, lvl, hp), Warrior(n, lvl, hp, str), Mage(n, lvl, hp, intl) {}


    void display() const override {
        Character::display();
        cout << "Strength: " << strength << endl;
        cout << "Intelligence: " << intelligence << endl;
    }


    void ability() const override {
        cout << "Abilities: Slash and Fireball" << endl;
    }
};


int main() {
    Warrior w("Warrior1", 10, 100, 80);
    Mage m("Mage1", 10, 100, 90);
    Archer a("Archer1", 10, 100, 85);
    NPC npc("NPC1", 5, 50);
    Mighty mighty("Mighty1", 15, 150, 85, 95);


    cout << "Warrior Details:" << endl;
    w.display();
    w.ability();
    cout << endl;


    cout << "Mage Details:" << endl;
    m.display();
    m.ability();
    cout << endl;


    cout << "Archer Details:" << endl;
    a.display();
    a.ability();
    cout << endl;


    cout << "NPC Details:" << endl;
    npc.display();
    npc.ability();
    cout << endl;


    cout << "Mighty Details:" << endl;
    mighty.display();
    mighty.ability();
    cout << endl;


    return 0;
}
