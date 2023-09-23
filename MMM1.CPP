#include<iostream.h>
#include<conio.h>
void main()
{
  int a ,b ;
  float ans;
		cout<<"Enter your 2 value";
		 cin >> a >> b;
		 try
		 {
		   if(b==0)
		   {
		     throw b;
		   }
		   else
		   {
		     ans = a/b;
		     cout << ans;
		   }
		 }
		 catch(int e)
		 {
		   cout << "Enter your valide data";
		 }


 getch();
}