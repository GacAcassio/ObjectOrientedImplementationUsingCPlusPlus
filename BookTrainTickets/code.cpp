#include <iostream>
#include <math.h>
using namespace std;

class Train 
{
    private:
        long passengerPhone;
        string passengerName;
        char gender;
        int age;
        double ticketPrice;
    public:
    
    double calculateAmount()
    {
        if (this->age < 16)
        {
            return 50;
        }
        
        if(this->age >= 60)
        {
            return 75;
        }
        
        if(this->gender == 'F')
        {
            return 90;
        }
        
        return 100;
    }
    
    long getPassengerPhone()
    {
        return this->passengerPhone;
    }
    
    string getPassengerName() 
    {
        return this->passengerName;
    }
    
    char getGender()
    {
        return this->gender;
    }
    
    int getAge() 
    {
        return this->age;
    }
    
    double getTicketPrice()
    {
        return this->ticketPrice;
    }
    
    void setPassengerPhone(long pPhone) 
    {
        this->passengerPhone = pPhone;
    }
    
    void setPassengerName(string pName)
    {
        this->passengerName = pName;
    }
    
    void setGender(char pGender)
    {
        this->gender = pGender;
    }
    
    void setAge(int pAge) 
    {
        this->age = pAge;
    }
    
    void setTicketPrice(double tPrice)
    {
        this->ticketPrice = tPrice;
    }
};

int main(){   
    long phone;
    string name;
    char gender;
    int age;
    double ticketPrice;
    cout << "Enter the Passenger phone no : ";
    cin >> phone;
    cout << "Enter the Passenger name : ";
    cin >> name;
    cout << "Enter the Passenger Age : ";
    cin >> age;
    cout << "Enter the Gender(M/F): ";
    cin >> gender;
    cout << "Enter the Ticket Price: ";
    cin >> ticketPrice;
    
    Train eastExpress;
    
    eastExpress.setPassengerPhone(phone);
    eastExpress.setPassengerName(name);
    eastExpress.setAge(age);
    eastExpress.setGender(gender);
    eastExpress.setTicketPrice(ticketPrice * eastExpress.calculateAmount() / 100);
    
    cout << "Total Amount(In dollars): " << eastExpress.getTicketPrice() << endl;
    
    return 0;
}
