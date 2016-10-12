
#include <GLFW/glfw3.h> 
#include <cstring>
#include <stdlib.h>
#include <thread>
#include <chrono>
#include <math.h>
#include <vector>
#include <string>
#include <iostream>



class Draw
{
public:
	void doSomething()
	{
		std::cout << "draw" << std::endl;
	}

};


template<class T_OPEARATION>
class GeometricObject
{
public:
	void doSomething()
	{
		T_OPEARATION operation;
		operation.doSomething();
	}

};

int main()
{
	GeometricObject<Draw> draw_object;
	draw_object.doSomething();

	return 0;


}