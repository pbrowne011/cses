#include <iostream>
int main() {
    long long n;
    std::cin >> n;

    while (1) {
        std::cout << n << ' ';
        if (n == 1)
            return 0;
        else if (n & 1)
            n = 3*n + 1;
        else
            n/= 2;
    }
}
