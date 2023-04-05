#include <iostream>
using namespace std;

class Mobile{
    
    private:    
        string mobileBrand;
        string mobileModelName;
        double mobilePrice;
        
    public:    
        //Include Getters and setters for above variables.
        void setMobileBrand(string mobileBrand)
        {
            this->mobileBrand = mobileBrand;
            return;
        }
        string getMobileBrand()
        {
            return this->mobileBrand;
        }
        void setMobileModelName(string mobileName)
        {
            this->mobileModelName = mobileName;
            return;
        }
        string getMobileModelName()
        {
            return this->mobileModelName;
        }
        void setMobilePrice(double mobilePrice)
        {
            this->mobilePrice = mobilePrice;
            return;
        }
        double getMobilePrice()
        {
            return this->mobilePrice;
        }
};

int main()//DO NOT change the 'main' signature
{
        //Input statements are provided as part of the code skeleton
        string brand,model;
        double price;
        cout<<"Enter the mobile brand:"<<endl;
        cin>>brand;
        cout<<"Enter the mobile model name:"<<endl;
        cin>>model;
        cout<<"Enter the mobile price:"<<endl;
        cin>>price;
        
        //Fill the code here
        Mobile m;
        m.setMobilePrice(price);
        m.setMobileModelName(model);
        m.setMobileBrand(brand);
        
        cout << "Mobile Details" << endl;
        cout << "Mobile Brand:" << m.getMobileBrand() << endl;
        cout << "Mobile Model Name:" << m.getMobileModelName() << endl;
        cout << "Mobile Price :" << m.getMobilePrice() << endl;
        return 0;
}
