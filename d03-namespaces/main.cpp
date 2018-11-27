#include "ns1.h"
#include "ns2.h"

int main()
{
	// using namespace ns1;
	using ns2::show;

	ns1::show();
	ns2::show();

	show();

	return 0;
}
