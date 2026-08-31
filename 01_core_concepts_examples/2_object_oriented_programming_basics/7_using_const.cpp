#include <iostream>

class Person {
private:                                        
    std::string name;                                           // Rule 1: Encapsulate member variables
    int age;         
public:           
    Person(): name("noname"), age(0) {}                         // Rule 2: Use member initialization syntax for constructors
    Person(const std::string &n, int a): name(n), age(a) {}     // Rule 4: Use const reference parameters to read objects                        
    int getAge() const { return age; }                          // Rule 3: Accesssors should be Const Member functions (read only)
    const std::string& getName() const { return name; }         // Rule 5: Accesssors may return by const reference for values to remain read only
    void setName(const std::string &n) { name = n; }            // Rule 4: Use const reference parameters to read objects
    void setAge(int a) { age = a; }     
};

void print(const Person &p)                                     // Rule 4: Use const reference parameters to read parameter objects
{
    std::cout << p.getName() << " " << p.getAge() << "\n";  
}
void birthday(Person &p)                                        // Rule 4: Use regular reference parameters to modify parameter objects
{
    p.setAge( p.getAge()+1 );
}

int main() {
    std::cout << std::endl;

    Person p1;                                                          // Default constructor
    p1.setName("John");                                                 // Mutators
    p1.setAge(32);
    std::cout << p1.getName() << " " << p1.getAge() << "\n\n";          // Accessors

    const std::string &s = p1.getName();                                // Const reference returns requires const for reference assignment

    Person p2{"Jane", 25};                                              // Parameterized constructor
    print(p2);                                                          // Print   
    birthday(p2);                                                       // Modify p2
    print(p2);                                                          // Print modified p2

    std::cout << std::endl;
    return 0;
}