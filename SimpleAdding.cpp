/*  
Have the function SimpleAdding(num) add up all the numbers from 1 to num. 
For example: if the input is 4 then your program should return 10 because 1 + 2 + 3 + 4 = 10. 
For the test cases, the parameter num will be any number from 1 to 1000. 
*/

#include <iostream>
#include <string>
using namespace std;

int SimpleAdding(int num) { 

  // code goes here   
  
  int sum=0;
  while(num>0)
  {
    sum=sum+num;
    num--;
  }
  num=sum;
  return num; 
            
}

int main() { 
  
  // keep this function call here
  cout << SimpleAdding(gets(stdin));
  return 0;
    
} 


  
