#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int daysuntillexpiration=rand()%11;

    if(daysuntillexpiration<=10){
        cout<<"your subscription will expire soon.Renew now\n";
    }
 if(daysuntillexpiration<=5){
      cout<<"your subscription expires in " << daysuntillexpiration<<" days " <<"Renew now and save 10%\n";
   }
    else if(daysuntillexpiration==1){
        cout<<"your subscription expires within a day! Renew now and save 20%\n";
    }
    if(daysuntillexpiration==0){
       cout<<"your subscription has expired\n";
   }
if(daysuntillexpiration>10){
       cout<<"you have an active subscription\n";
   }

return 0;

} // namespace 

