#include<iostream>

int tuna = 69;

int main() {
	int tuna = 42;
	std::cout << tuna << std::endl; // prints 69 due to the '::' unary scope resolution operator
}