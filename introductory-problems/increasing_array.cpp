#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    long long prev = 0, sum = 0, curr, i;
    for (i = 0; i < n; ++i) {
        std::cin >> curr;
        sum += (curr < prev) ? prev-curr : 0;
        curr = (curr < prev) ? prev : curr;
        prev = curr;
    }
    std::cout << sum;
}

    
