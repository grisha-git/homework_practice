#include <iostream>

template<class T>
T* merge(const T* a, size_t sa, const T* b, size_t sb, T* c)
{
  size_t sizeA = 0;
  size_t sizeB = 0;
  size_t sizeC = 0;
  while(sizeA < sa && sizeB < sb)
  {
    if (a[sizeA] <= b[sizeB])
    {
      c[sizeC] = a[sizeA];
      sizeA++;
      sizeC++;
    }
    else
    {
      c[sizeC] = b[sizeB];
      sizeC++;
      sizeB++;
    }
  }
  while (sizeA < sa)
  {
    c[sizeC] = a[sizeA];
    sizeA++;
    sizeC++;
  }
  while (sizeB < sb)
  {
    c[sizeC] = b[sizeB];
    sizeC++;
    sizeB++;
  }
  return c;
}

int main()
{
  int a[] = {11, 3, 4, 15};
  int b[] = {12, 13, 6, 3, 20};
  size_t sa = 4;
  size_t sb = 5;
  int c[9];
  merge(a, sa, b, sb, c);
}

//Неявный интерфейс
//Оператор копирующего присваивания
//Деструктор