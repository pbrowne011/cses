#include <iostream>

int main() {
    long long n;
    std::cin >> n;
    long long total = (n*(n+1))/2;
    long long sum = 0;
    while (std::cin >> n)
        sum += n;
    std::cout << total - sum;
}
