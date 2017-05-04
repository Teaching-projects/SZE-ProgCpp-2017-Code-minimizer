#include <iostream>

#include "jsMinifyProc.h"
#include "commentTest.h"
#include "ReadFile.h"
#include "WriteFile.h"

int main() {
	std::cout << "Ez vicces" << std::endl;
	std::string src = ReadFile::readFile("F:/functions.js");
	jsMinifyProc valami;
	
	sourceCode* so = new sourceCode(src);
	valami.setOldSource(*so);
	valami.minimizeVariableName();
	valami.minimizeFunctionName();

	WriteFile::writeFile(valami.getSource().toString(), "F:/new.js");

	std::cout << "Kesz" << std::endl;
	std::getchar();

	return 0;
}
