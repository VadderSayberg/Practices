#include <iostream>
#include <algorithm>
// Функция mySort сортирует целочисленный массив методом пузырька
// и возвращает количество циклов, понадобившихся на сортировку.
//---------------------------------------------------------------
int mySort(int arr[], int size)
{
int cycles{};
bool sortagain;
do {
sortagain = false;
for (int i(0); i < size - 1 - cycles; ++i)
{
if (arr[i] > arr[i + 1])
{
std::swap(arr[i], arr[i + 1]);
sortagain = true;
}
}
cycles++;
} while (sortagain);
return cycles;
}

using namespace std;

int main()
{
setlocale(0, "");
const int size = 9;
int arr[size]{ 7, 5, 6, 4, 9, 8, 2, 1, 3 };
cout << "Early termination on iteration: " << mySort(arr, size) << endl;
for (int i(0); i < size; ++i)
{
cout << arr[i] << endl;
}
system("pause");
return 0;
}