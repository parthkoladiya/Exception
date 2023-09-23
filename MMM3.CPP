#include<iostream.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 cout << "Enter your 2 value";
 cin >> a >> b;
 try
 {
    throw b;
 }
 catch(...)
 {
   cout << "Enter your valide value" ;
 }

 getch();
}