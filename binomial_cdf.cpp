#include <iostream>
#include <math.h>

long long int factorial(int n)
{
  long long int n_f = 2;
  for (size_t i = 3; i <= n; i++)
  {
    n_f *= i;
  }
  return n_f;
}

long double binomial_cd(int n, int k1, int k2, float p)
{
  long double ans = 0;
  for (size_t i = k1; i <= k2; i++)
  {
    ans += factorial(n) / (factorial(i) * factorial(n - i)) * pow(p, i) * pow(1 - p, n - i);
    std::cout << ans << std::endl;
  }
  return ans;
}

int main()
{
  unsigned int n, k1, k2;
  float p;
  float ans = 0;
  std::cin >> n >> k1 >> k2;
  std::cin >> p;

  std::cout << std::endl
            << binomial_cd(n, k1, k2, p);

  return 0;
}