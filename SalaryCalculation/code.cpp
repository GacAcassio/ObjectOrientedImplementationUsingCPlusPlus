#include <iostream>

using namespace std;

class Employee {    
    private:
        int employeeId;
        string employeeName;
        double salary;
        double netSalary;
    public:
        void setEmployeeId(int id)
        {
            this->employeeId = id;
        }
        int getEmployeeId()
        {
            return this->employeeId;
        }
        void setEmployeeName(string name)
        {
            this->employeeName = name;
        }
        string getEmployeeName()
        {
            return this->employeeName;
        }
        void setSalary(double salary)
        {
            this->salary = salary;
        }
        double getSalary()
        {
            return this->salary;
        }
        void setNetSalary(double net)
        {
            this->netSalary = net;
        }
        double getNetSalary()
        {
            return this->netSalary;
        }
        void calculateNetSalary(int pfpercentage) 
        {
            this->setNetSalary(this->getSalary() - (this->getSalary() * pfpercentage)/100);
        }
};


int main(){   
    int id;
	string name;
	double sal;
	float pf;
	cout<<"Enter Id:"<<endl;
	cin>>id;
	cout<<"Enter Name:"<<endl;
	cin>>name;
	cout<<"Enter salary:"<<endl;
	cin>>sal;
	cout<<"Enter PF percentage:"<<endl;
	cin>>pf;
    
    Employee gabriel;
    
    gabriel.setEmployeeId(id);
    gabriel.setEmployeeName(name);
    gabriel.setSalary(sal);
    gabriel.calculateNetSalary(pf);
    
    cout << "Id:" << gabriel.getEmployeeId()<< endl;
    cout << "Name:" << gabriel.getEmployeeName() << endl;
    cout << "Salary:" << gabriel.getSalary()<< endl;
    cout << "Net Salary:" << gabriel.getNetSalary() << endl;
    return 0;
}
