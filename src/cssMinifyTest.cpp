#include "cssMinifyTest.h"
#include <string>
#include <iostream>

void cssMinifyTest::setSource(std::string str) {
	source.setSource(str);
	cssMin.setOldSource(source);

}
void cssMinifyTest::startTest(void) {
	cssMin.minimize();
}

std::string cssMinifyTest::getSource(void) {
	return cssMin.getSource().toString();
}
