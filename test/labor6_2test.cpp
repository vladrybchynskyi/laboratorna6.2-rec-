#include <gtest/gtest.h>
#include <iostream>
#include "../labor6_2.hpp"

// Тест для функції Maxindex
TEST(ArrayTest, MaxIndexTest) {
    const int size = 5;
    int arr[size] = {1, 3, 5, 7, 9}; // Чітко визначений масив
    int maxIndex = Maxindex(arr, size, 1, 0);
    
    // Очікуваний індекс максимального елементу - 4 (значення 9)
    EXPECT_EQ(maxIndex, 4);
}

// Тест для функції Minindex
TEST(ArrayTest, MinIndexTest) {
    const int size = 5;
    int arr[size] = {1, 3, -5, 7, 9}; // Чітко визначений масив
    int minIndex = Minindex(arr, size, 1, 0);
    
    // Очікуваний індекс мінімального елементу - 2 (значення -5)
    EXPECT_EQ(minIndex, 2);
}

// Тест для функції Create (перевірка на вірність діапазону значень)
TEST(ArrayTest, CreateArrayTest) {
    const int size = 5;
    int arr[size];
    int Low = -10;
    int High = 10;
    
    // Створюємо масив
    Create(arr, size, Low, High, 0);
    
    // Перевіряємо, що всі елементи в межах [Low, High]
    for (int i = 0; i < size; ++i) {
        EXPECT_GE(arr[i], Low);  // arr[i] >= Low
        EXPECT_LE(arr[i], High); // arr[i] <= High
    }
}

// Тест для функції Print (хоча Print просто виводить, ми можемо протестувати, що виклик не викликає помилок)
TEST(ArrayTest, PrintArrayTest) {
    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5}; // Чітко визначений масив
    
    // Викликаємо функцію Print для перевірки
    ASSERT_NO_THROW(Print(arr, size, 0)); // Перевіряємо, що функція Print не викликає помилок
}
