
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int id;

public:
    // Default Constructor
    Student() {
        name = "Unknown";
        id = 0;
    }

    // Parameterized Constructor
    Student(string n, int i) {
        name = n;
        id = i;
    }

    void display() {
        cout << name << " " << id << endl;
    }
};

int main() {
    Student s1;
    Student s2("Rahim", 210601);
    Student s3("Karim", 210602);
    Student s4("Nusrat", 210603);

    s1.display();
    s2.display();
    s3.display();
    s4.display();

    return 0;
}
