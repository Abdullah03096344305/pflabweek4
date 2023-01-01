#include<iostream>
#include<windows.h>
using namespace std;

void task12();


main()
 { 
task12();


 }


void task12()
 { 
int red;
int white;
int tulips;
int discount;
int total;
 cout<<"we have three types of flowers:   RED ROSE,WHITE ROSE,TULIPS"<<endl;
 cout<<"Enter Number of RED ROSES:  ";
 cin>>red;
 cout<<"Enter Number of WHITE ROSES:  ";
 cin>>white;
 cout<<"Enter Number of TULIPS:  ";
 cin>>tulips;
 total=red+white+tulips;
 cout<<"Your original total price is:  "<<total<<endl;
 
 if(total>200)
 {
 discount=total-total*0.20;
 cout<<"Price After Discount is"<<discount<<endl;

 }
 }