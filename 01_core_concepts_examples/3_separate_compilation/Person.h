#ifndef PERSON_H                        // Header files (.h) require header guard preprocessor directives (ifndef, define and endif statements)
#define PERSON_H

class Person {
private:                                        
    std::string name; 
    int age;         
public:           
    Person();                           // Function declarations
    Person(const std::string &n, const int &a);                                
    std::string getName() const;    
    int getAge() const;
    void setName(const std::string &n);
    void setAge(const int &a);       
};

void print(const Person &p);                  // Header files (.h) may declare relevant non-member functions that are specific to the class (or struct)

#endif