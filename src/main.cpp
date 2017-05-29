#include <iostream>

#include "commentremove.h"
#include "jsMinifyProc.h"
#include "commentTest.h"
#include "ReadFile.h"
#include "WriteFile.h"

int main() {

	std::cout << "1." << std::endl;

	std::string src = ReadFile::readFile("F:/functions.js");
	jsMinifyProc valami;

	sourceCode so;
	so.append(src);

	commentRemove comment;
	comment.setOldSource(so);
	comment.minimize();

	valami.setOldSource(comment.getSource());
	valami.minimize();
	valami.setOldSource(valami.getSource());
	valami.minimizeVariableName();
	valami.setOldSource(valami.getSource());
	valami.minimizeFunctionName();

	std::cout << valami.getSource().toString() << std::endl;
	so.empty();
	so.append(src);

	valami.setOldSource(so);
	valami.minimizeVariableName();
	valami.setOldSource(valami.getSource());
	valami.minimizeFunctionName();

	/*
	std::string src = ReadFile::readFile("F:/fun.js");
	jsMinifyProc valami;

	sourceCode so;
	so.append(src);

	commentRemove comment;
	comment.setOldSource(so);
	comment.minimize();

	valami.setOldSource(comment.getSource());
	valami.minimize();
	valami.minimizeVariableName();
	valami.minimizeFunctionName();
	*/
	WriteFile::writeFile(valami.getSource().toString(), "F:/new.js");

	std::cout << "Kesz" << std::endl;
	std::getchar();

	return 0;
}
