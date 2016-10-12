#include <iostream>
#include <string>

//template
//problem 1

class VectorFloat2D
{
public:
	float x, y;
};


class VectorDouble2D
{
public:
	double x, y;
};


class VectorInt2D
{
public:
	int x, y;
};

template<class T_CLASS>
void print(const T_CLASS& i)
{
		std::cout << i << std::endl << std::endl;
}


int main()
{
	print(1);
	print(2.345f);
	print("Hello World");

	return 0;
}
