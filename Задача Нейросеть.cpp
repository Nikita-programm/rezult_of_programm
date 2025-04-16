#include <iostream>
#include <vector>
#include <limits>
int main() {
    int n;
    std::cout << "Введите количество элементов в массиве (n <= 20): ";
    std::cin >> n;
    if (n > 20) {
        std::cout << "Количество элементов не должно превышать 20." << std::endl;
        return 1;
    }
    std::vector<double> arr(n);
    std::cout << "Введите " << n << " действительных чисел:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    double minElement = std::numeric_limits<double>::max();
    double maxElement = std::numeric_limits<double>::lowest();
    int minIndex = -1;
    int maxIndex = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }
    if (minIndex != -1 && maxIndex != -1) {
        std::swap(arr[minIndex], arr[maxIndex]);
    }
    std::cout << "Массив после замены наименьшего и наибольшего элементов:" << std::endl;
    for (const double& num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}