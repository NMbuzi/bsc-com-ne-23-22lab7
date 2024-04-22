#include<iostream>
using namespace std;
int main()
{
    int number1=5;
    int number2=10;
    int intenger;
    string letter;

      cout<<"enter intenger between 5and 10\n";
        cin>>intenger;

if (intenger>=number1 && intenger<=number2)
    {
        cout<<"you have entered a valide number\n";
    }
    
    while (intenger<=number1||intenger>=number2)
   {
      if(isdigit(intenger)){
        
       }
       else{
        cout<<"sorry you entered an in valide number please try again\n";
        cin >>intenger;
       break;
      }
        cin>>intenger;
    if (intenger<number1||intenger>number2){

     cout<<"sorry you entered an in valide number please try again \n";
     }
       cin>>intenger;

       if (intenger>=number1&& intenger<=number2){
        
        cout<<"your input "<<intenger<<" has been accepted"<<endl;

       }
      
  
    
      

   }
    
    return 0;
} 