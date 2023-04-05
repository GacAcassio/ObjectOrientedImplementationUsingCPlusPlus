#include <iostream>

using namespace std;

class Shop {

    private:
        string itemName;
        int itemQuantity;
        double itemPrice;

    public:
         //Getters and setters for above variables.
         void setItemName(string itemName)
         {
             this->itemName = itemName;
         }
         void setItemQuantity(int itemQuantity)
         {
             this->itemQuantity = itemQuantity;
         }
         void setItemPrice(double itemPrice)
         {
             this->itemPrice = itemPrice;
         }
         string getItemName()
         {
             return this->itemName;
         }
         int getItemQuantity()
         {
             return this->itemQuantity;
         }
         double getItemPrice()
         {
             return this->itemPrice;
         }
   
};

int main()
{
    string name;
    int quantity;
    double price;
    cout<<"Enter the item name:"<<endl;
    cin>>name;
    cout<<"Enter the item quantity:"<<endl;
    cin>>quantity;
    cout<<"Enter the item price:"<<endl;
    cin>>price;

    Shop s;
    
    s.setItemName(name);
    s.setItemQuantity(quantity);
    s.setItemPrice(price);
    
    cout << "Item Name: " << s.getItemName() << endl;
    cout << "Item Quantity: " << s.getItemQuantity() << endl;
    cout << "Item Price: " << s.getItemPrice() << endl;
    return 0;
}
