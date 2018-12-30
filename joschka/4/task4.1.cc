#include <iostream>
#include <cmath>

bool isPalindrom(int n) {

  int rev = 0;
  int num = n;
  int digit;

  do {
      digit = num % 10;
      rev = (rev * 10) + digit;
      num = num / 10;
  } while (num != 0);

  return n == rev;

}

int main() {

    int pal;
    int inner_max = 0;
    int outer_max = 0;
    int upper_limit = pow(10,3) - 1;
    int lower_limit = pow(10,3-1);

    for (int f1 = upper_limit; f1 >= lower_limit; f1--) {
        for (int f2 = f1; f2 >= lower_limit; f2--) {
            pal = f1*f2;
            if (isPalindrom(pal)) {
                inner_max = pal;
                break;
            }
        }
        outer_max = inner_max > outer_max ? inner_max : outer_max;
    }

    std::cout << outer_max << std::endl;


}
