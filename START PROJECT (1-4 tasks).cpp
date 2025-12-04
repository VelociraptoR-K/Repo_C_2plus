#include <iostream>
#include <string>
#include <vector>
#include <ranges>
#include <map>

using namespace std;

namespace problems {

    void Personality(int age, double weight, double height) {
        wstring name{ L"Nikolay" }, description;
        wcout << "Name: " << name << "\n";
        wcout << "Age: " << age << " Weight: " << weight << " Height: " << height << endl;
        wcout << "Enter description:" << endl;
        wcin >> description;
    }

    // Сумма всех цифр в трёхзначном числе (Promblem 1)

    int decision() {
        int N;
        cout << "Enter the number: ";
        cin >> N;
        return N % 10 + (N / 10) % 10 + N / 100;
    }

    int AlexR() {
        int N;
        cin >> N;
        auto acc{ 0 };
        while (N) {
            acc += N % 10;
            N /= 10;
        }
        return acc;
    }

    int problemDiamond() {
        string number_str;
        cin >> number_str;
        auto acc{ 0 };
        for (auto symbol : number_str)
            acc += symbol - '0';
        return acc;
    }

    // Суммы цифр на чётных и нечётных позициях (Problem 2)

    pair<int, int> problem2(string& num) {
        auto sumaEven{0}, sumaNotEven{0};
        for (int i = 0; i < num.length(); i++) {
            auto number = num[i] - '0';
            if (i % 2 == 0)
                sumaEven += number;
            else
                sumaNotEven += number;
        }
        return { sumaEven, sumaNotEven };
    }

    /*
    (Problem 3)

    На вход подается натуральное число k.
    На вход подается натуральное число n.
    И затем подается n натуральных чисел.
    Нужно найти количество чисeл равных числу k.

    Пример:
    17
    4
    15
    16
    17
    18

    Результат: 1
    */

    int problem3() {
        int k, n;
        cout << "Enter k and n: ";
        cin >> k >> n;
        auto acc{ 0 };
        cout << "Enter n-numbers: ";
        for (auto i = 0; i < n; i++) {
            int number;
            cin >> number;
            if (number == k)
                acc++;
        }
        return acc;
    }

    /*
    (Problem 4)
    На вход подается натуральное число n.
    И затем подается n натуральных чисел.
    Нужно найти среднее арифметическое среди
    всех чисел кратных 3, если таких чисел нет, то вывести -1

    Пример:
    4
    15
    16
    17
    18

    Результат: 16.5
    */

    double problem4() {
        cout << "Enter n: ";
        int n;
        cin >> n;
        auto count{ 0.0 }, acc{ 0.0 };
        cout << "Enter n-numbers: ";
        for (auto i = 0; i < n; i++) {
            int number;
            cin >> number;
            if (number % 3 == 0) {
                count++;
                acc += number;
            }
        }
        if (count)
            return acc / count;
        return -1;
    }
}

int main() {
    // ВЫЗОВЫ ВСЕХ РЕШЕНИЙ

    problems::Personality(19, 65.5, 175.3);

    cout << "Enter number for problemDiamond(): ";
    auto res1 = problems::problemDiamond();
    cout << "Result: " << res1 << endl;

    cout << "Enter number for problem2(): ";
    string n;
    cin >> n;
    auto res2 = problems::problem2(n);
    cout << "Even sum: " << res2.first << ", Odd sum: " << res2.second << endl;

    auto res3 = problems::problem3();
    cout << res3 << endl;

    auto res4 = problems::problem4();
    cout << res4 << endl;
    return 0;

}
