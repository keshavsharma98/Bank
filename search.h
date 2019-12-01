
void account::show_account() const
{
   cout<<"\nAccount No. : "<<acno;
   cout<<"\nAccount Holder Name : ";
   cout<<name;
   cout<<"\nAccount Holder Addresss : ";
   cout<<address;
   cout<<"\nAccount Holder Phone Number : ";
   cout<<acnum;
   cout<<"\nType of Account : "<<type;
   cout<<"\nBalance amount : "<<deposit;
}

   
void account::report() const
{
   cout<<acno<<setw(10)<<" "<<name<<"              "<<acnum<<setw(10)<<" "<<type<<setw(6)<<deposit<<setw(10)<<" "<<address<<endl;
}
   
int account::retacno() const
{
   return acno;
}

string account::retacname() const
{
   return name;
}

int account::retdeposit() const
{
   return deposit;
}

char account::rettype() const
{
   return type;
}


