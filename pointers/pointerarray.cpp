#include<iostream>
using namespace std;
int main(){
    int numberArrary[5];
    int *pPointer =nullptr;
    pPointer=numberArrary;
    *pPointer=10;
    pPointer++;
    *pPointer=20;
    pPointer=&numberArrary[2];
    *pPointer=30;
    pPointer=numberArrary +3;
    *pPointer=40;
    pPointer=numberArrary;
    *(pPointer+4) =50;
    for(int n=0;n<5;n++){
        cout<<numberArrary[n]<<",";
    }
return 0;

}