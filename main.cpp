#include <stdio.h>
template<typename T>
void Min(T a, T b) {
	if (a < b) {
		printf("%d\n", static_cast<T> (a));
	}
	else
	{
		printf("%d\n", static_cast<T> (b));
	}
}

template<>
void Min<float>(float a, float b) {
	if (a < b) {
		printf("%f\n", a);
	}
	else
	{
		printf("%f\n", b);
	}
}

template<>
void Min<double>(double a, double b) {
	if (a < b) {
		printf("%lf\n", a);
	}
	else
	{
		printf("%lf\n", b);
	}
}

int main() {
	int intA = 2;
	int intB = 3;
	float floatC = 6;
	float floatD = 28;
	double doubleE = 3.14;
	double doubleF = 3.16;
	Min<int>(intA, intB);
	Min<float>(floatC, floatD);
	Min<double>(doubleE, doubleF);

	return 0;
}