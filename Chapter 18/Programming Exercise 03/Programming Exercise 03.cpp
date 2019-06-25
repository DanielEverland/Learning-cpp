// Programming Exercise 03.cpp
#include <iostream>

template<typename T>
long double sum_values(T t)
{
	return t;
}

template<typename T, typename... Args>
long double sum_values(T t, Args... args)
{
	return t + sum_values(args...);
}

int main()
{
	std::cout << sum_values(5, 5, 5) << std::endl;
	std::cout << sum_values(5, 5.64, 3432) << std::endl;
}