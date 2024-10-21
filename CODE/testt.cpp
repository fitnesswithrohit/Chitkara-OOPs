#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string major;
    float gpa;

public:
    Student() : name(""), age(0), major(""), gpa(0.0) {}

    Student(const string& name, int age, const string& major, float gpa) 
        : name(name), age(age), major(major), gpa(gpa) {
        if (gpa < 0.0 || gpa > 4.0) {
            this->gpa = 0.0;
        }
    }
    ~Student() {
        cout << "Student object for " << name << " destroyed." << endl;
    }

    void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age 
                  << ", Major: " << major << ", GPA: " << gpa << endl;
    }

    bool isEligibleForGraduation() {
        return (gpa >= 2.0 && age >= 18);
    }
};

int main() {
    string name, major;
    int age;
    float gpa;

    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter student age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter student major: ";
    getline(cin, major);
    cout << "Enter student GPA: ";
    cin >> gpa;

    Student student(name, age, major, gpa);

    student.displayInfo();

    cout << "Eligible for Graduation: " 
              << (student.isEligibleForGraduation() ? "Yes" : "No") 
              << endl;

    return 0;
}
