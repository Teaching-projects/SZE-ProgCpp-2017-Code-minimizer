#include "WriteFile.h"

#include <iostream>
#include <fstream>

void WriteFile::writeFile(std::string source, std::string path)
{
	std::ofstream file(path);
	file << source;
	file.close();
}
