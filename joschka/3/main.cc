#include <iostream>
#include <math.h>
#include <list>
#include <vector>

std::list<int> primes(int max) {
    std::cout << "Computing Primes < " << max << "..." << std::endl;
    std::list<int> primes = {};
    std::vector<bool> C = std::vector<bool>(max, true);
    for (int i = 2; i < max; i++) {
        if (C[i]) {
            primes.push_front(i);
            int m = i*i;
            while (m < max) {
                C[m] = false;
                m += i;
            }
        }
    }
    return primes;
}

bool isPrime(int n) {
    if (n == 1) return false;
    int root = floor(sqrt(n));
    for (int i = root; i > 1; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {

    long long number = 600851475143;

    int max = 1;
    while (number > 1) {
        max = max * 10;
        auto l = primes(max);
        for (int prime : l) {
            if (number % prime == 0) {
                std::cout << "Found Prime Factor:" << prime << std::endl;
                number /= prime;
            }
        }
    }

    return 0;

}
