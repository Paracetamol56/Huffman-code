#include "Huffman.h"

#include <iostream>


int main()
{
	std::locale::global(std::locale{ "" });
	CHuffman monMessage;

	monMessage.read();

	std::cout <<  "Mon message codé est :\n" << monMessage.code() << std::endl;

	std::cout << monMessage.decode() << std::endl;
	return 0;
}