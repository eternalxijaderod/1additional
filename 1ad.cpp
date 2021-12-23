#include <iostream>

int main() {
    int Q1, P1, Q2, P2, A, Price_min = 0, Price = 0;
    std::cin >> Q1 >> P1 >> Q2 >> P2 >> A;

    int M = 0;
    int N = 0;

    M = A / Q1 + 1;
    N = A / Q2 + 1;
    Price = M * P1 + N * P2; Price_min = Price;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if ((i * Q1 + j * Q2) >= A) {
                Price = i * P1 + j * P2;
            }
            if (Price < Price_min) {
                Price_min = Price;
            }
        }
    }
    std::cout << Price_min << std::endl;
}
