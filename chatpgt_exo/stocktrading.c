#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//Sure, here's an exercise for you:

//Write a program in C that simulates a virtual stock trading platform. The program should be able to:

//Allow users to create an account, log in, and view their account information (balance, portfolio, transaction history).
//Allow users to search for stocks by name or ticker symbol and view the current market price and other relevant information.
//Allow users to buy and sell stocks using their account balance.
//The program should check if the user has enough balance to make the transaction and update their portfolio accordingly.
//Implement a simple algorithm that predicts the future market price of a stock based on historical data and current trends.
//Allow users to view a leaderboard of the top-performing accounts on the platform based on their investment returns.
//Your program should be at least 500 lines long and should use appropriate data structures (such as arrays and linked lists) 
//to store and manage user accounts, stock information, and transaction history. You should also include error handling 
//and user input validation to ensure that the program behaves correctly and does not crash.
//Good luck!
//


struct date{

  int year;
  int month;
  int day;
  int hour;
  int minute;
  int second;

};

struct share {

  int id;
  float buy_price;
  float sell_price;
  int owner_id;

};


struct stock {

  int id;
  char ticker8[8];
  char name32[32];
  float pricef;
  struct date history;
  struct share slice[100];

};

struct credential{

  char username16[16];
  char password16[16];
  int *own_id; 

};

struct usr {

  int id;
  int own_id;
  struct stock account[100];
  double balance;
  char first_name[16];
  char last_name[16];
  struct credential loging;

};


  struct usr  create_account_for_usr(struct usr this){

  this.id = generate_new_usr_id();


return this;
};

































int main(){




  return 0;
}
