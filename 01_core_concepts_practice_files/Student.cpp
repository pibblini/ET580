#include <iostream>
class Student {
    private:
    std::string name; //member variable for name
    int id; //member variable for id 
    public: 
    Student():id(10000000){} //Default Constructor assigns value 
    Student(int a):id(a){} //paramaterized constructor 
    int getId(){return id;} //Accessor function
    void setId(int s) { id = s; } //mutator function  for modify access to member variables

    
}
// 1. Implement class Student with:
//    a. Two member variables: name (string)and id (id is an 8-digit integer).
//    b. Default constructor: assign values "default" and 10000000.
//    c. Parameterized constructor.
//    d. Accessor functions for both member variables.
//    e. Mutator functions for both member variables.       

// 2. Write a non-member print function to print student object data.

int main() {

    Student s1;// 3. Instantiate Student object s1 with a default constructor.
    s1.setId(19073120);// 4. Assign data to s1 using Mutators.
    std::cout << s1.getId << "\n"; // 5. Print s1 data using Accessors.

    // 6. Instantiate Student object s2 with a parameterized constructor.
    // 7. Print s2 data using the non-member Print function.

    return 0;
}