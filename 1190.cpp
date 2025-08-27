#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    char O;
    std::cin >> O;

    std::vector<std::vector<double>> M(12, std::vector<double>(12));

    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            std::cin >> M[i][j];
        }
    }

    double sum = 0.0;
    int count = 0;

    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            // Condição corrigida para a área direita
            if (j > i && j > (11 - i)) {
                sum += M[i][j];
                count++;
            }
        }
    }

    std::cout << std::fixed << std::setprecision(1);

    if (O == 'S') {
        std::cout << sum << std::endl;
    } else if (O == 'M') {
        std::cout << sum / count << std::endl;
    }

    return 0;
}

