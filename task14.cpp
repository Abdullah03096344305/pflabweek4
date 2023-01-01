#include<iostream>
using namespace std;
void f1();
void f2();
void f3();
void f4();
void f5();

int choice;
 string name1,name2;
 float matric1,matric2,inter1,inter2,ecat1,ecat2,aggregate1,aggregate2;


main()
 {
while(true)
{

 



cout<<"**************************************************"<<endl;
cout<<"                                                  "<<endl;
cout<<"   UET LAHORE ADMISSION MANAGEMENT SYSTEM         "<<endl;
cout<<"                                                  "<<endl;
cout<<"**************************************************"<<endl;

cout<<"WELCOME TO UET LAHORE"<<endl;
cout<<"Press 1 to Enter Detaisls of First Student: "<<endl;
cout<<"Press 2 to Enter Detaisls of Second Student: "<<endl;
cout<<"Press 3 to calculate the aggregate of first student: "<<endl;
cout<<"Press 4 to calculate the aggregate of first student: "<<endl;
cout<<"Press 5 to display the student with rollnumber: "<<endl;
cout<<"Enter Choice";
cin>>choice;

if(choice==1)
 {
f1();
 }


if(choice==2)
 {
f2();
 }

if(choice==3)
 {
f3();
 }

if(choice==4)
 {
f4();
 }

if(choice==5)
 {
f5();
 }
 
}

}



void f1()
 {


cout<<"You Choosed..  "<<choice<<endl;
cout<<"Enter your name:  ";
cin>>name1;
cout<<"Enter your Matric Marks(out of 1100): ";
cin>>matric1;
cout<<"Enter your Inter Marks(out of 550):  ";
cin>>inter1;
cout<<"Enter Your Ecat Marks(out of 400):  ";
cin>>ecat1;


 }

void f2()
 {


cout<<"You Choosed..  "<<choice<<endl;
cout<<"Enter your name:  ";
cin>>name2;
cout<<"Enter your Matric Marks(out of 1100): ";
cin>>matric2;
cout<<"Enter your Inter Marks(out of 550):  ";
cin>>inter2;
cout<<"Enter Your Ecat Marks(out of 400):  ";
cin>>ecat2;

 }

void f3()
 {
 
aggregate1=(matric1*30/1100)+(inter1*30/550)+(ecat1*40/400);
cout<<"Aggregate= "<<aggregate1<<endl;


 }

void f4()
 {

aggregate2=(matric2*30/1100)+(inter2*30/550)+(ecat2*40/400);
cout<<"Aggregate= "<<aggregate2<<endl;


 }

void f5()
 {





if(aggregate1>aggregate2)
{
cout<<"your roll no is 01"<<endl;
}

if(aggregate2>aggregate1)
{
cout<<"your roll no is 01"<<endl;
}

 }