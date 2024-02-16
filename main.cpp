#include <stdio.h>

template<typename T, typename T2>

class Number{
public:

	T number;
	T number2;

	Number(T number, T number2) : number(number), number2(number2) {}

	T Min(T a, T b){
		if (a < b){
			return static_cast<T>(a);
		}else{
			return static_cast<T>(b);
		}
	}
};

int main(){
	Number<int, int> b1(3, 1);
	Number<float, float> b2(4, 1);
	Number<double, double> b3(5, 9);
	Number<int, float> b4(2, 6);
	Number<float, double> b5(5, 3);
	Number<double, int> b6(5, 8);

	printf("int,int : %d\n", b1.Min(1, 2));
	printf("float,float : %f\n", b2.Min(2.0, 3.0));
	printf("double,double : %lf\n", b3.Min(6.0, 28.0));

	printf("int, float : %d\n", b4.Min(3, 5.0));
	printf("float, double : %f\n", b5.Min(7.0, 50.0));
	printf("double, int : %lf\n", b6.Min(72.0, 4));

	return 0;
}