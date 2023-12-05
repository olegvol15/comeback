#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    Student(const string& name, int age, int* grades, int numGrades, int year, const string& faculty)
        : name(name), age(age), year(year), faculty(faculty) {
        if (numGrades > 0) {
            this->grades = new int[numGrades];
            for (int i = 0; i < numGrades; i++) {
                this->grades[i] = grades[i];
            }
            this->numGrades = numGrades;
        }
    }

    void input() {
        cout << "Enter student's name: ";
        cin >> name;
        cout << "Enter student's age: ";
        cin >> age;
        cout << "Enter the number of grades for the student: ";
        cin >> numGrades;
        grades = new int[numGrades];
        cout << "Enter the student's grades (separated by spaces): ";
        for (int i = 0; i < numGrades; i++) {
            cin >> grades[i];
        }
        cout << "Enter the student's year in university: ";
        cin >> year;
        cout << "Enter the student's faculty: ";
        cin >> faculty;
    }

    void output() {
        cout << "Student's name: " << name << endl;
        cout << "Student's age: " << age << endl;
        cout << "Student's grades: ";
        for (int i = 0; i < numGrades; i++) {
            cout << grades[i] << " ";
        }
        cout << endl;
        cout << "Student's year in university: " << year << endl;
        cout << "Student's faculty: " << faculty << endl;
    }

    ~Student() {
        delete[] grades;
    }

private:
    string name;
    int age;
    int* grades;
    int numGrades;
    int year;
    string faculty;
};

class Human : public Student {
public:
    Human(const string& name, int age) : Student(name, age, nullptr, 0, 0, "") {}

    void input() {
        Student::input();
    }

    void output() {
        cout << "Information about the human:" << endl;
        Student::output();
    }
};

class University : public Student {
public:
    University(const string& name, int foundationYear, const string& rectorName)
        : Student("", 0, nullptr, 0, 0, ""), universityName(name), foundationYear(foundationYear), rectorName(rectorName) {}

    void input() {
        cout << "Enter the name of the university: ";
        cin >> universityName;
        cout << "Enter the foundation year of the university: ";
        cin >> foundationYear;
        cout << "Enter the name of the university's rector: ";
        cin >> rectorName;
    }

    void output() {
        cout << "Information about the university:" << endl;
        cout << "University name: " << universityName << endl;
        cout << "Foundation year of the university: " << foundationYear << endl;
        cout << "Name of the university's rector: " << rectorName << endl;
    }

private:
    string universityName;
    int foundationYear;
    string rectorName;
};

int main() {
    Human human1("Oleg", 17);
    human1.input();

    University university1("Wroclav University of economics", 1950, "Krzystov Michalak");
    university1.input();

    human1.output();
    university1.output();

    return 0;
}


