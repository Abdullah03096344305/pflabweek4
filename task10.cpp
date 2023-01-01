#include<iostream>
#include<windows.h>
using namespace std;


void task10(string airline,int price,float discount);
 
main()
 {
string airline;
 int price;
 float discount;
task10(airline,price,discount);


 }

void task10(string airline,int price,float discount )
 {


 cout<<"Enter the Name of Country, which you want to Travel"<<endl;
 cout<<"Select from this..."<<endl;
 cout<<"Pakistan "<<endl;
 cout<<"Ireland "<<endl;
 cout<<"India "<<endl;
 cout<<"England"<<endl;
 cout<<"Canada "<<endl;
 cin>>airline;
 cout<<"Enter your Total Ticket Amount: "<<endl;
 cin>>price;
 if(airline=="pakistan")
 {
 
 discount=price-price*0.05;
 cout<<"after discount is:   "<<discount<<endl;
 }

  if(airline=="ireland")
 {
 discount=price-price*0.10;
 cout<<"after discount is:   "<<discount<<endl;
 }

  if(airline=="india")
 {
 discount=price-price*0.20;
 cout<<"after discount is:   "<<discount<<endl;
 }

 if(airline=="england")
 {
 discount=price-price*0.30;
 cout<<"after discount is:   "<<discount<<endl;
 } 

  if(airline=="canada")
 {
 discount=price-price*0.45;
 cout<<"after discount is:   "<<discount<<endl;
 }



 }