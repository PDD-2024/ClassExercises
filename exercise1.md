# Cpp Exercise 1

- Upload to the following github rep, using a directory with your name the following Exercise.  
https://github.com/PDD-2024/CppExercise1.git  
- Make an array of students structs that have grades, age, name. And in those structs must contain a function that returns true if the name is the same name as the one given and if the student has a passing grade.  
- Use a function that swaps the grade of two students in the array.  
- The grades must be a reference to a grade list and has a numerical and representative value(Ex: (A, 90)).  
- Grades have an numerical interval in which equals a certain representational value.  
- Note that is the grade list changes the reference to that list position changes.  
- Find the students that have a grade over 64(2^6) using only bitwise operators.  

## Optional
- Create a class student, that if reaches a failing grade destroys itself.   
- Create a class teacher  
- Create a class exam, that must contain grade and student  
- Teacher must contain a function that if exam has bad grades, reduces the grade of the student by the amount % of the grade. If the exam has good grades then the grade increases 10% at maximum. The grade must be less than 100   
- Create home student that is a class derived from student. This class attends exams, but its grades increases only 5% at most if succesfull.  
- Home student can be a previous student in the case an student, changes to home student  it ceases to exist as an student and becomes home student.  
