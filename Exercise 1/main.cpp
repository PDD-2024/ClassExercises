//
//  main.cpp
//  CppExercise1
//
//  Created by Joey Markley on 1/25/24.
//

#include <iostream>
#include <string>

struct grade {
public:
    int val;
    
    grade() {
        
    }
    
    grade(int grade) : val(grade) {
        
    }
    
    std::string getLetter() {
        if (val>93) {
            return "A";
        }
        else if (val>89) {
            return "-A";
        }
        else if (val>86) {
            return "+B";
        }
        else if (val>82) {
            return "B";
        } 
        else if (val>79) {
            return "-B";
        }
        else if (val>76) {
            return "+C";
        }
        else if (val>72) {
            return "C";
        }
        else if (val>69) {
            return "-C";
        }
        else {
            return "F";
        }
    }
    
    bool isPassing() {
        if (val > 69) {
            return true;
        }
        return false;
    }
};

struct student {
public:
    grade myGrade;
    std::string name;
    int age;
    
    student(int val, std::string name, int age) : name(name), age(age) {
        myGrade = grade(val);
    }
    
    bool isValid(std::string tempName) {
        bool isPassing = myGrade.isPassing();
        if (name == tempName && isPassing) {
            return true;
        }
        return false;
    }
};

void swapGrades(student *student1, student *student2){
    int tempVal;
    tempVal = student1->myGrade.val;
    student1->myGrade.val = student2->myGrade.val;
    student2->myGrade.val = tempVal;
}

bool greaterThan64(student *stud) {
    bool res = stud->myGrade.val >> 6;
    return res;
}

int main(int argc, const char * argv[]) {
    student student1 = student(97, "Joel Markley", 19);
    student student2 = student(50, "Harald Markley", 56);
    student student3 = student(83, "Andrea Markley", 53);
    student student4 = student(70, "Kate Markley", 23);
    student student5 = student(100, "Maddie Markley", 34);
    
    student students[] = {
        student1,student2,student3,student4,student5
    };
    
    for (int i = 0; i < 5; i++) {
        bool isValid = students[i].isValid("Joel Markley");
        bool greater = greaterThan64(&students[i]);
        
        std::cout << "Greater than 64: " << greater << " Is valid " << isValid << std::endl;
    }
    
    return 0;
}
