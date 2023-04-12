#include <iostream>
using namespace std;

struct Employee
{
    string name;
    int scores[5];
};

typedef struct Employee Employee;

void getHighestMarks(Employee employees[], int n)
{
    int flag = 1, count, swap, winners[n];
    
    if(n <= 1)
    {
        cout << "Only one person has taken up the test\n";
        return;
    }
    
    //using a references vector to make the sort easy than swaping all Employyes atributes;
    for (int i = 0; i < n; i++)
        winners[i] = i;
    
    //using a bubble sort
    while(flag)
    {
        for(int i = 0; i < n - 1; i++)
        {
            //the winners are defined by the highest number of marks greaters than others employes marks 
            count = 0;
            for(int j = 0; j < 5; j++)
            {
                if(employees[winners[i]].scores[j] > employees[winners[i + 1]].scores[j])
                {
                    count++;
                }
            }
            if (count >= 3)
            {
                flag = 1;
                swap = winners[i];
                winners[i] = winners[i + 1];
                winners[i + 1] = swap;
            }
            else
            {
                flag = 0;
            }
        }
    }
    
    //printing the winner using the 0 position of the vector winners and the others who ties with the 0th
    int i = 0;
    cout << employees[winners[i]].name << endl;
    i++;
    while(i < n)
    {
        for(int j = 0; j < 5; j++)
        {
            if(employees[winners[i]].scores[j] >= employees[winners[0]].scores[j])
            {
                count++;
            }
        }
        if (count >= 3)
        {
            cout << employees[winners[i]].name << endl;
        }
        else
        {
            break;
        }
        i++;
    }
    return;
}
int main()
{
    //Getting the data
    int n;
    cin >> n;
    Employee employees[n];
    for(int i = 0; i < n; i++)
    {
        cin >> employees[i].name;
        for(int j = 0; j < 5; j++)
        {
            cin >> employees[i].scores[j];
        }
    }
    
    getHighestMarks(employees, n);
    
    return 0;
}
