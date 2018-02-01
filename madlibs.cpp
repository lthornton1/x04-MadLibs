//Authors: Logrn Thornton 
#include <iostream>
#include <string>

int main(){
  std::string noun;                                    
  std::string activity;                              
  char letter;
  int num1;
  int num2;

  std::cout << "Welcome to a fun game of MADLIBS" << std::endl;
  std::cout << "Please enter a noun" << std::endl;
  std::cin >> noun;
  std::cout << "Please enter a number" << std::endl;
  std::cin >> num1;
  std::cout << "Please enter a activity" << std::endl;
  std::cin >> activity;
  std::cout << "Please enter a number" << std::endl;
  std::cin >> num2;
  std::cout << "Please enter a letter" << std::endl;
  std::cin >> letter;

  std::cout << "One day, I lie awake staring at the " << noun << " counting down the " << num1 << " sheep I always count " <<
    "before bed.\nOnce I finish counting I then " << activity << " for " << num2 << " minutes while thinking about my " <<
    "favorite letter of the alphabet, " << letter << ".\nThen I can finally sleep." << std::endl;

  return 0;
}
