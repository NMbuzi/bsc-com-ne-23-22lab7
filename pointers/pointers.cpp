#include<iostream>
using namespace std;
int main(){
    int*pPointer=nullptr;
    int intengervar=5;
    pPointer=&intengervar;
    
    cout<<"intengervar "<<intengervar<<endl;
    cout<<"adress of intengervar:"<<&intengervar<<endl;
    //addimg *on the pointer is called dereferrencing whoch is refering to the variable in the counter
    cout<<"pPointer:"<<*pPointer<<endl;
    cout<<"pPointer:"<<pPointer<<endl;
    //if we add a 1 to th adress of the pointer it takes as to the next intenger value by adding 4 to the intial adress
    cout<<"pPointer :"<<pPointer +1<<endl;
    cout<<"adress of pPointer :"<<&pPointer<<endl;
    *pPointer=5;
    *pPointer++;
   
    cout<<"increment is"<<*pPointer<<endl;
    pPointer++;
    cout<<pPointer<<endl;


    return 0;
}