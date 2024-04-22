#include<iostream>
using namespace std;
int main(){
    string mylist[]={"B123","C234","A345","C15","B177","G3003","C235","B179"};
    for(int i=0;i<8; i++)
    {
            cout<<mylist[i]<<endl;
        
        if(i=4){
            cout<<mylist[i]<<endl;
        }
        if (i=7){
            cout <<mylist[i]<<endl;
        }
    }
    return 0;
}