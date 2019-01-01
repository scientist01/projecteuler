#include <iostream>
#include <list>

int main() {

    std::list<int> divisors = {2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    long current = 0;
    bool hit = false;
    while (true) {
        current += 20;
        hit = true;
        for (auto div : divisors) {
            hit = hit && ((current % div) == 0);
            if (!hit) break;
        }   
        if (hit) {
            std::cout << current << std::endl;
            break;
        }
    }

    return 0;

}
