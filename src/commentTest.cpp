#include "commentTest.h"
#include <string>
#include <iostream>

void commentTest::setSource(std::string str) {
	source.setSource(str);
	commentMin.setOldSource(source);

}
void commentTest::startTest(void) {
	commentMin.minimize();
}

std::string commentTest::getSource(void) {
	return commentMin.getSource().toString();
}
