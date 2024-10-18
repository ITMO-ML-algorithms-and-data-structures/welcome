#include <iostream>
#include <vector>
#include <unordered_map>

// Функция для проверки, является ли число простым
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    // количество элементов и сами элементы массива
    int n;
    std::cin >> n;

    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    // Используем unordered_map для подсчета количества вхождений чисел
    std::unordered_map<int, int> count;

    for (int num : numbers) {
        if (isPrime(num)) {
            count[num]++;
        }
    }

    // Выводим простые числа, которые встречаются четное количество раз
    for (const auto& pair : count) {
        if (pair.second % 2 == 0) {
            std::cout << pair.first << " ";
        }
    }
    return 0;
}
