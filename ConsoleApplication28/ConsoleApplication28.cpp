﻿// ConsoleApplication28.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter 4-digit number: ";
    cin >> num;
    int a, b, c, d;
    d = num % 10;
    c = (num / 10) % 10;
    b = (num / 100) % 10;
    a = num / 1000;
    if (num < 100 and a == b)
        cout << "the sums are equal: " << num << endl;
    if (num < 1000 and a == c)
        cout << "the sums are equal: " << num << endl;
    if ((a + b == c + d))
        cout << "the sums are equal: " << num << endl;
    else
        cout << "the sums aren`t equal: " << num << endl;
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
