
#include "user.h"


int main()
{
  std::string user, pass;
  int num = 0;
  int size = 2;
  vector<User> users(size);

  do
  {
    cout<<"Enter new username or q to quit: ";
    cin>>user;
    if (num == size){
      users.resize(size+1);
    }

    if( user != "q" && user != "Q" )
    {
      cout<<"\nEnter password: ";
      cin>>pass;
      num++;
      users.push_back(User(user, pass, num));
    }
  }while( user != "q" && user != "Q" );
  cout<<endl<<"Users created: "<<users.size()-1<<endl;

  return 0;
}
