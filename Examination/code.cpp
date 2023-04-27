#include <iostream>
using namespace std;
 
class Examination 
{
 protected:
    int passMark=100;
    public:
        void setPassMark(int pMark)
        {
            passMark=pMark;
        }
        int getPassMark()
        {
            return passMark;
        }
    void displayResult(int gradePoint)
    {
        if(gradePoint > this->passMark)
        {
            cout << "Result: Pass" << endl;
        }
        else
        {
            cout << "Result: Fail" << endl;
        }
    }
};
 
class ScienceExam: public Examination
{
  public:
  int  calculateGradePoints(int mark){
     return 2 * mark;
    }
};

 class MathsExam: public Examination
 {
  public:
    int  calculateGradePoints(int mark){
        return 4 * mark;
    }
};

int main()
{  
    int smark,mathmark;
    cout<<"Enter the mark in Science:";
    cin>>smark;
    cout<<"Enter the mark in Maths:";
    cin>>mathmark;
    
    ScienceExam s;
    MathsExam m;
    
    cout << "Science:" << endl;
    s.displayResult(m.calculateGradePoints(smark));
    cout << "Gradepoints: " << s.calculateGradePoints(smark) << endl;
    cout << "Math:" << endl;
    m.displayResult(m.calculateGradePoints(mathmark));
    cout << "Gradepoints: " << m.calculateGradePoints(mathmark) << endl;
    return 0;
}
