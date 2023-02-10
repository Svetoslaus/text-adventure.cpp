#include <iostream>

int main() {

  int start;

  std::cout << "You have the chance to be a movie star like Al Pacino or Robert De Niro.\n";
  std::cout<<"Press 1 to start\n";
  std::cin>>start;
  if(start==1)
{
  std::cout<<"\n";
}
  int press;

  std::cout << "Press 1 if you want to play Al Pacino or press 2 if you want to play Robert De Niro.\n";
  std::cin >> press;
  if (press == 1) {
    std:: cout << "You selected to play as Hanna (Al Pacino)\n";
    std:: cout << "...The face-to-face diner scene confrontation between Neil (Robert De Niro) and Hanna (Al Pacino).";
  } else {
    std:: cout << "You selected to play as Neil(Robert De Niro)\n";
    std:: cout << "...The face-to-face diner scene confrontation between Neil (Robert De Niro) and Hanna (Al Pacino).\n";
  }

  std::cout << "Hanna : You know I have this recurring dream. I’m sitting at this big banquet table and all the victims of all the murders I ever worked are sitting at this table and they’re staring at me with these black eyeballs because they got 8-ball hemorrhages from the head wounds. And there they are, these big balloon people, because I found them two weeks after they’ve been under the bed. The neighbors reported the smell. And there they are, all of ’em, just sitting there.\n";
  std::cout << "Neil: Whadda they say?\n";
  std::cout << "Hanna: Nothing.\n";
  std::cout << "Neil: No talk?\n";
  std::cout << "Hanna: No. Just… they don’t have anything to say. They just look at each other. They look at me. And that’s it, that’s the dream.\n";
  std::cout << "Neil: I have one where I’m drowning. And I gotta wake myself up and start breathing or I’ll die in my sleep.\n";
  std::cout << "Hanna: You know what that’s about?\n";
  std:: cout << "If you play Neil and you want to quit the conversation: press 1. \n If you play Hanna or just don't want to quit the conversation : press 2.\n";
  int choice;
  std::cin >> choice;
  if (choice == 1) {
    std::cout << "Neil: I think we have to quit this. I don't have time for just talking stupid things with a guy like you. I just wanted to know that I am gonna chasing my target till the end of world...\n";
  } else {
     std::cout << "Neil: Yeah. Havin’ enough time.\n";
  }
 
 std::cout << "Hanna: Do you plannig a hit now?\n";
 std::cout << "Neil: Nah, not yet.\n";
 std::cout << "*      *      *\n";

}
