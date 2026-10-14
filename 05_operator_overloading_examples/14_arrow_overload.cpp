#include <iostream>
#include <string>

class Person {              
private:
    std::string name;
public:
    Person(std::string n = "default"): name(n) {}
    const std::string& getName() const { return name; }
    void setName(const std::string &n) { name = n; }
    friend std::ostream& operator<<(std::ostream& out, Person &p);
};
std::ostream& operator<<(std::ostream& out, Person &p){ out << p.name; return out; }

class PersonPtr {                                           // Simple Smart Pointer class for Person objects
private:
    Person *ptr;
public:
    PersonPtr(Person *p = nullptr) : ptr(p) {} 
    ~PersonPtr() { delete ptr;}
    Person& operator*() const { return *ptr; }              // Overload * (defererence) to return the deferenced value of ptr

    Person* operator->()                                    // Overload -> (defererence) to return the value of ptr (memory address of the pointed to object)
    {
        return ptr;
    }
    const Person* operator->() const                        // Const version
    {
        return ptr;
    }    
};

int main() {
    std::cout << "\n";

    PersonPtr p(new Person("John"));
    std::cout << *p << "\n";                                // Deference to read the value of the variable p points to

    (*p).setName("Kim");                                    // Deference p to call a Person member function from a PersonPtr
    std::cout << *p << "\n";

    p->setName("Sara");                                     // Use Arrow to deference p to call a Person member function from a PersonPtr
    std::cout << *p << "\n";
    
    std::cout << "\n";
    return 0;
}