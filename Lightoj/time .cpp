#include <iostream>
#include <cmath>

int main() {
    int t;
    std::cin >> t;

    for (int i = 1; i <= t; i++) {
        int r;
        std::cin >> r;

        int area = 4*r*r - M_PI*r*r;
        std::cout << "Case " << i << ": " << area << ".00\n";
    }

    return 0;
}
