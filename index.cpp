#include <iostream>
#include <ctime>
using namespace std;
 
char userChoice() 
{

    char player;
    cout << "Rock-Paper-Scissors Game!\n";

    do {
      cout << "Choose one of the following\n";
      cout << "*************************\n";
      cout << "'r' for Rock\n";
      cout << "'p' for Paper\n";
      cout << "'s' for Scissors\n";
      cin >> player;
    }while (player != 'r' && player != 'p' && player != 's');
    

  return player;
}

char computerChoice()
{
  srand(time(0));
  int num = rand() % 3 + 1;

  switch (num)
  {
  case 1: return 'r';
         break;
  case 2: return 'p';
         break;
  case 3: return 's';
         break;
  default:
    break;
  }
 return 0;
}

void showChoice(char choice) 
{
 switch (choice)
 {
 case 'r': cout << "Rock\n";
    break;
 case 'p': cout << "Paper\n";
    break;
 case 's': cout << "Scissors\n";
    break;
 default:
  break;
 }
}
void chooseWinner(char player, char computer) 
{
 
 switch (player)
 {
 case 'r':   if (computer == 'r') {
               cout << "It's a tie!\n";  
             } else if (computer == 'p') {
               cout << "You lose!\n";
             } else {
               cout << "You win!\n";
             }
        break;
 case 'p':   if (computer == 'r') {
               cout << "You win\n";  
             } else if (computer == 'p') {
               cout << "It's a tie!\n";
             } else {
               cout << "You lose!\n";
             }
        break;
 case 's':   if (computer == 'r') {
               cout << "You lose!\n";  
             } else if (computer == 'p') {
               cout << "You win!\n";
             } else {
               cout << "It's a tie!\n";
             }
        break;
 default:
  break;
 }
}

 
int main() {
  
  char player;
  char computer;

  player = userChoice();
  cout << "Your choice: ";
  showChoice(player);
   
  computer = computerChoice();
  cout << "Computer's choice: ";
  showChoice(computer);


  chooseWinner(player,computer);
   return 0;
};