#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

template <typename T>
void Input(T* a, const size_t n, size_t i)
{
	if (i < n)
	{
		Input(a, n, i + 1);
		return;
	}
}

void Input(int* a, const int n, int i)
{
	if (i < n)
	{
		int t;
		cin >> t;
		a[i] = t;
		Input(a, n, i + 1);
		return;
	}
}

template <typename T>
void Print(T* a, const size_t n, size_t i)
{
	if (i < n)
	{
		if (i == 0)
			cout << "{";
		cout << a[i];
		if (i != n - 1)
			cout << ", ";
		else cout << "}" << endl;
		Print(a, n, i + 1);
		return;
	}
}

void Print(int* a, const int n, int i)
{
	if (i < n)
	{
		if (i == 0)
			cout << "{";
		cout << a[i];
		if (i != n - 1)
			cout << ", ";
		else cout << "}" << endl;
		Print(a, n, i + 1);
		return;
	}
}

int Count(int* a, const int n, int i)
{
	int m = 15;
	if (i < 0)
	{
		if (a[i] % 2 == 0 && a[i] > m)
			m = a[i];
	}
	return 0;
}

template <typename T>
T Count(T* a, const size_t n, size_t i)
{
	int m = 15;
	if (i < 0)
	{
		if (a[i] % 2 == 0 && a[i] > m)
			m = a[i];
	}
	return 0;
}

int main()
{
	srand(time(0));

	int n;

	cout << "n = "; cin >> n;

	int* a = new int[n];

	Input<void>(a, n, 0);
	cout << "a = [ " << Count(a, n, 0) << " ];" << endl;
	Print<void>(a, n, 0);
	Count<int>(a, n, 0);

	return 0;
}
