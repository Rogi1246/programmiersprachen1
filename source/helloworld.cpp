#include <iostream>
#include <cmath>
using namespace std;


int binomial(int n, int k);
int gcd(int a, int b);
int checksum(int);
int sumMultiples();
int factorial(int);
int is_prime(int);
double theCylinder();
double mileConvert();

int main()
{
  std::cout << "Hello, World2!\n";
  std::cout << binomial(7,5) << "\n";
  std::cout << checksum(117380) << "\n";
  std::cout << gcd(15,50) << "\n";
  std::cout << sumMultiples() << "\n";
  std::cout << is_prime(10) << "\n";
  std::cout << factorial(5) << "\n";
  cout << theCylinder() << "\n";
  cout << mileConvert() << "\n";
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
std::cout << result; 
 
}


int gcd(int a, int b){
  int result;
  if (a!=b){

    while (a > 0 && b > 0){
      if (a>b){
        a = a%b;
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
  }
  std::cout<<sum;
}

int factorial(int f){
  int fac = 1;

  if (f > 0){
  for (int i = 1; i <= f; i++){
    fac*= i;
  }
  std::cout<< endl << "Factorial of "<< f << " is " << fac << endl; 
    return 0;
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
  cout<<"If 1 = number is prime, If 0 = number is not prime!";

    }


double theCylinder(){
 double pi = acos(-1);
 double volume = 0;
 double sfce = 0;
 double rad; 
 double hght;

cout << "Gimme dat Radius  " ;
cin >> rad;
cout << "And dat height  " ;
cin >> hght;

double rad_sq = rad*rad;
volume = pi * rad_sq * hght;
sfce = pi * 2 * rad*(rad + hght);

cout << endl << "The voulume is " << volume << " the surface is " << sfce << endl;
return 0;

}

double mileConvert(){
  double km;
  double miles;
  const double KM_PER_MI = 1.6093;

  cout << "Enter miles to convert "; 
  cin >> miles;

  if(miles <= 0 ) {
    return 0; 
    cout << "must be positive number, try again ";
      }

  else{
    km = miles * KM_PER_MI; }
  cout << endl << "Entered miles in kilometers are : " << km << endl;
  return 0;
  }