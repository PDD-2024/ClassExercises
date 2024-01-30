#include <iostream>

using namespace std;
#define PASSING 60

struct grade {
    char rep;
    int val;
};

grade grades_list[5];

struct student {
    int grade;
    int age;
    string name;
    bool isPassing(string other) {
        if (name.compare(other) == 0 && grades_list[grade].val >= PASSING) {
            return true;
        } 
        return false;
    }
    void print() {
        cout << name << ": " << age << " years old, has grade " << grades_list[grade].rep << endl;
    }
};

void swapGrades(student *a, student *b) {
    int temp = a->grade;
    a->grade = b->grade;
    b->grade = temp;
}

void studentsOver64(student *s[], int size) {
    cout << "students over 64:" << endl;
    for (int i=0; i<size; i++) {
        if (grades_list[(*s[i]).grade].val >> 6) {
            cout << s[i]->name << endl;
        }
    }
    cout << endl;
}


int main() {
    grades_list[0].rep = 'F';
    grades_list[0].val = 0;
    grades_list[1].rep = 'D';
    grades_list[1].val = 60;
    grades_list[2].rep = 'C';
    grades_list[2].val = 70;
    grades_list[3].rep = 'B';
    grades_list[3].val = 80;
    grades_list[4].rep = 'A';
    grades_list[4].val = 90;

    student s1;
    s1.grade = 0;
    s1.age = 25;
    s1.name = "John";

    student s2;
    s2.grade = 4;
    s2.age = 10;
    s2.name = "Alice";

    student s3;
    s3.grade = 2;
    s3.age = 36;
    s3.name = "Mike";

    student *s[3];
    s[0] = &s1;
    s[1] = &s2;
    s[2] = &s3;
    
    for (int i=0; i<3; i++) {
        (*s[i]).print();
    }

    swapGrades(s[0],s[1]);

    for (int i=0; i<3; i++) {
        (*s[i]).print();
    }

    if (s[0]->isPassing("John")) {
        cout << "John is passing!"<< endl;
    }

    studentsOver64(s,3);
}