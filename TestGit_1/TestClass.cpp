#include "TestClass.h"

double TestClass::getValue() {
	return value;
}

void TestClass::setValue(double newValue) {
	value = newValue;
}

void TestClass::doubleMult() {
	value = value * 2;
}
