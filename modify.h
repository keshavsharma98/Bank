void account::modify()
{
   cout<<"\nAccount No. : "<<acno;
   cout<<"\nModify Account Holder Name : ";
   cin.ignore();
   cin.getline(name,50);
   cout<<"\nModify Type of Account : ";
   cin>>type;
   type=toupper(type);
   cout<<"\nModify Balance amount : ";
   cin>>deposit;
}
