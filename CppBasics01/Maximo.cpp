#include<iostream>

int maximo(int x, int y)
{
	if (x > y)
	{
		std::cout << "The Maximum value between 10 and 20 = " << x << "\n";
		std::cout << "The Minimun value between 10 and 20 = " << y << "\n";
	}
	else
	{
		std::cout << "The Maximum value between 10 and 20 = " << y << "\n";
		std::cout << "The Minimun value between 10 and 20 = " << x << "\n";
	}
	return 0;
}
		

int main()
{
	int a, b, c;
	a = 10;
	b = 20;
	c = maximo(a, b);
	return 1;
}

