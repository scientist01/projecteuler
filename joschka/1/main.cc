#include <iostream>
#include <vector>

int main() {
    
    int i = 1;
    std::vector<int> bases = {3,5};
    int sum = 0;
    int max = 1000;

    for (int i = 0; i < max; i++) {
        for (int base : bases) {
            if (i % base == 0) {
                sum += i;
                break;
            }
        }
    }

    std::cout << sum << std::endl;

}
