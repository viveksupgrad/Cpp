#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student{
private:
    int studentId;
    string name;
    float *grades;
    int numGrades;

public:
    Student(int id, string name, int numSubjects){
        studentId = id;
        this->name = name;
        numGrades = numSubjects;

        grades = new float[numGrades];
    }

    ~Student(){
        delete[] grades;
    }
    void setGrades(){
        cout<<"enter grades for"<<name<<":"<<endl;
        for(int i=0; i<numGrades; i++){
            cout<<"grade for subject"<<i+1<<":";
            cin>>grades[i];
        }
    }
    float calculateAvg(){
        float sum = 0;
        for(int i=0; i<numGrades; i++){
            sum += grades[i];

        }
        return sum/numGrades;
    }

    void displayGradeReport(){
        cout<<"Student: "<<name<< "(Id: "<<studentId<<")"<<endl;
        cout<<"Grades: ";
        for(int i=0; i<numGrades; i++){
            cout<<grades[i]<<" ";
        }
        cout<<endl;
        cout<<"Average grade:"<<calculateAvg();
    }

};

class Course{
private:
    string courseName;
    vector<Student*> students; //vector of pointers to Student objects
public:
    Course(string name){
        courseName = name;
    }

    void enrollStudent(Student* student){
        students.push_back(student);
    }

    void printCourseReport(){
        cout<<"Course: "<<courseName<<endl;
        for (auto student: students){
            student->displayGradeReport();
        }
    }
    void calculateClassAvg(){
        float total = 0;
        int count = 0;

        for(auto student:students){
            total+= student->calculateAvg();
            count++;
        }
        if(count>0){
            cout<<"Class average:"<<total/count<<endl;
        }
    }

};

int main(){
    Course course("Mechanics");

    Student* student1 = new Student(101, "A", 3);

    student1->setGrades();
    course.enrollStudent(student1);

    Student* student2 = new Student(102, "B", 3);
    student2->setGrades();
    course.enrollStudent(student2);

    course.printCourseReport();

    course.calculateClassAvg();

    delete student1;
    delete student2;
}
