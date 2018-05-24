#include "stdafx.h"
#include "DFD.h"

int main() 
{
	DFD dfd;
	time_t a, b;
	a = clock();
	dfd.open("input file path");
	dfd.solve();
	b = clock();
	cout << float(b - a) / 1000 << 's' << endl;
	return 0;
}
