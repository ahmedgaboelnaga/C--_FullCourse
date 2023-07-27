#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
  int num;
  int guess;
  int tries = 0;

  srand(time(NULL));
  num = (rand() % 100) + 1;
  // for (int i = 0; i < 10; i++)
  // {
  //   std::cout << (rand() % 10) + 1 << std::endl;
  // }

  std::cout << "********NUMBER GUESSING GAME*********" << std::endl;
  std::cout << num << std::endl;
  do{
    std::cout << "Guess a number: ";
    std::cin >> guess;
    tries++;

    if (guess > num + 5){
      std::cout << "Too high!" << std::endl;
    }
    else if (guess < num - 5){
      std::cout << "Too low!" << std::endl;
    }
    else if ( guess == num){
      std::cout << "You won!" << std::endl;
    }
  } while (guess != num && tries < 3); 
  if ((tries == 3 || tries > 3) && guess != num){
    std::cout << "You lost stupid!" << std::endl;
  }

  return 0;
}