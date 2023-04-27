#include <iostream>
using namespace std;
 
class Heroine 
{
   protected:
        double earningsPerDay;
  public:
    void setEarningsPerDay(double earnings)
    {
        earningsPerDay=earnings;
    }
    double getEarningsPerDay()
    {
        return earningsPerDay;
    }
    long calcEarnings(int noOfDays)
    {
        return  this->earningsPerDay * noOfDays;
    }
};
 
class MovieHeroine: public Heroine
{
  private: 
        int daysRun;
  public:
   long calcEarnings(int noOfDays){
       int extraPercentage;
       if (this->daysRun > 100)
       {
           extraPercentage = 10;
       }
       else if (this->daysRun > 50)
       {
           extraPercentage = 5;
       }
       else
       {
           extraPercentage = 0;
       }
       return (this->getEarningsPerDay() * noOfDays) + ((this->getEarningsPerDay() * noOfDays)  * extraPercentage / 100);
   }
   
   void setDaysRun(int daysRun){
       this->daysRun = daysRun;
   }
   
   int getDaysRun(){
       return this->daysRun;
   }
};

class AdvertisementModel : public Heroine
{
  private:
        int rating;
  public:
   long calcEarnings(int noOfDays){
      int extraAmount;
      if(this->rating > 5)
      {
          extraAmount = 10000;
      }
      else if(rating > 2)
      {
          extraAmount = 5000;
      }
      else
      {
          extraAmount = 0;
      }
      return this->getEarningsPerDay() * noOfDays + extraAmount;
   }
   
   void setRating(int rating){
       this->rating = rating;
   }
   
   int getRating(){
       return this->rating;
   }
};
int main()
{  
    int movie,ad,rating,daysRun;
   double earningsPerDay;
   cout<<"Enter the earnings per day :"<<endl;
   cin>>earningsPerDay;
   
    cout<<"Enter the number of days for movie :"<<endl;
    cin>>movie;
    cout<<"Enter the number of days movie run:"<<endl;
    cin>>daysRun;
   //Implement your code
   
    cout<<"Enter the number of days for advertisement  :"<<endl;
    cin>>ad;
    
    cout<<"Enter the Advertisement rating: "<<endl;
    cin>>rating;
    
    MovieHeroine m;
    AdvertisementModel a;
    
    a.setEarningsPerDay(earningsPerDay);
    m.setEarningsPerDay(earningsPerDay);
    
    m.setDaysRun(daysRun);
    a.setRating(rating);
    
    cout << "Earnigs for Movie: " << m.calcEarnings(movie) << endl;
    cout << "Earnings for Advertisement: " << a.calcEarnings(ad) << endl;
   return 0;
}
