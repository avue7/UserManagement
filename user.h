#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class User{
  public: 
    User();
    User(string username, string password, int id_num);
    ~User();
    string get_username();
    string get_password();
    int get_id_num();
  private:
    string username;
    string password;
    int id_num;
};
#endif
