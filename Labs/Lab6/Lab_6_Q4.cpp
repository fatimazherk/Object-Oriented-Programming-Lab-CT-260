// // the classes following the diagram given below. Keep the following things in mind:
//  - When an object of Artist is created, the value “artist” will be set to occupation.
//   - When an object of Gunman is created, the value “gunman” will be set to occupation. 
//   - Person::Draw() will print out “A person can draw in many ways” 
// // - Artist::Draw() will print out “An artist can draw with a paint brush” 
// // - Gunman::Draw() will print out “A gunman draws a gun to shoot” 
// // - Write a test code by creating an array of pointers of type Person. Dynamically create
//  objects of each  class and store address in the array. After that call Draw function for each object.

#include<iostream> 
using namespace std; 
class Person{ 
string name = "Sarah"; 
string occupation; 
public: 
Person(string occup = " "){ 
occupation = occup; 
} 
virtual void Draw(){ 
cout<<"A person can draw in many ways."<<endl; } 
}; 
class Artist : public Person{ 
public: 
Artist(): Person("Artist"){} 
void Draw(){ 
cout<<"An artist can draw with a paint brush."<<endl; } 
}; 
class Gunman : public Person{ 
public: 
Gunman(): Person("Gunman"){} 
void Draw(){ 
cout<<"A Gunman draws a gun to shoot."<<endl; 
} 
}; 
int main(){ 
int size = 3; 
Person *per[size]; 
per[0] = new Person("Citizen"); 
per[1] = new Artist(); 
per[2] = new Gunman(); 
for(int i = 0; i < size; i++){ 
per[i]->Draw(); 
} 
for(int i = 0; i < size; i++){ 
delete per[i]; 
}
return 0; 
} 