# Online Test

Global Organization wants to conduct an online test for their trainees. The HR department wants to generate a report on the highest score / scores among the trainees. Help them by creating a C++ program using structures to perform this task.

Create a structure Employee as follows:

struct Employee

{

string name;

int scores[5];

};

Assume there must be at least 2 trainees to compare. If not display the message "Only one person has taken up the test"

Hint : Input order should be the number of trainees, name of the trainees and their scores. 

Implement the above scenario.

Note: Please avoid the usage of exit(0) in your code.  
Sample Input 1:

2

Sam

12

23

12

12

34

Remi

12

12

12

12

12

Sample Output 1:

The list of Employees who have scored highest marks

Sam


Sample Input 2:

3

Remi

12

12

12

12

12

Sunil

12

12

12

12

12

Anil

15

2

3

5

2

Sample Output 2:

The list of Employees who have scored highest marks

Remi

Sunil



Sample Input 3:

1

Winson

65

23

12

55
40

Sample Output 3:

Only one person has taken up the test
