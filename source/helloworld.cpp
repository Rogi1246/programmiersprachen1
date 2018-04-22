#include <iostream>
#include <cmath>

int binomial(int n, int k);
int gcd(int a, int b);
int checksum(int);
int sumMultiples();
int factorial(int);
int is_prime(int);

int main()
{
  std::cout << "Hello, World2!\n";
  std::cout << checksum(16) << "\n";
  std::cout << gcd(2,20) << "\n";
  std::cout << sumMultiples() << "\n";
  std::cout << is_prime(10) << "\n";
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

int binomial(int n, int k){
  int result = 1;
    if ( k > n - k )
        k = n - k;
 
    for (int i = 0; i < k; ++i)
    {
        result *= (n - i);
        result /= (i + 1);
    }
 
    return result;
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
  int tmpSum = 0;
  int tmpM = m;

  while(tmpM / 10 != 0){
    tmpSum += tmpM % 10;
    tmpM = tmpM / 10;
  }
  tmpSum += tmpM % 10;

  return tmpSum;
  std::cout<<tmpSum;
}

int sumMultiples(){
  int sum = 0;
  for(int i = 0; i<=1000; i++){
    if(i%3 == 0 || i%5 == 0 ) {
      sum += i;
    }
    return sum;
    std::cout<<sum;
  }
}

int factorial(int f){
  int fac = 1;

  if (f > 0){
  for (int i = 1; i <= f; i++){
    fac*= i;
  }
  return fac;
  std::cout<<"Factorial of "<< f << fac; 
    }
  }

  int is_prime(int toTest){
    if(toTest <= 1 || toTest % 2 == 0){
      return 0;
    }

    else if(toTest == 2){
      return 1;
    }

    for(int i = 3; i<toTest; i++){
      if(toTest % i == 0){
        return 0;
      }
    }
  return 1; 
  std::cout<<"If 1 = number is prime, If 0 = number is not prime!";

    }
