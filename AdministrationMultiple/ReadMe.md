# Administration - Multiple

The State Administrator's Job is to monitor territory administration. Develop a software to help him with allocating money for various community development schemes.
The inputs are number of territories, revenue , total schemes and rejected schemes . Help him to calculate the money to allot per scheme using Multiple Inheritance in C++. 

class RuralManagement is provided with the  below protected attribute and public method:
protected:
  int acceptedSchemes;
setter and getter method for the above variable is provided as part of the code skeleton.
1. method with name 'calcNoOfSchemes' has two parameter 'int noOfSchemes, int noOfSchemesRejected' with return type void.
			functionality : CalcNoOfSchemes method has to set the no of schemes accepted.
			condition : acceptedSchemes = total schemes - rejected schemes

class RevenueManagement  with the below protected attribute and public method is provided as part of code skeleton:
 protected:
    double totalRevenue;
 setter and getter method for the above variable is also provided as part of the code skeleton.
1. method with name 'calcTotalRevenue' has two parameters 'int noOfTerritory, double revenue' with return type as void. 
			functionality    : CalcTotalRevenue method has to set the totalRevenue of all territories.
			condition 	  : totalRevenue = noOfTerritory*revenue

Create a class SchemeManagement that inherits the properties of class RevenueManagement  and class RuralManagement and has one method:
1. method with name 'allotMoneyPerScheme' has no parameters with return type as double. 
			functionality    : allotMoneyPerScheme method has to return the money per scheme
			condition 	  : Total revenue /accepted schemes

Create a function main() to get input and print the output.

Note: Avoid the usage of exit(0) in your code.  
Sample Input 1:

Enter number of territories:10
Enter revenue: 10000
Enter total number of schemes: 10
Enter number of schemes rejected: 2

Sample Output 1:

Money allotted per scheme: 12500

Sample Input 2:

Enter number of territories: 5
Enter revenue: 1000
Enter total number of schemes: 5
Enter number of schemes rejected: 3

Sample Output 2:

Money allotted per scheme: 2500
