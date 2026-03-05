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

}