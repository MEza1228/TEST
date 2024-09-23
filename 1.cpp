#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::cout << "欢迎来到猜数字游戏！" << std::endl;
    srand(static_cast<unsigned int>(time(nullptr)));
    int targetNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    do {
        std::cout << "请输入你猜测的数字（1 到 100）：";
        std::cin >> guess;
        attempts++;

        if (guess > targetNumber) {
            std::cout << "太高了！" << std::endl;
        } else if (guess < targetNumber) {
            std::cout << "太低了！" << std::endl;
        }
    } while (guess!= targetNumber);

    std::cout << "恭喜你猜对了！你用了 " << attempts << " 次尝试。" << std::endl;

    return 0;
}