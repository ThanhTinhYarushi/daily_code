#include <iostream>


void veTamGiac(int n, int m) {
    for(int i = 1 ; i <= n ; i++) {
        for(int j = -1 ; j <= m - 1 ; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Nhap n:";
    std::cin >> n;
    veTamGiac(n, 4);
    return 0;
}