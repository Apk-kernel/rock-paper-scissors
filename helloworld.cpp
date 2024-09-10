#include <iostream>
#include <ctime>
#include <cmath>
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);
using namespace std;

int main(){
char player;
char computer;

player = getUserChoice();

cout<<"Your Choice: ";

showChoice(player);


computer = getComputerChoice();

cout<<"Computer's Choice: ";

showChoice(computer);


chooseWinner(player, computer);
    return 0;
}
char getUserChoice(){
    char player;

    cout<<"Rock Paper Scissors\n";
    do{cout<<"'r' for rock\n"<<"'p' for paper\n"<<"'s' for scissor\n";cin>>player;}
    while(player!='r'&&player!='s'&&player!='p');
    
    return player;
}



char getComputerChoice(){
srand(time(0));
int num =rand()%3+1;
switch(num){
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
}
    return 0;
}
void showChoice(char choice){
    switch(choice){
        case 'r': cout<<"Rock\n";
            break;
        case 'p':cout<<"Paper\n";
            break;
        case 's':cout<<"Scissors\n";
            break;
        default:cout<<"enter valid choice";
    }
}
void chooseWinner(char player, char computer){
switch(player){
    case 'r':   if(computer == 'r'){cout<<"It is a tie!!!";}
                else if(computer == 'p'){cout<<"You Lose!!!";}
                else {cout<<"You Win!";}
                break;
    case 'p':   if(computer == 'p'){cout<<"It is a tie!!!";}
                else if(computer == 's'){cout<<"You Lose!!!";}
                else {cout<<"You Win!";}
                break;
    case 's':   if(computer == 's'){cout<<"It is a tie!!!";}
                else if(computer == 'r'){cout<<"You Lose!!!";}
                else {cout<<"You Win!";}
                break;
}
}