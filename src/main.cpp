#include <iostream>

<<<<<<< HEAD
#include "commentremove.h"
=======
>>>>>>> origin/master
#include "jsMinifyProc.h"
#include "commentTest.h"
#include "ReadFile.h"
#include "WriteFile.h"

int main() {
<<<<<<< HEAD
	std::cout << "1." << std::endl;
/*
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
	*/

	std::string src = ReadFile::readFile("F:/fun.js");
	jsMinifyProc valami;

	sourceCode so;
	so.append(src);

	commentRemove comment;
	comment.setOldSource(so);
	comment.minimize();

	valami.setOldSource(comment.getSource());
	valami.minimize();

	std::cout << valami.getSource().toString()<< std::endl;
	
=======
	std::cout << "Ez vicces" << std::endl;
	std::string src = ReadFile::readFile("F:/functions.js");
	jsMinifyProc valami;
	
	sourceCode* so = new sourceCode(src);
	valami.setOldSource(*so);
	valami.minimizeVariableName();
	valami.minimizeFunctionName();

	WriteFile::writeFile(valami.getSource().toString(), "F:/new.js");
>>>>>>> origin/master

	std::cout << "Kesz" << std::endl;
	std::getchar();
	
	return 0;
}
