#include <iostream>
#include <string>
//using namespace std;
//problem 2


template<class dahye, class T_SECOND_TYPE, class T_THIRD_TYPE>
class Vector2D
{
public:
	dahye x;
	T_SECOND_TYPE y_;
	T_THIRD_TYPE z_;

	Vector2D(const dahye& x_input, const T_SECOND_TYPE& y_input, const T_THIRD_TYPE& z_input)
		: x_(x_input), y_(y_input), z_(z_input)
	{}


	void print()
	{
		std::cout << x_ << " " << y_ << " " << z_ << std::endl;

	}

};


int main()
{
	//Vector2D<std::int> int_vector(1, 1);
	//int_vector.print();

	Vector2D<int, float, double> int_float_double_vector(1, 2.345, 123.445 );
	int_float_double_vector.print();

	return 0;

}


//
//왜 이건 안될까?

//class VectorInt2D
//{
//	int x_, y_;
//};
//
//class VectorFloat2D
//{
//	float x_, y_;
//};
//
//class VectorDouble2D
//{
//	double x_, y_;
//};
//
//
