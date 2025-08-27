#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int C;
    std::cin >> C;

    char T;
    std::cin >> T;

    std::vector<std::vector<double>> matrix(12, std::vector<double>(12));

    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    double total = 0.0;
    for (int i = 0; i < 12; ++i) {
        total += matrix[i][C];
    }

    std::cout << std::fixed << std::setprecision(1);

    if (T == 'S') {
        std::cout << total << std::endl;
    } else if (T == 'M') {
        std::cout << total / 12.0 << std::endl;
    }

    return 0;
}
