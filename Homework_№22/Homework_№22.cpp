#include <iostream>
using namespace std;

// ������ 1
void swapEvenOdd(int* begin, int* end)
{
    for (; begin + 1 < end; ++++begin)
    {
        swap(*begin, *(begin + 1));
    }
}


// ������ 2
void func(int& n, int el) // ������� ����� ������
{
    if (el > 0)
    {
        int num = n;
        for (int i = 0; i < el - 1; ++i)
        {
            n *= num;
        }
    }
    else if (el == 0)
        n = 1;
    else if (el < 0)
        n = 0;
}

void func(int* n, int el) // ������� ����� ���������
{
    if (el > 0)
    {
        int num = *n;
        for (int i = 0; i < el - 1; ++i)
        {
            *n *= num;
        }
    }
    else if (el == 0)
        *n = 1;
    else if (el < 0)
        *n = 0;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "������ 1.\n����������� ������:\n"; // ������ 1
    const int size = 10;
    int array[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n\n" << "�������� ������:\n";
    swapEvenOdd(array, array + 10);
    for (int i : array)
    {
        cout << i << " ";
    }
    cout << "\n\n\n";
    

    cout << "������ 2.\n"; // ������ 2
    cout << "������� ����� ������:\n";
    int n1 = 10;
    func(n1, 3);
    cout << n1 << "\n\n";

    cout << "������� ����� ���������:\n";
    int n2 = 10;
    func(&n2, 3);
    cout << n2 << "\n\n";

    return 0;
}