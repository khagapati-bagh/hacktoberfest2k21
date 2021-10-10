/* 
Author : Aman Agarwal
Date : 10/10/2021
Description : Euclidean Algorithm and It's Application.

The Euclidean algorithm, discussed below,
allows to find the greatest common divisor
of two numbers a and b in "O(logmin(a,b))".
The algorithm was first described in Euclid's
"Elements" (circa 300 BC), but it is possible
that the algorithm has even earlier origins.

I used the same concept to solve CodeForces Round 81 D. Same GCDs
Overall Time Complexity : O(sqrt(n))
*/

#include <bits/stdc++.h>

using namespace std;

long long n, m, t, k = 0, a, l, p;

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}
int main() {
  cin >> t;
  while (t--) {
    cin >> a >> m;
    n = m / gcd(a, m);
    k = n;
    for (long long i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        k /= i;
        k *= (i - 1);
        while (n % i == 0) {
          n /= i;
        }
      }
    }
    if (n != 1) {
      k -= k / n;
    }
    cout << k << endl;
  }
  return 0;
}