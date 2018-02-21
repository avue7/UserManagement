#include "user.h"
User::User(){
  this->username = " ";
  this->password = " ";
  this->id_num = 0;
}
User::User(string username, string password, int id_num){
  this->username = username;
  this->password = password;
  this->id_num = id_num;
}
User::~User(){
}
string User::get_username(){
  return username;
}
string User::get_password(){
  return password;
}
int User::get_id_num(){
  return this->id_num;
}
