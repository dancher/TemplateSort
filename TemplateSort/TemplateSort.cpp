#include "iostream"
#include "ctype.h"
#include "cmath"
template <typename T>
void sort(T*array, int size, bool (*swap)(T &a, T &b))
{
	int i,j;
	  for (i = size-1; i > 0; i--)
  {
    for (j = 0; j < i; j++)
    {
      swap( a[j], a[j + 1] );
    }
  }
}
template <typename T>
bool swap (T &a, T &b)
{
	if (a>b)
	{
		T c;
		c=a;
		b=c;
		c=b;
		return true
	}
	return false
}
class A
{
	double x,y;
    public:
	bool operator >(A& U)
	{
		return(sqrt(x*x+y*y) >sqrt(U.x*U.x+U.y*U.y));
	};
	void setxy(double x, double y)
	{
		this->x=x;
		this->y=y;
	}
	
};
class B
{
	int a, b;
	public:
	bool operator >(B& U)
	{
		return(a+b>U.a+U.b);
	};
};
void main()
{
	A arrayA[12];
	B arrayB[9];
	for(int i=0;i<12;i++)
	{
		arrayA[i].setxy(rand(),rand());

	}
}
