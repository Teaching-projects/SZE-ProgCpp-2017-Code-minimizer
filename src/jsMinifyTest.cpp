#include "jsMinifyTest.h"
#include <string>
#include <iostream>

void jsMinifyTest::setSource(std::string str) {
	source.setSource(str);
	jsMin.setOldSource(source);

}
void jsMinifyTest::startTest(void) {
	jsMin.minimize();
}

std::string jsMinifyTest::getSource(void) {
	return jsMin.getSource().toString();
}
