#include<iostream>
using namespace std;
#include<stdio.h>
#include<fstream>	
int main()
{ string st,c,M,T;
  double L,k,F;
  ofstream fout("DATABASE.txt");
   cout<<"ENTER TOTAL NUMBER OF PEOPLES:\t";
   cin>>L;
   cout<<"\n\n";
   cin.ignore();
   for(int i=0;i<L;++i)
   { cout<<"enter the person's "<<i+1<<" name:\t";
     getline(cin,c);
     cout<<"\nenter the qualification grade of this person:\t";
     getline(cin,st);
   	cout<<"\n\nenter the description of this person:\t";
   	getline(cin,M);
   	cout<<"\nENTER THE TOTAL AMOUNT THE PERSON HAS:\t";
   	cin>>k;
      cin.ignore();
	   cout<<"TELL THE CURRENCY:\t";
	   getline(cin,T);
   	fout<<"srno.: "<<i+1<<"\t\t"<<"PERSON'S NAME: "<<c<<"\t\t"<<"QUALIFICATION GRADE: "<<st<<"\t\t"<<"DESCRIPTION: "<<M<<"\t\t\t"<<"AMOUNT: "<<k<<" "<<T;
   	fout<<"\n";
   	cout<<"\n\n";
   }
   char b;
   fout.close();
   cout<<"press any key to continue: ";
   cin>>b;
   return 0;
}

 
