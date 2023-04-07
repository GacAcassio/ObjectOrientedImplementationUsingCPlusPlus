#include <iostream>

using namespace std;

class Employee {   
    private:
        int associateId;
        string associateName;
        string workStatus;
    public:
        void setAssociateId(int n)
        {
            this->associateId = n;
        }
        int getAssociateId()
        {
            return this->associateId;
        }
        void setAssociateName(string name)
        {
            this->associateName = name;
        }
        string getAssociateName()
        {
            return this->associateName;
        }
        void setWorkStatus(string status)
        {
            this->workStatus = status;
        }
        string getWorkStatus()
        {
            return this->workStatus;
        }
        void updateStatusDetails(int days)
        {
            if(days <= 20)
            {
                this->setWorkStatus("Core skills");
            }
            else if(days <= 40)
            {
                this->setWorkStatus("Advanced skills");
            }
            else
            {
                this->setWorkStatus("Project phase");
            }
        }
};


int main(){   

    int id;
	string name;
	int days;
	cout<<"Enter the associate id:" << endl;
	cin>>id;
	cout<<"Enter the associate name:" << endl;
	cin>>name;
	cout<<"Enter the number of days:"<< endl;
	cin>>days;
    
    Employee joao;
    joao.setAssociateId(id);
    joao.setAssociateName(name);
    joao.updateStatusDetails(days);
    
    cout << "The associate" << joao.getAssociateName() << " work status: " << joao.getWorkStatus() << endl;
    return 0;
}
