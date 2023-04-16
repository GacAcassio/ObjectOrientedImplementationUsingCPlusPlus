#include <iostream>
#include <string.h>

using namespace std;

class Employee
{
    private:
        static int count;
        int employeeId;
        string employeeName;
        double salary;
        double netSalary;
    public:
        void setEmployeeId(int id)
        {
            employeeId=id;
        }
        int getEmployeeId()
        {
            return employeeId;
        }
        void setEmployeeName(string name)
        {
            this->employeeName=name;
        }
         string getEmployeeName()
        {
            return this->employeeName;
        }
        void setSalary(double sal)
        {
            this->salary=sal;
        }
        double getSalary()
        {
            return this->salary;
        }
        void setNetSalary(double netSal)
        {
            this->netSalary=netSal;
        }
        double getNetSalary()
        {
           return this->netSalary;
        }
        void calculateNetSalary(int pfpercentage)
        {
            this->netSalary = this->salary * (1 - ((double)pfpercentage/100));
        }
        void display()
        {
            cout << "Id:" << this->employeeId;
            cout << endl << "Name:" << this->employeeName;
            cout << endl << "Net Salary (in dollars):" << this->netSalary << endl;
        }
        void getEmployeeDetails()
        {
            cout <<  "Enter Name:\n";
            cin >> this->employeeName;
            cout << "Enter salary(in dollars):\n";
            cin >> this->salary;
            this->setEmployeeId(this->generateEmployeeId());
        }
        static int generateEmployeeId()
        {
            count++;
            return count;
        }
};

int Employee::count = 99;

int main() 
{
    Employee carmemSandiego;
    carmemSandiego.getEmployeeDetails();
    int pfpercentage;
    cout<<"Enter PF percentage:"<<endl;
    cin>>pfpercentage;
    carmemSandiego.calculateNetSalary(pfpercentage);
    carmemSandiego.display();
    return 0;
}
