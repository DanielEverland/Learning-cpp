// ChapterReview08.cpp -- Devise a structure declaration that describes a fish. The structure should include the kind,
// the weight in whole ounces, and the length in fractional inches

#include "pch.h"
#include <iostream>
#include <string>

struct fish {
	std::string type;
	int weightInOunces;
	float lengthInInches;
};