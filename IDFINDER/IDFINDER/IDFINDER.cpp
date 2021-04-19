// IDFINDER.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
#include <Vector>
using namespace std;

int main()
{
    const int size = 50;
    int result[size];
    int result2[size];
    int restriction[size];
    while (1) {
        system("cls");
        int n = 0;
        cout << "1. output to file" << endl;
        cout << "2. input in program" << endl;
        cin >> n;
        if (n == 1) {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    if (result[j] == result[i] && i != j) {
                        result[i] = -10000;
                    }

                }
            }
            ofstream output_to_file("2.txt"); // вывод в файл
            for (int i = 0; i < size; i++)
            {
                if (result[i] > 0) {
                    output_to_file << result[i] << endl;
                }
            }
            output_to_file.close();
        }
        if (n == 2) {
            int i = 0;
            int temp = 0;
            ifstream input_in_program("1.txt"); //вывод из файла в программу
            while (!input_in_program.eof()) {
                string ang;

                input_in_program >> ang;
                if (!ang.empty()) {
                    temp = stoi(ang);
                }
                result[i] = temp;
                temp = -1000;
                i++;


            }

        }

    }
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
