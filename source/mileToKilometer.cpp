#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  
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

