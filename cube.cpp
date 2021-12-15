#include <iostream>

int main() {

  float cubeNum;
  char response;

  std::cout << "  WELCOME TO THE 'FIND OUT THE CUBE.' YOU CAN TYPE IN ANY TYPE OF NUMBER THEN PRESS ENTER AND THEN YOU CAN SEE THE CUBE OF THAT NUMBER.\n";
  std::cout << "----------------------------------------------------------------------------------------------------------------------------------------\n";
  std::cout << "  Do you want to continue? (type - Y for yes or N for no) : ";
  std::cin >> response;
  std::cout << "-----------------------------------------------------------\n";

  if (response == 'Y') {

    std::cout << "Ok, please type any type of number : ";
    std::cin >> cubeNum;
    std::cout << "--------------------------------------\n";
    std::cout << "The cube of " << cubeNum << " is : " << cubeNum * cubeNum * cubeNum << "\n";
    std::cout << "-------------------------------------------------\n";
    std::cout << "    Thank you for using 'FIND OUT THE CUBE.'\n";

  }
  else if (response == 'N') {

    std::cout << "Ok, see you next time!\n";

  }
  else {

    std::cout << "You can only type Y for yes or N for no to continue. Type ./a.out to start over again.\n";
  }
}
