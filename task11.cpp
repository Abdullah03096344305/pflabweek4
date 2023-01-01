#include<iostream>
#include<windows.h>
using namespace std;

void task11(int speed);

main()
 {
 
int speed;
task11(speed);




 }



void task11(int speed)
 {
 cout<<"enter Car Speed"<<endl;
 cin>>speed;
 
if(speed>100)
 {
 cout<<"Halt......YOU WILL BE CHALLENGED!!!"<<endl;
 }

 if(speed<=100)
 {
 cout<<"PERFECT! YOU're going good."<<endl;
 }



 }