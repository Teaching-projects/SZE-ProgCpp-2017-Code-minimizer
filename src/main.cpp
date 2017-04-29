#include <iostream>

//#include "jsMinifyTest.h"
//#include "cssMinifyTest.h"
#include "jsMinifyProc.h"
#include "commentTest.h"
#include "ReadFile.h"
#include "WriteFile.h"

int main() {


	
	std::string src = ReadFile::readFile("D:/functions.js");
	std::cout << src << std::endl;
	jsMinifyProc valami;	
	valami.setOldSource(src);
	valami.getVariableName(src);
	valami.variableReplace(src);
	WriteFile::writeFile(valami.getSource().toString(), "D:/new.js");

	//std::cout << "Before length: " << src.length() << "\n";

	//test.setSource(src);
	//test.startTest();

	//std::string newStr = test.getSource();

	//std::cout << "After length: " << newStr.length() << "\n";

	/*WriteFile::writeFile(newStr,"D:/new.js");*/

	/*WORKING!
	cssMinifyTest test;

	std::string src = ReadFile::readFile("D:/functions.css");

	std::cout << "Before length: " << src.length() << "\n";

	test.setSource(src);
	test.startTest();

	std::string newStr = test.getSource();

	std::cout << "After length: " << newStr.length() << "\n";
	WriteFile::writeFile(newStr, "D:/new.css");*/

	/*commentTest Working!
	commentTest test;

	std::string src = ReadFile::readFile("D:/functions.js");

	std::cout << "Before length: " << src.length() << "\n";

	test.setSource(src);
	test.startTest();

	std::string newStr = test.getSource();

	std::cout << "After length: " << newStr.length() << "\n";
	WriteFile::writeFile(newStr, "D:/new.js");*/

	std::getchar();

	return 0;
}
