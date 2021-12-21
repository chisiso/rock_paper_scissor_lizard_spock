//Rock paper scissor lizard spock
#include <iostream>
#include <stdlib.h>
 
int main() {
 
  // Live long and prosper
srand (time(NULL));
 
int computer = rand() % 5 + 1;
 
int user = 0;

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";
 
std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";
std::cout << "4) 🦎\n";
std::cout << "5) 🖖\n";
 
std::cout << "shoot! ";

std::cin>>user;

if (user==computer){
  std::cout<<"Draw!";
}
else {
  switch(user){
    case 1:
     if(computer==3 || computer==4){
       std::cout<<"Win!";
     }
     else{
       std::cout<<"Lost!";
     }
     break;
     case 2:
     if(computer==1 || computer==5){
       std::cout<<"Win!";
     }
     else{
       std::cout<<"Lost!";
     }
     break;
     case 3:
     if(computer==2 || computer==4){
       std::cout<<"Win!";
     }
     else{
       std::cout<<"Lost!";
     }
     break;
    case 4:
     if(computer==2 || computer==5){
       std::cout<<"Win!";
     }
     else{
       std::cout<<"Lost!";
     }
     break;
     case 5:
     if(computer==1 || computer==3){
       std::cout<<"Win!";
     }
     else{
       std::cout<<"Lost!";
     }
     break;
  }
}

}