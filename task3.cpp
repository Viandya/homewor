#include <iostream>
#include <vector>
#include <string>
#include <utility>

using namespace std;

void selectionSort(vector<string>& phones)
{
    int n = phones.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (phones[j] < phones[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            swap(phones[i], phones[minIndex]);
        }
    }
}

int main()
{
    int n;
    cout << "Введите количество телефонов: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Количество телефонов должно быть положительным" << endl;
        return 1;
    }

    vector<string> phones(n);
    cout << "Введите телефоны (например, 23-45-67):" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> phones[i];
    }

    selectionSort(phones);

    cout << "Отсортированный список телефонов:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << phones[i] << endl;
    }

    return 0;
}
