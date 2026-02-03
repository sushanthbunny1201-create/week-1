#include<iostream>
#include<string>
using namespace std;

class student {
private:
    int rollnumber;
    string name;
    float marks;

public:
    // Default constructor
    student() {
        rollnumber = 0;
        name = "";
        marks = 0.0;
    }

    // Parameterized constructor
    student(int r, string n, float m) {
        rollnumber = r;
        name = n;
        marks = m;
    }

    void input() {
        cout << "Enter roll number: ";
        cin >> rollnumber;
        cin.ignore();

        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << rollnumber << "\t" << name << "\t" << marks << endl;
    }

    // Destructor
    ~student() {
        cout << "Student object with roll no "
             << rollnumber << " is destroyed" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    student* students = new student[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << endl;
        students[i].input();
    }

    cout << "\nRollNumber\tName\tMarks\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
    }

    delete[] students;
    return 0;
}