#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const p1, Point const p2, Point const p3, Point const p);

int	main(void)
{
	{
		Point	p1(0, 0);
		Point	p2(10, 0);
		Point	p3(0, 10);
		Point	p(0.1, 9);

		std::cout << "p1: " << p1 <<  std::endl
			<< "p2: " << p2 << std::endl
			<< "p3: " << p3 << std::endl
			<< "p: " << p << std::endl
			<< "Result: " << bsp(p1, p2, p3, p) << std::endl;
	}
	{
		Point	p1(0, 0);
		Point	p2(-10, 0);
		Point	p3(0, -10);
		Point	p(0, 0);

		std::cout << "p1: " << p1 <<  std::endl
			<< "p2: " << p2 << std::endl
			<< "p3: " << p3 << std::endl
			<< "p: " << p << std::endl
			<< "Result: " << bsp(p1, p2, p3, p) << std::endl;
	}
}
