#include <iostream>
bool funcA() {
	int c;
	std::cout << "input(number) : ";
	std::cin >> c;
	if (c < 10){
		throw std::out_of_range("Invalis Input!!");
	}
	return true;
}
int main() {

	try {
		funcA();
	}
	catch (std::out_of_range& e) {
		std::cout << "Exception : Invalid Input!!" << std::endl;
	}
	
	return 0;
}