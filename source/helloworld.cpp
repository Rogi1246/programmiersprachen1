#include <iostream>

int main()
{
  std::cout << "Test";
  bool found = false;
  int i = 0;
  while(!found){
      for(int c = 1; c < 21; c++){
      found = true;
      if(i == 0 || i % c != 0){
        i += 20;
        found = false;
        break;
      }
    }
  }
  std::cout << i;
  return 0;
}