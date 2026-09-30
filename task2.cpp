#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <utility>

using namespace std;

void selectionSortDesc(vector<int>& a)
{
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[maxIndex])
            {
                maxIndex = j;
            }
        }
        if (maxIndex != i)
        {
            swap(a[i], a[maxIndex]);
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

    const int minValue = 0;
    const int maxValue = 100;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        a[i] = minValue + rand() % (maxValue - minValue + 1);
    }

    cout << "Исходный массив:" << endl;
    printArray(a);

    selectionSortDesc(a);

    cout << "Отсортированный массив по убыванию:" << endl;
    printArray(a);

    return 0;
}
