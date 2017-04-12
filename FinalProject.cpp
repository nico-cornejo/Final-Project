#include "FinalProject1.h"
#include "quiz.h"
#include "trait.h"
#include "movieList.h"
#include <iostream>
#include <cstring>
#include <string>
MovieChooser test;

//bool exit = false; //For exiting within log in menu
int main()
{
  //Creates linked list to hold user objects
  linked_list<user>* userList = new linked_list<user>;
	
	movieList violent("violent.txt");
	movieList adventure("adventure.txt");
	movieList imaginative("imaginative.txt");
	movieList carefree("carefree.txt");
	movieList pessimistic("pessimistic.txt");
	movieList serious("serious.txt");
	movieList playitsafe("playitsafe.txt");
	movieList thriller("thriller.txt");
	movieList history("history.txt");
	movieList unpredictable("unpredictable.txt");
	movieList violent75("violent75.txt");
	movieList adventure75("adventure75.txt");
	movieList imaginative75("imaginative75.txt");
	movieList carefree75("carefree75.txt");
	movieList pessimistic75("pessimistic75.txt");
	movieList serious75("serious75.txt");
	movieList playitsafe75("playitsafe75.txt");
	movieList thriller75("thriller75.txt");
	movieList history75("history75.txt");
	movieList unpredictable("unpredictable75.txt");

  //This will be the menu used inside the first for loop
while(true) //this is used for creating new user
{
  //if(exit == true){
  //		return 0;
  //		}

  bool logIn = loginMenu(userList);


  while(logIn) //used for when user is inside log in page
  {
    int choice = menu();
    if (std::cin.fail())
    {
      std::cin.clear();
      std::cin.ignore(100,'\n');
    }
    if(!checkInput(choice))
    {
      std::cout << "Incorrect input please input a number 1 through 5" << std::endl;
      continue;
    }
    else //correct input switch
    {
    switch(choice)
    {
      case 1: //quiz section
      std::cout << "Movie Quiz" << std::endl;
      break;
      case 2: //Prints quiz
      std::cout << "Printing Quiz results" << std::endl;
      break;
      case 3: //logs out of system
      std::cout << "Programmer's Top Picks: " << std::endl;
      std::cout << "Pulp Fiction" << std::endl;
      std::cout << "Django Unchained" << std::endl;
      std::cout << "Star Wars, the OG trilogy" << std::endl;
      std::cout << "Lord of the Rings" << std::endl;
      std::cout << "Toy Story" << std::endl;
      std::cout << "Fight Club" << std::endl;
      std::cout << "The Dark Knight" << std::endl;
      std::cout << "The Matrix" << std::endl;
      std::cout << "Hotel Rwanda" << std::endl;
      break;
      case 4:
      std::cout << "Logged Out" << std::endl;
      logIn = false;
      traitlist.resetTraits();
      break;
      case 5: //exits system entirely
      std::cout << "Thank you for using Movie Quiz" << std::endl;
      return 0;
    }
  }
}
}
return 0;
}

//user Class Definitions

user::user(string username, string password){
	this->username = username;
	this->password = password;

}

string user::getUsername(){
	return this->username;

}

string user::getPassword(){
	return this->password;

}

//Test
