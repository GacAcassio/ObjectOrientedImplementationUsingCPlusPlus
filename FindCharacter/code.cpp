#include <iostream>
using namespace std;

void findChar(string a, int index)
{
    cout << "The character is " << a[index] << endl;
    return;
}
int main() //DO NOT change the 'main' signature
{
    //Call the function and print the result
    string a;
    int i;
    cout << "Enter the name:";
    cin >> a;
    cout << "Enter the index:";
    cin >> i;
    findChar(a, i);
    return 0;
}
