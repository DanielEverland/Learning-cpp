#include <iostream>

using namespace std;

class Port
{
public:
	Port(const char* br = "none", const char* st = "none", int b = 0);
	Port(const Port& p);

	virtual ~Port() { delete[] brand; }

	// Not virtual because virtual functions require the same signature
	// Port& operator=(const Port& p) != VintagePort& operator=(const VintagePort& vp)
	Port& operator = (const Port& p);
	Port& operator += (int b);			// adds b to bottles	
	Port& operator -= (int b);			// subtracts b from bottles, if available

	int BottleCount() const { return bottles; }
	virtual void Show() const;
	friend ostream& operator << (ostream& os, const Port& p);

private:
	char* brand;
	char style[20];	// i.e., tawny, ruby, vintage
	int bottles;
};