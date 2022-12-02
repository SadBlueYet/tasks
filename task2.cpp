// task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
void inputArray();
int main()
{
    inputArray();
}
void inputArray() {
    const int len = 3;
    int value = 1;
    int j = 1;
    int i = 0;
    int array[len][len];
    for (i; i < len; i++) {
        array[0][i] = value;
        value++;
    }
    for (j; j < len; j++) {
        array[j][i - 1] = value;
        value++;
    }
    for (int y = len - 2; y >= 0; y--) {
        array[j - 1][y] = value;
        value++;
    }
    for (int x = 0; x <= len - 2; x++) {
        array[1][x] = value;
        value++;
    }
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            std::cout << array[i][j] << '\t' << ' ';

        }
        std::cout << '\n';
    }
    
}

