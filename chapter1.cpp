#include <iostream>
#include <climits>
using namespace std;
int main()
{
   int x = INT_MAX;
   int y;
   int z;
   cout << "Hello World" << endl;
   //problem 2 using climits, write program to print out largest and smallest int
   cout << x << endl;
   cout << INT_MIN<<endl;
   //problem 3, what is the result of this operation
   x=-1;
   y=0;
   z=2;
   /*
   if ( x=y ){
      cout<<"a";
      cout <<x<<endl;
      }
   else{
      cout<<"b";
      cout <<y;
      }
      */
   //result is always using if loop since assignment instead of comparison
   //problem 4 what is the result
   if(x < y < z)
   {
      cout <<"Sorted"<<endl;
      
   }
   else
   {
      cout<<"Not Sorted"<<endl;
   }
   //the result returns a bool for the first comparison then compares that bool to the integer z
   // sporadic results
   cout<<"x";
   return 0;
}