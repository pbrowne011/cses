#include <iostream>

int main()
{
    int i, t;
    long long x, y, out;
    std::cin >> t;

    for (i = 0; i < t; ++i) {
        std::cin >> y;
        std::cin >> x;
        if (y >= x){
            if (y & 1)
                out = (y-1)*(y-1)+x;
            else
                out = y*y-(x-1);
        } else {
            if (x & 1)
                out = x*x-(y-1);
            else
                out = (x-1)*(x-1)+y;
        }

        std::cout << out << "\n";
    }
}
