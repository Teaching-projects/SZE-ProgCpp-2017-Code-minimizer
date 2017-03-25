#include <iostream>

#include "jsMinifyTest.h"
#include "ReadFile.h"
#include "WriteFile.h"

int main()
{
	jsMinifyTest test;

	std::string src = ReadFile::readFile("D:/functions.js");

	std::cout << "Before length: " << src.length() << "\n";

	test.setSource(src);
	test.startTest();

	std::string newStr = test.getSource();

	std::cout << "After length: " << newStr.length() << "\n";
	WriteFile::writeFile(newStr,"D:/new.js");

	std::getchar();

	return 0;
}
