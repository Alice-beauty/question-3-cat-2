#include <iostream>
using namespace std;
bool checkEven(int num);//function prototype

int main(){
    //initialization
   int num;
   bool isEven;
   cout<<"Enter any number: ";
   cin>>num;
   //function calling
   isEven = checkEven(num); 
   //conditioning
   if(isEven)   
      cout<<num<<" is an even number"; 
   else   
      cout<<num<<" is an odd number";
  
   return 0;
}
//function 
bool checkEven(int num){
   bool x;
   
   if (num % 2 == 0)
      x=true;
   else 
      x=false;

   return x;
}
