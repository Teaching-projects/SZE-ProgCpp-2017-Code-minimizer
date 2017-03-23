#include <fstream>
#include<streambuf>
#include <clocale>
#include <string>
#include <iostream>
//#include "mainwindow.h"

#include "ReadFile.h"

std::string ReadFile::readFile(std::string path)
{
        //std::setlocale(LC_ALL, "");
        std::ifstream file(path);
        std::string fileContent((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
        file.close();
        return fileContent;
}
