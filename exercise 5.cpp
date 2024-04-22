#include<iostream>
using namespace std;
int main(){
    string shape[]= {"1.triangel","2.squre","3.rectangle","4.quite program"};
    cout<<"select shape\n";
    cout<<shape[0]<<endl;
    cout<<shape[1]<<endl;
    cout<<shape[2]<<endl;
    cout<<shape[3]<<endl<<endl;
    cout<<"enter selection:";

    int num;
    cin>>num;
    while(num>4||num<1){
        cout<<"ivalide input try again\n";
        cin>>num;
    }

if(num==1){
    cout<<"anter dimetions of your triangel\n";
    int base;
    int hieght;
    cout<<"entener base and height"<<endl;
    cin>>base;
    cin >>hieght;
    int triarea=0.5*base*hieght;
    cout<<"your area for trangel is "<<triarea<<"cm"<<endl;

}
if (num==2){
    cout<<"enter dimessions of squre\n";
    double widith;
    double length;
    cout<<"enter the length and  widith\n";
    cin >>widith>>length;
    double squrearea=widith*length;
    cout<<"your area of the squre is " <<squrearea<<"cm"<<endl;
}
if (num==3){
   cout<<"enter the dimessions of rectangel\n";
   double length; 
   double height;
   cout<<"enter length and heigth of your rectangel\n";
   cin>>length>>height;
   double recarea=length*height;
   cout<<"the area of the rectangel is "<<recarea<<"cm"<<endl;
}
else if(num==4){
    cout<<"you have quite the pg\n";
}
return 0;
}