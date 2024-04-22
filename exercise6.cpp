#include<iostream>
#include<fstream>
#include<string>
#include<bits/stdc++.h>
#include<algorithm>
#include<cctype>
using namespace std;
int main(){
    string filedata ;
    ofstream myfile("computer.txt") ;

    if (myfile.is_open());
    {
        myfile<<"This is the advance computer programming module"<<endl;
        myfile.close();
        string filedata="This is the advance computer programming module";
        cout<<filedata.length()<<endl;
        reverse(filedata.begin(), filedata.end());
        cout<<filedata;
        filedata=toupper(filedata[1]),toupper(filedata[5]),toupper(filedata[7]),toupper(filedata[14]),toupper(filedata[22]),toupper(filedata[33]);
        cout<<filedata<<endl;
        

    }
    

    return 0;
    
}