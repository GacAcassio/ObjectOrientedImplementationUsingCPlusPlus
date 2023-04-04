#include <iostream>
using namespace std;

int findSquare(int a){
    //fill the code here
    if ( a < 0)
        return -1;
    return a * a;
}

int main() //DO NOT change the 'main' signature
{
    //Call the function and print the result
    int n;
    cin >> n;
    cout << findSquare(n) << endl;
    return 0;
}
