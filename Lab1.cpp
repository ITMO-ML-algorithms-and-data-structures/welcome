#include <iostream>
#include <vector>

int main() {
    setlocale(LC_ALL, "Russian");
    // 1. Вводим массив:
    std::vector<int> arr = { 1, 2, 3, 4, 5, 6, 7 };

    // 2. Подсчитываем сумму элементов массива:
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }

    // 3. Вычисляем среднее арифметическо:
    double average = static_cast<double>(sum) / arr.size();

    // 4. Подсчитываем элементы, которые больше среднего арифметического:
    int count = 0;
    for (int num : arr) {
        if (num > average) {
            count++;
        }
    }

    // 5. Выводим результат:
    std::cout << "Количество элементов, больше среднего арифметического ("
        << average << "): " << count << std::endl;

    return 0;
}