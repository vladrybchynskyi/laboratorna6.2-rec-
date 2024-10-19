#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High, int i)
{
  a[i] = Low + rand() % (High - Low + 1);
  if (i < size - 1)
    Create(a, size, Low, High, i + 1);
}
void Print(int* a, const int size, int i)
{
  cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
  if (i < size - 1)
    Print(a, size, i + 1);
  else
    cout << endl;
}
int Minindex(int* a, const int size, int i, int minindex)
{
  if (a[i] < a[minindex])
    minindex = i;
  if (i < size - 1)
    return Minindex(a, size, i + 1, minindex);
  else
    return minindex;
}
int Maxindex(int* a, const int size, int i, int maxindex)
{
  if (a[i] > a[maxindex])
    maxindex = i;
  if (i < size - 1)
    return Maxindex(a, size, i + 1, maxindex);
  else
    return maxindex;
}
int main()
{
  srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
  const int n = 5;
  int a[n];
  int Low = -10;
  int High = 10;
  Create(a, n, Low, High, 0);
  Print(a, n, 0);
  cout << "max index = " << Maxindex(a, n, 1, 0) << endl;
  cout << "min index = " << Minindex(a, n, 1, 0) << endl;
  return 0;
}