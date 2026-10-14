#include <iostream>

class Student {
private:
    std::string name;
    int id;
public:
    Student(): name("default"), id(0) {}                                                // Default constructor
    Student(const std::string &n, int i): name(n), id(i) {}                             // Parameterized constructor (pass string by const ref)
    Student(const Student &other): name(other.name), id(other.id) {}                    // Copy constructor (pass Student by const ref)
    const std::string& getName() const { return name; }                                 // Name accessor, const member function (return string by const ref)
    int getId() const { return id; }                                                    // Id acessor, const member function
    void setName(const std::string &n) { name = n; }                                    // Name mutator (pass string by const ref)
    void setId(int i) { id = i; }                                                       // Id mutator
};

void print(const Student &s) { std::cout << s.getName() << " " << s.getId() << "\n"; }  // Non-member function (requires accessor functions)

int main() {

    Student s1{};                                                                       // Instantiate an object: Test the default constructor
    s1.setName("John");                                                                 // Test accessor member functions
    s1.setId(11110000);
    std::cout << s1.getName() << " " << s1.getId() << "\n";                             // Test mutator member functions

    Student s2{"Sara", 10101010};                                                       // Instantiate an object: Test the parameterized constructor
    print(s2);                                                                          // Test the member function

    Student s3{s2};                                                                     // Instantiate an object: Test the copy constructor
    print(s3);

    return 0;
}