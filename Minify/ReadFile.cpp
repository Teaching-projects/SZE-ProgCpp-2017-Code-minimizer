#include <fstream>
#include<streambuf>
#include <clocale>
#include <string>
#include <iostream>

#include "ReadFile.h"

std::string ReadFile::readFile(std::string path)
{
        std::setlocale(LC_ALL, "");
        std::ifstream file(path);
        std::string fileContent((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
        file.close();
        return fileContent;
}

std::string ReadFile::getFileExtension(std::string fileName)
{
    std::size_t lastDotPosition = fileName.find_last_of(".");
    return fileName.substr(lastDotPosition);
}
