#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void A();

void B();

void D();

void U();

void L();



main(){
system("cls");
gotoxy(15,15);
A();
gotoxy(15,15);
B();
gotoxy(15,15);
D();
gotoxy(15,15);
U();
gotoxy(15,15);
L();



}


void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void A(){
gotoxy(15,15);
cout<<"       *             "<<endl;
gotoxy(15,15);
cout<<"      *  *            "<<endl;
gotoxy(15,15);
cout<<"     *    *           "<<endl;
gotoxy(15,15);
cout<<"    * **** *          "<<endl;
gotoxy(15,15);
cout<<"   *        *         "<<endl;
        }

void B(){
cout<<endl;
gotoxy(15,15);
cout<<"   *****              "<<endl;
gotoxy(15,15);
cout<<"   *    *              "<<endl;
gotoxy(15,15);
cout<<"   *****                 "<<endl;
gotoxy(15,15);
cout<<"   *    *              "<<endl;
gotoxy(15,15);
cout<<"   *****                 "<<endl;
        }

void D(){
cout<<endl;
gotoxy(15,15);
cout<<"   ****                 "<<endl;
gotoxy(15,15);
cout<<"   *   *              "<<endl;
gotoxy(15,15);
cout<<"   *    *             "<<endl;
gotoxy(15,15);
cout<<"   *   *              "<<endl;
gotoxy(15,15);
cout<<"   ****                 "<<endl;
        }

void U(){
cout<<endl;
gotoxy(15,15);
cout<<"   *    *             "<<endl;
gotoxy(15,15);
cout<<"   *    *             "<<endl;
gotoxy(15,15);
cout<<"   *    *             "<<endl;
gotoxy(15,15);
cout<<"   *    *             "<<endl;
gotoxy(15,15);
cout<<"   ******                 "<<endl;
        }

void L(){
cout<<endl;
gotoxy(15,15);
cout<<"   *                 "<<endl;
gotoxy(15,15);
cout<<"   *                 "<<endl;
gotoxy(15,15);
cout<<"   *                 "<<endl;
gotoxy(15,15);
cout<<"   *                 "<<endl;
gotoxy(15,15);
cout<<"   ******                 "<<endl;
        }
