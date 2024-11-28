#include <iostream>

int main() {
    int n;
    std::cin >> n;

    // bespoke cases
    if (n == 2 || n == 3) {
        std::cout << "NO SOLUTION";
        return 0;
    } else if (n < 3) {
        std::cout << n;
        return 0;
    }     

    int m = (n / 2);
    int i = m+1;
    while (i < n) {
        std::cout << i << " " << i-m << " ";
        ++i;
    }

    std::cout << n << " ";

    if (!(n & 1))
        std::cout << n/2;       
}
