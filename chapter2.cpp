#include <iostream>
#include <string.h>
#include <vector>
#include <stdlib.h>
using namespace std;
double tax( double inc , string stat );
int exponent(int x, int n);
vector<string> longest(vector<string> arr);
int main()
{

//problem1
vector<double> arr;
vector<string> cat;
double raninc;
int ransta;
for (int i=0; i<10; i++)
{
   raninc = rand () % 400000;
   cout <<raninc<<endl;
   arr.push_back(raninc);
   ransta = rand () % 2;
   cout<<ransta<<endl;
   if (ransta==0)
   {
   cout<<"yes"<<endl;
   cat.push_back("single");
   }
   if (ransta==1)
   {
   cat.push_back("married");
   }
   if (ransta==2)
   {
   cat.push_back("head");
   }
  
} 
double result;
for (int j=0; j<10; j++)
{
   cout<< cat[j]<<endl;
   cout <<"tax is "<< tax(arr[j], cat[j])<<endl;
}
//problem2
int a =exponent(3, 4);
cout<<a;
//problem 7
cout<<"enter some words"<<endl;
string y;
vector<string> hell;
while (y !="q")
{
cin >> y;
hell.push_back(y);
}
hell = longest(hell);
for (int i; i<hell.size(); i++)
{
cout<< hell[i];
}
}
//problem1
double tax(double inc , string stat )
{
   cout<<stat<<endl;
   double taxes;
   if (stat=="single")
   {
      if (inc <9235)
      {
      taxes = inc *.1;
      }
      else if (inc >9234 && inc <= 37950)
      {
      taxes = 932.50 + 0.15 *(inc -9325);
      }
      else if (inc >37950 && inc <= 91900)
      {
      taxes = 5226.25 + 0.25 *(inc -37950);
      }
      else if (inc >91900 && inc <= 191650)
      {
      taxes = 18713.75 + 0.28 *(inc -91900);
      }
      else if (inc >191650 && inc <= 416700)
      {
      taxes = 46643.75 + 0.33 *(inc -191650);
      }
      else if (inc >416700 && inc <= 418400)
      {
      taxes = 120910.25 + 0.35 *(inc -416700);
      }
      else
      {
      taxes = 121505.25 + .396*(inc -418400);
      }
   }
   else if (stat=="married")
   {
      if (inc <= 18650)
      {
      taxes = inc *.1;
      }
      else if (inc >18650 && inc <= 75900)
      {
      taxes = 1865 + 0.15 *(inc -18650);
      }
      else if (inc >75900 && inc <= 153100)
      {
      taxes = 10452.50 + 0.25 *(inc -75900);
      }
      else if (inc >153100 && inc <= 233350)
      {
      taxes = 29752.50 + 0.28 *(inc -153100);
      }
      else if (inc >233350 && inc <= 416700)
      {
      taxes = 52222 + 0.33 *(inc -233350);
      }
      else if (inc >416700 && inc <= 470700)
      {
      taxes = 112728 + 0.35 *(inc -416700);
      }
      else
      {
      taxes = 131628 + 0.396 *(inc -470700);
      }
   }
   else if (stat=="head")
   {
      if (inc <= 13350)
      {
      taxes = inc *.1;
      }
      else if (inc >18650 && inc <= 75900)
      {
      taxes = 1335 + 0.15 *(inc -18650);
      }
      else if (inc >75900 && inc <= 153100)
      {
      taxes = 6952.50 + 0.25 *(inc -75900);
      }
      else if (inc >153100 && inc <= 233350)
      {
      taxes = 27052.50 + 0.28 *(inc -153100);
      }
      else if (inc >233350 && inc <= 416700)
      {
      taxes = 49816.50 + 0.33 *(inc -233350);
      }
      else if (inc >416700 && inc <= 470700)
      {
      taxes = 117202.50 + 0.35 *(inc -416700);
      }
      else
      {
      taxes = 126950 + 0.396 *(inc -470700);
      }
   }
   else
   {
      cout <<"invalid tax bracket";
   }
   return taxes;
}
//problem2
int exponent(int x, int n)
{
   int exp;
   if (n >=0)
   {
   if (n ==0)
   {
      return 1;
   }
   if (n==1)
   {
      return x;
   }
   if (n>1)
   {
     exp = x;
     while (n>1)
     {
      exp = exp*x;
      n--;
     }
     return exp;
   }
   }
   else
   {
      cout<<"error, exponent must be equal or greater than 1";
      return 0;
   }
}
//problem 7
vector<string> longest(vector<string> arr)
{
   int large;
   int temp;
   vector<string> largest;
   large = arr[0].size();
   for (int i=1; i<arr.size(); i++)
   {
      if (arr[i].size()>large)
      {
         large = arr[i].size();
      }
   }
   for (int i=0; i<arr.size(); i++)
   {
      if (arr[i].size()==large)
      {
         largest.push_back(arr[i]);
      }
   }
   return largest;
}