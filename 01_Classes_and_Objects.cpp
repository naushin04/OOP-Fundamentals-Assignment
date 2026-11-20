#include <iostream>
#include <string>
using namespace std;

// Task 1: Student is the class name.
class Student
{
public:
    // Task 2: name and studentID are data members.
    string name;
    int studentID;

    // Task 2: displayInfo() is a member function.
    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << studentID << endl;
    }
};

int main()
{
    // Task 1: s1 is an object of the Student class.
    Student s1;

    // Task 3: Dot (.) operator is used to access public members.
    s1.name = "Naushin";
    s1.studentID = 25004;

    s1.displayInfo();

    return 0;
}
