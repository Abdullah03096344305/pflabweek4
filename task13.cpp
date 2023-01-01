#include<iostream>
using namespace std;

void task13();




main()
 {

task13();



 }

void task13()
 {
int holiday,sleep,workingdays,playtime,differnce,final;
cout<<"Enter Number Of Holidays:  ";
cin>>holiday;
workingdays=365-holiday;
playtime=(workingdays*63+holiday*127);
differnce=30000-playtime;
final=differnce*1/60;
if(holiday<30)
 {
 cout<<"TOM Sleeps Well... "<<endl;
 cout<<final<<"   hours less for play";
 }
if(holiday>30)
 {
 cout<<"TOM Will Run Away..."<<endl;
 cout<<final<<"   hours  for play";


 }


 }