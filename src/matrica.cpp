#include "matrica.h"

enum ZNACI{
    C = 10,
    B,
    A,
    J,
    Q,
    K
};

void Matrica::Make() {
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                int probability = std::rand() % 100;
                
                if(probability < 2)
                    matrix[i][j] = ZNACI::K;

                else if(probability < 4)
                    matrix[i][j] = ZNACI::Q;

                else if(probability < 6)
                    matrix[i][j] = ZNACI::J;

                else if(probability < 8)
                    matrix[i][j] = ZNACI::A;

                else if(probability < 10)
                    matrix[i][j] = ZNACI::B;

                else if(probability < 12)
                    matrix[i][j] = ZNACI::C;

                else
                    matrix[i][j] = std::rand() % 8 + 2;
            }
        }
    }
void Matrica::Print() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            switch (matrix[i][j]) {
            case 15:
                std::cout << "K  ";
                break;
            case 14:
                std::cout << "Q  ";
                break;
            case 13:
                std::cout << "J  ";
                break;
            case 12:
                std::cout << "A  ";
                break;
            case 11:
                std::cout << "B  ";
                break;
            case 10:
                std::cout << "C  ";
                break;
            default:
                std::cout << matrix[i][j] << "  ";
            }

            // SLEEP for 0.05 seconds after printing each element
            SLEEP(50);
        }
        std::cout << std::endl;

        // SLEEP for 1 second after printing each row
        SLEEP(1000);
    }

  }


bool Matrica::ThreeRow() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= cols - 3; j++) {
            int count = 1;
            for (int k = 1; k < 3; k++) {
                if (matrix[i][j] == matrix[i][j + k]) {
                    count++;
                }
            }
            if (count == 3) {
                found = matrix[i][j];
                return true;
            }
        }
    }
    return false;
}
bool Matrica::FourRow() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= cols - 3; j++) {
            int count = 1;
            for (int k = 1; k < 3; k++) {
                if (matrix[i][j] == matrix[i][j + k]) {
                    count++;
                }
            }
            if (count == 4) {
                found = matrix[i][j];
                return true;
            }
        }
    }
    return false;
}
bool Matrica::ThreeCol() {
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i <= rows - 3; i++) {
            int count = 1;
            for (int k = 1; k < 3; k++) {
                if (matrix[i][j] == matrix[i + k][j]) {
                    found = matrix[i][j];
                    count++;
                }
            }
            if (count == 3) {
                return true;
            }
        }
    }
    return false;
}
bool Matrica::FourCol() {
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i <= rows - 3; i++) {
            int count = 1;
            for (int k = 1; k < 3; k++) {
                if (matrix[i][j] == matrix[i + k][j]) {
                    found = matrix[i][j];
                    count++;
                }
            }
            if (count == 4) {
                return true;
            }
        }
    }
    return false;
}
