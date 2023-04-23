#include <iostream>
#include <string.h>

using namespace std;

class Company
{
    private:
        static string companyName;
        static string address;
        static long int contactNumber;
    public:
        static void displayCompanyDetails()
        {
            cout << "Company Name:" << getCompanyName() << endl;
            cout << "Address:" << getAddress() << endl;
            cout << "COntact Number:" << getContactNumber() << endl;
        }
        static string getCompanyName()
        {
            return companyName;
        }
        static string getAddress()
        {
            return address;
        }
        static long int getContactNumber()
        {
            return contactNumber;
        }
        static void setCompanyName(string cname)
        {
            companyName=cname;
        }
        static void setAddress(string add)
        {
            address=add;
        }
        static void setContactNumber(long int cnumber)
        {
            contactNumber=cnumber;
        }
};

class Employee
{
    private:
        string empName;
        int empId;
        double netSalary;
        Company cObj;
    public:
        void getEmployeeDetails()
        {
            cout << "Enter Employee Name:\n";
            string name;
            cin >> name;
            setEmpName(name);
            cout << "Enter Employee ID:\n";
            int id;
            cin >> id;
            setEmpId(id);
            cout << "Enter Net Salary (In dollars):\n";
            double netSalary;
            cin >> netSalary;
            setNetSalary(netSalary);
            
        }
        int calculateBonusPercentage()
        {
            if (this->netSalary > 50000 && this->netSalary <= 80000)
            {
                return 5;
            }
            else if (this->netSalary > 30000 && this->netSalary <= 50000)
            {
                return 10;
            }
            else if (this->netSalary > 10000 && this->netSalary <= 30000)
            {
                return 15;
            }
            else
            {
                return 20;
            }
        }
        void displayEmployeeDetails()
        {
            this->cObj.displayCompanyDetails();
            cout << "Employee Name:" << this->empName << endl;
            cout << "Employee ID" << this->empId << endl;
            cout << "Employee Net Salary (In dollars):" << this->netSalary << endl;
            cout << "Employee Bonus Percentage:" << this->calculateBonusPercentage() << "%" << endl;
            
        }
        void setEmpName(string name)
        {
            this->empName=name;
        }
        void setEmpId(int id)
        {
            this->empId=id;
        }
        void setNetSalary(double net)
        {
            this->netSalary=net;
        }
        void setCobj(Company c)
        {
            this->cObj=c;
        }
        Company getCobj()
        {
            return this->cObj;
        }
        string getEmpName()
        {
            return this->empName;
        }
        int getEmpId()
        {
            return this->empId;
        }
        double getNetsalary()
        {
            return this->netSalary;
        }
};

// Assigning the values to the static members of Company
string Company::companyName = "TekSoft";
string Company::address = "LosAngeles";
long int Company::contactNumber = 422245673;

int main()  
{
        Employee GabrielAcassio;
        GabrielAcassio.getEmployeeDetails();
        GabrielAcassio.displayEmployeeDetails();
        return 0;
}
