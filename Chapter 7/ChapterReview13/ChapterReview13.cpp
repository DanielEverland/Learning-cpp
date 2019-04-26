/* ChapterReview13.cpp
Suppose the functions f1() and f2() have the following prototypes:
void f1(applicant* a);
const char* f2(const applicant* a1, const applicant* a2);

Declare p1 as a pointer that points to f1 and p2 as a pointer to f2. Declare ap as an
array of five pointers of the same type as p1, and declare pa as a pointer to an array
of ten pointers of the same type as p2. Use typedef as an aid.*/

#include <iostream>

struct applicant {};

void f1(applicant* a);
const char* f2(const applicant* a1, const applicant* a2);

typedef void (*p_f1)(applicant* a);
typedef const char* (*p_f2)(const applicant* a1, const applicant* a2);

int main()
{
	p_f1 p1 = f1;
	p_f2 p2 = f2;

	p_f1 ap[5];
	p_f2 (*pa)[10];
}