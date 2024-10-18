#include <iostream>
#include <vector>
#include <unordered_map>

// функция для проверки на простоту числа
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    // кол-во элементов и сами элементы
    int n;
    std::cin >> n;

    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    //подсчет вхождений каждого числа
    std::unordered_map<int, int> count;

    for (int num : numbers) {
        if (isPrime(num)) {
            count[num]++;
        }
    }

    // выводим простые, которые встречаются четного кол-во раз
    for (const auto& pair : count) {
        if (pair.second % 2 == 0) {
            std::cout << pair.first << " ";
        }
    }
    return 0;
}
