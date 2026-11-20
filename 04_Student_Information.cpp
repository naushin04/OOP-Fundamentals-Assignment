
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int studentID;
    string name;
    string department;
    int semester;

public:
    void setInformation(int id, string n, string dept, int sem) {
        studentID = id;
        name = n;
        department = dept;
        semester = sem;
    }

    void displayInformation() {
        cout << "Student ID: " << studentID << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Semester: " << semester << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    Student s1, s2, s3;

    s1.setInformation(25001, "Rahim", "ICT", 1);
    s2.setInformation(25002, "Karim", "ICT", 2);
    s3.setInformation(25003, "Nusrat", "ICT", 3);

    cout << "Student Information" << endl;
    cout << "====================" << endl;

    s1.displayInformation();
    s2.displayInformation();
    s3.displayInformation();

    return 0;
}
