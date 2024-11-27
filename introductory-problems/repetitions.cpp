#include <iostream>
#include <string>

// TODO fix this solution it's bad
int main() {
    std::string str;
    std::getline(std::cin, str);
    int i = 0, c = 0, max = 0;
    char prev = '0', curr = '1';
    while (curr = str[i++]) {
        if (curr == prev)
            c++;
        else {
            max = (++c > max) ? c : max;
            c = 0;
        }
        prev = curr;
    }
    std::cout << ((++c > max) ? c : max);
}
