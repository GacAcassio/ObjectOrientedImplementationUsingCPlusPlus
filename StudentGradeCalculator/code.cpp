#include <iostream>
#include<math.h>
using namespace std;
class College
{
    private:
        static string principal_name;  
    public:
        static void setPrincipalName(string name)
        {
            principal_name=name;
        }
        static string getPrincipalName()
        {
            return principal_name;
        }
};

class Student
{
    private:
        int id;
        string name;
        float marks[5];
        float average;
        char grade;
        College cObj;
    public:
        void getStudentDetails()
        {
             int id;
            string name;
            float marks[5];
            float average;
            char grade;
            cout << "Enter sudent ID:" << endl;
            cin >> id;
            this->setId(id);
            cout << "Enter Student Name:" << endl;
            cin >> name;
            this->setName(name);
            cout << "Enter the five subjects marks:" << endl;
            for(int i = 0; i < 5; i++)
                cin >> marks[i];
            this->setMarks(marks);
        }
        void calculateAverage()
        {
            float som = 0;
            for(int i = 0; i < 5; i++)
                som += this->marks[i];
            this->average = (int) (som / 5);
            this->findGrade();
        }
        void findGrade()
        {
            if(this->average >= 50)
            {
                this->grade = 'A';
            }
            if(this->average >= 80)
            {
                this->grade = 'O';
            }
            for(int i = 0; i < 5; i++)
            {
                if(this->marks[i] < 50)
                    this->grade = 'F';
            }
        }
        void displayStudentDetails()
        {
            cout << "Student Name : " << this->getName() << endl;
            cout << "Student ID : " << this->getId() << endl;
            cout << "Principal Name : " << this->getCollegeObject().getPrincipalName() << endl;
            cout << "Average : " << (int) this->getAverage() << endl;
            cout << "Grade : " << this->getGrade() << endl;
        }
        void setId(int id)
        {
            this->id=id;
        }
        int getId()
        {
            return id;
        }
        void setAverage(float average)
        {
            this->average = average;
        }
        int getAverage()
        {
            return average;
        }
        void setName(string n)
        {
            this->name=n;
        }
        string getName()
        {
            return name;
        }
        void setMarks(float m[])
        {
            for(int i = 0; i < 5; i++)
                this->marks[i]=m[i];
            this->calculateAverage();
        }
        float* getMarks()
        {
            return marks;
        }
        void setGrade(char g)
        {
            grade=g;
        }
        char getGrade()
        {
            return grade;
        }
        College getCollegeObject()
        {
            return cObj;
        }
};

string College::principal_name = "John";

int main()  
{
    Student s1;
    s1.getStudentDetails();
    s1.displayStudentDetails();
    return 0;
}
