
#include<iostream>
using namespace std;

class Player 
{
    private:
        int playerID;
        string playerName;
        int playedMatches;
        int playerScore;
    
    public:
    
        Player (int playerId, string playerName, int playerScore)
        {
            this->playerID = playerId;
            this->playerName = playerName;
            this->playerScore = playerScore;
        }
    
        Player (int playerId, string playerName, int playedMatches, int playerScore)
        {
            this->playerID = playerId;
            this->playerName = playerName;
            this->playedMatches = playedMatches;
            this->playerScore = playerScore;
        }
        
        void displayThreeArgument()
        {       
           cout << "Player ID. : " << this->playerID << endl;
           cout << "Player Name : " << this->playerName << endl;
           cout << "Player Score : " << this->playerScore << endl;
           return;
        }
    
    
        void displayFourArgument()
        {
           cout << "Player ID. : " << this->playerID << endl;
           cout << "Player Name : " << this->playerName << endl;
           cout << "Played Matches : " << this->playedMatches << endl;
           cout << "Player Score : " << this->playerScore << endl;
           return;
        }
        int getPlayerID()
        {
            return this->playerID;
        }
        string getPlayerName()
        {
            return this->playerName;
        }
        int getPlayedMatches()
        {
            return this->playedMatches;
        }
        int getPlayerScore()
        {
            return this->playerScore;
        }
        ~Player()
        {
            cout << "Destructor Called\n";
        }
};
int main(){
    
    Player p1(1001, "John", 130);
    Player p2( 1002, "Raj", 100, 5000);
    p1.displayThreeArgument();
    cout << endl;
    p2.displayFourArgument();
    cout << endl;
    p2.~Player();
    p1.~Player();
    return 0;
}
