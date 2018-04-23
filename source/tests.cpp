#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>


int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}


int binomial(int n, int k){
  int result = 1;
    if ( k > n - k ) {k = n - k;}
        if (k > n){ return -1; }
 
    for (int i = 0; i < k; ++i)
    {
        result *= (n - i);
        result /= (i + 1);
    }

   return result;
std::cout << result; 
 
}

TEST_CASE("binomial", "[bin]") {
  REQUIRE(binomial(8,2) == 28);
  REQUIRE(binomial(6,3) == 20);
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

TEST_CASE("describe_gcd", "[gcd]") {
  REQUIRE(gcd(2, 4) == 2);
  REQUIRE(gcd(9, 6) == 3);
  REQUIRE(gcd(3, 7) == 1);
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

TEST_CASE("checksum", "[checks]") {
  REQUIRE(checksum(18) == 9);
  REQUIRE(checksum(24) == 6);
  REQUIRE(checksum(117380) == 20);
}

float fract(float k){
  while(k > 1){
    k = k-1;

  }
  return k;
}

TEST_CASE("fract", "[fr]"){
  REQUIRE(fract(5.5643256) == Approx(0.5643256));
}

int sumMultiples(){
  int sum = 0;
  for(int i = 0; i<=1000; i++){
    if(i%3 == 0 || i%5 == 0 ) {
      sum += i;
    } 
  }
  return sum;
}

TEST_CASE("sumMultiples", "[Mult]"){
  REQUIRE(sumMultiples()==234168);
}

int factorial(int f){
  int fac = 1;

  if (f > 0){
  for (int i = 1; i <= f; i++){
    fac*= i;
  }
    return fac;
    }
  }

  TEST_CASE("factorial","[fac]"){
    REQUIRE(factorial(3)==6);
    REQUIRE(factorial(2)==2);
  }

  int is_prime(int toTest){
    if(toTest <= 1 || toTest % 2 == 0){
      return  0;
    }

    else if(toTest == 2){
      return  1;
    }

    for(int i = 3; i<toTest; i++){
      if(toTest % i == 0){
        return 0;
      }
    }
  return 1; 
    }

  TEST_CASE("is_prime", "[pri]") {
    REQUIRE(is_prime(3)==1);
    REQUIRE(is_prime(6)==0);
  }


double theCylinderVol(double rad, double hght){
 double pi = acos(-1);
 double volume = 0;


double rad_sq = rad*rad;
volume = pi * rad_sq * hght;

return volume;

}

TEST_CASE("theCylinderVol","[cyl]") {
  REQUIRE(theCylinderVol(12.0, 3.0) == Approx(1357.17));
}

double theCylinderSur(double rad, double hght){
  double pi = acos(-1);
  double sfce = 0;
 
 
 double rad_sq = rad*rad;
 sfce = pi * 2 * rad*(rad + hght);
 
 return sfce;
 
 }
 
 TEST_CASE("theCylinderSur","[sur]") {
   REQUIRE(theCylinderSur(12.0, 3.0) == Approx(1130.97));
 }
 