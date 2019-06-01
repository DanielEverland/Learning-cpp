#include "Port.h"

class VintagePort : public Port		// style necessarily = "vintage"
{
public:
	VintagePort();
	VintagePort(const char* br, int b, const char* nn, int y);
	VintagePort(const VintagePort& vp);
	~VintagePort() { delete[] nickname; }

	// += and -= operators not redefined because this class doesn't affect the bottles implementation.
	// It, and all it's functions such as the operators, can therefore be inherited

	// Redefined because nickname is dynamically allocated
	VintagePort& operator = (const VintagePort& vp);

	// Redefined because we've added nickname and year
	void Show() const;

	// Redefined because we've added nickname and year
	friend ostream& operator << (ostream& os, const VintagePort& vp);

private:
	char* nickname;		// i.e., "The Noble" or "Old Velvet", etc.
	int year;			// vintage year
};