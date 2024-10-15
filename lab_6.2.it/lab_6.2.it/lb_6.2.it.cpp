#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;


void create(int* arr, int SIZE, int MIN, int MAX)
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
    }
}


void Print(int* arr, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        cout << setw(4) << arr[i];
    cout << endl;
}


int FindingTheArithmetic(int* arr, int SIZE)
{
    int largestOdd = -1; 

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 != 0) { 
            if (largestOdd == -1 || arr[i] > largestOdd) {
                largestOdd = arr[i];
            }
        }
    }

    return largestOdd;
}

int main()
{
    srand((unsigned)time(NULL));

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int SIZE = 10;
    int MIN = -10;
    int MAX = 10;

    int* arr = new int[SIZE];
    create(arr, SIZE, MIN, MAX); 

    Print(arr, SIZE); 
    cout << "\n\n";

    int largestOdd = FindingTheArithmetic(arr, SIZE); 

    if (largestOdd != -1)
        cout << "Найбільший непарний елемент: " << largestOdd << endl;
    else
        cout << "Непарних елементів немає." << endl;

    delete[] arr; 

    return 0;
}

