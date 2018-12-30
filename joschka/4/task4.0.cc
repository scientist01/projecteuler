//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers
//is 9009 = 91 × 99. Find the largest palindrome made from the product of two 3-digit numbers.

#include <iostream>
  
int main()
{
        int biggestPalYet{0};
        int iterations = 0;

        for (int x{9}; x >= 0; x--)
        {
                for (int y{0}; y < 10; y++)
                {
                        for (int z{0}; z < 10; z++)
                        {
                                for (int f1{999}; f1 > 99; f1--)
                                {
                                                iterations++;
                                                long a{x};      //this constructs the palindrome:
                                                long b{y};
                                                long c{z};
                                                long d{z};
                                                long e{y};
                                                long f{x};

                                                long pal{a*1e5 + b*1e4 + c*1e3 + d*1e2 + e*1e1 + f};
                                                    
                                                if ((pal % f1 == 0) && (pal/f1 > 99) && (pal/f1 < 1000))
                                                //check if palindrome is a product 
                                                {
                                                    //std::cout << "# iterations:" << iterations << std::endl;
                                                    //std::cout << pal << "\n";
                                                    biggestPalYet = pal > biggestPalYet ? pal : biggestPalYet;
                                                }
                                        }
                                }

                        }
                }
        
        std::cout << "biggest pal" << std::endl << biggestPalYet << std::endl;

        return 0;
}





























