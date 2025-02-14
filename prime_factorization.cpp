#include "includes.h"
int const n = 2 * 1e5 + 5;
int spf[n];
vector<int> getPrimes(int n) {
    vector<int> primes;
    while (n != 1) {
        primes.push_back(spf[n]);
        n /= spf[n];
    }
    return primes;
}