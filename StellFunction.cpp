#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Задание 1
/*void convertToBase(int number, int base, char result[]) {
    if (number == 0) {
        result[0] = '0';
        result[1] = '\0';
        return;
    }

    char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char temp[100];
    int index = 0;

    while (number > 0) {
        temp[index] = digits[number % base];
        number /= base;
        index++;
    }

    int resultIndex = 0;
    for (int i = index - 1; i >= 0; i--) {
        result[resultIndex] = temp[i];
        resultIndex++;
    }
    result[resultIndex] = '\0';
}

int main() {
    setlocale(LC_ALL, "ru");
    int num, base;
    char result[100];

    cout << "Введите число и систему счисления (2-36): ";
    cin >> num >> base;

    if (base < 2 || base > 36) {
        cout << "Неверная система счисления!" << endl;
        return 1;
    }

    convertToBase(num, base, result);
    cout << "Результат: " << result << endl;

    return 0;
}*/

//Задание 2
/*int rollDice() {
    return rand() % 6 + 1;
}

void showDice(int value) {
    cout << "[" << value << "] ";
}

int main() {
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    int humanTotal = 0, computerTotal = 0;
    char firstPlayer;

    cout << "Кто ходит первым? (h - человек, c - компьютер): ";
    cin >> firstPlayer;

    for (int round = 1; round <= 5; round++) {
        cout << "\n--- Раунд " << round << " ---" << endl;

        if (firstPlayer == 'h' || round > 1) {
            cout << "Ваш бросок: ";
            int humanRoll = rollDice();
            showDice(humanRoll);
            humanTotal += humanRoll;
            cout << " (сумма: " << humanTotal << ")" << endl;
        }

        cout << "Бросок компьютера: ";
        int computerRoll = rollDice();
        showDice(computerRoll);
        computerTotal += computerRoll;
        cout << " (сумма: " << computerTotal << ")" << endl;

        if (firstPlayer == 'c' && round == 1) {
            cout << "Ваш бросок: ";
            int humanRoll = rollDice();
            showDice(humanRoll);
            humanTotal += humanRoll;
            cout << " (сумма: " << humanTotal << ")" << endl;
        }
    }

    cout << "\nИТОГИ" << endl;
    cout << "Ваша общая сумма: " << humanTotal << endl;
    cout << "Сумма компьютера: " << computerTotal << endl;
    cout << "Ваша средняя сумма за бросок: " << humanTotal / 5.0 << endl;
    cout << "Средняя сумма компьютера за бросок: " << computerTotal / 5.0 << endl;

    if (humanTotal > computerTotal)
        cout << "Вы победили!" << endl;
    else if (computerTotal > humanTotal)
        cout << "Компьютер победил!" << endl;
    else
        cout << "Ничья!" << endl;

    return 0;
}*/

//Задание 3
/*void drawRectangle(int height, int width) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    int n, k;
    cout << "Введите высоту и ширину прямоугольника: ";
    cin >> n >> k;
    drawRectangle(n, k);
    return 0;
}*/

//Задание 4
/*long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    setlocale(LC_ALL, "ru");
    int num;
    cout << "Введите число: ";
    cin >> num;

    if (num < 0) {
        cout << "Факториал отрицательного числа не определен!" << endl;
    }
    else {
        cout << num << "! = " << factorial(num) << endl;
    }

    return 0;
}*/

//Задание 5
/*bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "ru");
    int num;
    cout << "Введите число: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " - простое число" << endl;
    }
    else {
        cout << num << " - составное число" << endl;
    }

    return 0;
}*/

//Задание 6
/*void findMinMax(int arr[], int size, int& minVal, int& maxVal, int& minIndex, int& maxIndex) {
    minVal = arr[0];
    maxVal = arr[0];
    minIndex = 0;
    maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    int arr[] = { 3, 7, 2, 9, 1, 5 };
    int size = 6;
    int minVal, maxVal, minIndex, maxIndex;

    findMinMax(arr, size, minVal, maxVal, minIndex, maxIndex);

    cout << "Минимум: " << minVal << " (индекс " << minIndex << ")" << endl;
    cout << "Максимум: " << maxVal << " (индекс " << maxIndex << ")" << endl;

    return 0;
}*/

//Задание 7
/*void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "ru");
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = 5;

    cout << "Исходный массив: ";
    printArray(arr, size);

    reverseArray(arr, size);

    cout << "Перевернутый массив: ";
    printArray(arr, size);

    return 0;
}*/
