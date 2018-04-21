#include <iostream>
#include <cmath>

int binomial(int);
int gcd(int a, int b);
int checksum(int);

int main()
{
  std::cout << "Hello, World2!\n";
  std::cout << binomial(6) << "\n";
  std::cout << gcd(20,2) << "\n";
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

int binomial(int p){
  return 5 + p;
}

int gcd(int a, int b){
  int result;
  if (a!=b){

    while (a > 0 && b > 0){
      if (a>b){
        a = a&b;
      }
      else if (b > a){
        b = b%a;
      }
    }
  }
if (a > 0) result = a;
if (b > 0) result = b;
if (a == b) result = a/b;
  return result;

}

int checksum(int m){
  
}