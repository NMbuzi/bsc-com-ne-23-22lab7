#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
    srand(time(0));
    int dayuntillexpiration=rand()%11;
    switch(dayuntillexpiration){
        case 10: cout<<"your subscription will expire soon renew now\n";break;
        case 9: cout<<"your subscription will expire soon renew now\n";break;
        case 8:cout<<"your subscription will expire soon renew now\n";break;
        case 7:cout<<"your subscription will expire soon renew now\n";break;
        case 6:cout<<"your subscription will expire soon renew now\n";break;
        case 5: cout<<"your subscripition will expire in "<<dayuntillexpiration<<" days/day renew now ans save 10%\n";break;
        case 4:cout<<"your subscripition will expire in "<<dayuntillexpiration<<" days/day renew now ans save 10%\n";break;
        case 3:cout<<"your subscripition will expire in "<<dayuntillexpiration<<" days/day renew now ans save 10%\n";break;
        case 2:cout<<"your subscripition will expire in "<<dayuntillexpiration<<" renew now ans save 10%\n";break;    
        case 1:cout<<"your subscription will expire in a day Renew now and save 20%\n";break;
        case 0: cout<<"your sudscription has now expired\n";break;
        default:cout<<"you have actve subscription\n";break;
    }
        return 0;
    
}