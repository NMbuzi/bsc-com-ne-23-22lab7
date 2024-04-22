#include<iostream>
using namespace std;
int main(){
    int numberofelements=0;
    int * dynamicArrary=nullptr;
    cout<<"HOW MANY NUMBERS WOULD YOU LIKE TO TYPE";
    cin>>numberofelements;
    dynamicArrary=new int[numberofelements];
    if (dynamicArrary==nullptr){
        cout<<"Error: memory could not be allocated";
    }
    else{
        for(int i=0;i<numberofelements; i++){
            cout<<"ENTER NUMBER: ";
            cin>>dynamicArrary[i];
        }
        cout<<"you have entered: ";
        for(int j=0;j<numberofelements; j++){
            cout<<dynamicArrary[j]<<",";

        }
        delete[]dynamicArrary;

        return 0;
    }

}