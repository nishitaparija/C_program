using namespace std;
#include<conio.h>
#include<stdio.h>
#include<iostream>
class conversion 
{
   public:
   void virtual read()=0;  
   void virtual convert()=0;
   void virtual disp()=0;
};
class weight: public conversion
{
   float k,g; // k= kilogram , g=gram
   public:
   void read()
   {
      cout<<"\nEnter kilogram: ";
      cin>>k;
   }
   void convert()
   {
   	g=k*1000;
   }
   void disp()
   {
   	 cout<<"\nGram is: "<<g;
     cout<<"\n\nKilogram is: "<<k;
   }
};
class volume: public conversion
{
   float l,m; //l= Liter ,m= mililiter
   public:
   void read()
   {
   	cout<<"\nEnter Liter: ";
    cin>>l;
   }
   void convert()
   {
   	m=l*1000;
   }
   void disp()
   {
   	cout<<"\nLiter is: "<<l;
      cout<<"\n\nMililiter is: "<<m;
   }
};
using namespace std;

int main()
{
   weight w; 
   volume v; 
   int ch;
	do
   {
   	cout<<"\nChoose the operation to be performed. ";
   	cout<<"\n1. Convert kilogram to gram\n2. Convert Liter to Mililiter\n3. Exit\nEnter your choice: ";
      cin>>ch;
      switch(ch)
      {
      	case 1:
         	w.read();
                w.convert();
                w.disp();break;
         case 2:
   		 v.read();
   		 v.convert();
 	  	 v.disp();break;
      }
   }while(ch!=4);
}
