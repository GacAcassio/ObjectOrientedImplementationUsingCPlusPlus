#include <iostream>
using namespace std;
 
class RuralManagement {
  protected:
  int acceptedSchemes;
  
  public:
    int getAcceptedSchemes(){
        return acceptedSchemes;
    }
    void setAcceptedSchemes(int noOfSchemes){
        this->acceptedSchemes=noOfSchemes;
    }
    void calcNoOfSchemes(int noOfSchemes,int noOfSchemesRejected){
       this->setAcceptedSchemes(noOfSchemes - noOfSchemesRejected);
   }
    
};
 
class RevenueManagement  
{
  protected:
    double totalRevenue;
  public:
    double getTotalRevenue(){
        return totalRevenue;
    }
    void setTotalRevenue(double revenue){
        this->totalRevenue=revenue;
    }
    void calcTotalRevenue(int noOfTerritoriess,double revenue){
       this->setTotalRevenue(noOfTerritoriess * revenue);
   }
};
class SchemeManagement: public RevenueManagement, public   RuralManagement
{
  public:
   double allotMoneyPerScheme(){
      return this->totalRevenue / this->acceptedSchemes;
   }
};


int main()
{ 
    int rejected,schemes,territories;
   double revenue;
   cout<<"Enter number of territories :"<<endl;
   cin>>territories;
   cout<<"Enter revenue :"<<endl;
   cin>>revenue;
   cout<<"Enter total number of schemes :"<<endl;
   cin>>schemes;
   cout<<"Enter number of schemes rejected :"<<endl;
   cin>>rejected;
   SchemeManagement s;
   s.calcTotalRevenue(territories, revenue);
   s.calcNoOfSchemes(schemes, rejected);
   cout << "Money allotted per scheme: " << s.allotMoneyPerScheme() << endl;
  return 0;
}
