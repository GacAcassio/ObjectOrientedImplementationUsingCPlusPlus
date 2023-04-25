#include <iostream>
using namespace std;
 
class Election 
{
    protected:
       long int totalPeople;
       long int noOfWomen;
       long int noOfMen;
       
    public:
  
        void setTotalPeople(long int totPeople)
        {
            this->totalPeople=totPeople;
        }
        void setNoOfWomen(long int womenCount)
        {
            this->noOfWomen=womenCount;
        }
        void setNoOfMen(long int menCount)
        {
            this->noOfMen=menCount;
        }
        long int getTotalPeople()
        {
            return this->totalPeople;
        }
        long int getNoOfWomen()
        {
            return this->noOfWomen;
        }
        long int getNoOfMen()
        {
            return this->noOfMen;
        }
    
};

class GeneralElection:public Election
{
    public:
        double calcVotePercentage(int partyA, int partyB){
            return (((partyA + partyB) *100) / this->totalPeople);
        }
        double calcWomenVotePercentage(int womenVotes){
            return  ((womenVotes * 100) / this->noOfWomen) ;
        }
        double calcMenVotePercentage(int menVotes){
            return  ((menVotes * 100) / this->noOfMen);
        }
};


// main function
int main()
{  
    GeneralElection regional;
    
    long int totalPeople,noOfWomen,noOfMen;
    int partyA,partyB,womenVotes,menVotes;
    double votePer,womenVotePer,menVotePer;
    
    cout<<"Enter the number of People:";
    cin>>totalPeople;
    regional.setTotalPeople(totalPeople);
    
    cout<<"Enter the number of women:";
    cin>>noOfWomen;
    regional.setNoOfWomen(noOfWomen);
    
    cout<<"Enter the number of men:";
    cin>>noOfMen;
    regional.setNoOfMen(noOfMen);
    
    cout<<"Enter the total votes by Party A:";
    cin>>partyA;
    
    cout<<"Enter the total votes by Party B:";
    cin>>partyB;
    
    cout<<"Enter the number of women votes:";
    cin>>womenVotes;
    
    cout<<"Enter the number of men votes:";
    cin>>menVotes;
    
    cout << "Vote Percentage: " << regional.calcVotePercentage(partyA, partyB) << endl;
    cout << "Women Vote Percentage: " << regional.calcWomenVotePercentage(womenVotes) << endl;
    cout << "Men Vote Percentage: " << regional.calcMenVotePercentage(menVotes) << endl;
    
    return 0;
}
