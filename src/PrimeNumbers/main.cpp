#include <iostream>
#include <vector>
#include <cmath>
#include <chrono>

using namespace std;
using namespace chrono;

bool isPrimeNumber(const vector<unsigned long long>& primes, unsigned long long n) {
  unsigned long long p = sqrt(n);
  for (unsigned long long prime : primes) {
    if (prime > p)
      break;
    if (n % prime == 0)
      return false;
  }
  return true;
}

vector<unsigned long long> getNFirstPrimeNumbers(unsigned int n)
{
  vector<unsigned long long> primes;
  if (n < 1)
    return primes;
  primes.push_back(2);
  unsigned long long i = 3;
  while (primes.size() < n) {
    if (isPrimeNumber(primes, i))
      primes.push_back(i);
    i+= 2;
  }
  return primes;
}


int main()
{
  high_resolution_clock::time_point start, end;
  unsigned int n;
  cout << "Enter a number of prime numbers to get : ";
  cin >> n;
  vector<unsigned long long> primes;
  start = high_resolution_clock::now();
  primes = getNFirstPrimeNumbers(n);
  end = high_resolution_clock::now();

  cout << "Time taken to get " << n << " prime numbers is : " << duration_cast<milliseconds>(end - start).count() << " milliseconds" << endl;

  // cout << "The first " << n << " prime numbers are : " << endl;
  // for (unsigned long long i = 0; i < primes.size(); i++)
  //   cout << primes[i] << " ";
  // cout << endl;

  return 0;
}
