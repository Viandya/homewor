#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <utility>

using namespace std;

void selectionSort(vector<int>& a)
{
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            swap(a[i], a[minIndex]);
        }
    }
}

void printArray(const vector<int>& a)
{
    for (size_t i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand(time(0));

    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Размер массива должен быть положительным" << endl;
        return 1;
    }

    const int minValue = 2;
    const int maxValue = 103;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        a[i] = minValue + rand() % (maxValue - minValue + 1);
    }

    cout << "Исходный массив:" << endl;
    printArray(a);

    selectionSort(a);

    cout << "Отсортированный массив по возрастанию:" << endl;
    printArray(a);

    return 0;
}
