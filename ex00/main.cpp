#include "easyfind.hpp"

int main(void)
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	
	try {
	std::cout << *easyfind(v, 3) << std::endl;
	std::cout << *easyfind(v, 4) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return 1;
	}
	return 0;
}