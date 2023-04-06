#include <iostream>

using namespace std;

class Student { 
    private:
        int studentId;
        string name;
        int departmentId;
        string gender;
        string phoneNumber;
  public:    
    void setStudentId(int id)
    {
        this->studentId = id;
    }
    int getStudentId()
    {
        return this->studentId;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
    void setDepartmentId(int id)
    {
        this->departmentId = id;
    }
    int getDepartmentId()
    {
        return this->departmentId;
    }
    void setGender(string gender)
    {
        this->gender = gender;
    }
    string getGender()
    {
        return this->gender;
    }
    void setPhoneNumber(string phoneNumber)
    {
        this->phoneNumber = phoneNumber;
    }
    string getPhoneNumber()
    {
        return this->phoneNumber;
    }
};
int main()
{
    int id,deptId;
    string name,gender,phNo;
    cout<<"Enter the details:"<<endl;
    cout<<"Student Id"<<endl;
    cin>>id;
    cout<<"Student Name"<<endl;
    cin>>name;
    cout<<"Department Id"<<endl;
    cin>>deptId;
    cout<<"Gender"<<endl;
    cin>>gender;
    cout<<"Phone Number"<<endl;
    cin>>phNo;
    
    //Fill the code here
    Student aline;
    aline.setStudentId(id);
    aline.setName(name);
    aline.setDepartmentId(deptId);
    aline.setGender(gender);
    aline.setPhoneNumber(phNo);
    
    cout << "Student details entered:\n";
    cout << aline.getStudentId() << " ";
    cout << aline.getName() << " ";
    cout << aline.getDepartmentId() << " ";
    cout << aline.getGender() << " ";
    cout << aline.getPhoneNumber() << "\n";
    return 0;
}
