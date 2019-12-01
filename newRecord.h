#include <cstdlib>

#include <iostream>
#include <limits>
#include <string>
#include <vector>
#include <queue>
#include <map>
using namespace std;

void account::create_account()
{
   cout<<"\nEnter The account No. : ";
   cin>>acno;
   cout<<"\n\nEnter The Name of The account Holder : ";
   cin.ignore();
   cin.getline(name,50);
   cout<<"\n\nEnter The Address of The account Holder : ";
   cin.ignore();
   cin.getline(address,500);
   cout<<"\nEnter The Account Holder Mobile Number : ";
   cin>>acnum;
   cout<<"\nEnter Type of The account (C/S) : ";
   cin>>type;
   type=toupper(type);
   cout<<"\nEnter The Initial amount(>=500 for Saving and >=1000 for current ) : ";
   cin>>deposit;
   cout<<"\n\n\nAccount Created..";
}

void write_account()
{
   account ac;
   ofstream outFile;
   outFile.open("account.txt",ios::binary|ios::app);
   ac.create_account();
   outFile.write(reinterpret_cast<char *> (&ac), sizeof(account));
   outFile.close();
}
