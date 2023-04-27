#include <iostream>
#include<cmath>
using namespace std;
 
class Product
{
  protected:
    int markedPrice=1000;
    int discount=40;
    public:
        void setMarkedPrice(int mPrice)
        {
            markedPrice=mPrice;
        }
        void setDiscount(int dis)
        {
            discount=dis;
        }
        int getMarkedPrice()
        {
            return markedPrice;
        }
        int getDiscount()
        {
            return discount;
        }
};
 
class Dress : public Product
{
  public:
    char findSize(int chestSize){
          if (chestSize <= 30 && chestSize >= 20)
          {
              return 'S';
          } else if (chestSize <= 40)
          {
              return 'M';
          }
          return 'L';
    }

};
 class Shirt : public Dress
 {
  public:
     int calculatePrice(char chestSize){
        if (chestSize == 'S')
          {
              return this->getMarkedPrice() - ((this->getMarkedPrice() * this->getDiscount())/100);
          } else if (chestSize == 'M')
          {
              return 500 + this->getMarkedPrice() - ((this->getMarkedPrice() * this->getDiscount())/100);
          }
          else
          {
              return 1000 + this->getMarkedPrice() - ((this->getMarkedPrice() * this->getDiscount())/100);
          }
          
     }
};


int main()
{
    
    int size;
    cout<<"Enter the chest size : ";
    cin>>size;
    Shirt s;
    cout << "Dress Size :" << s.findSize(size) << endl;
    cout << "Price (in $):" << s.calculatePrice(s.findSize(size)) << endl; 
    return 0;
}
