//============================================================================
// Name        : 1c.cpp
// Author      : kda
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <time.h>

int main() {
	time_t nt = time (NULL);
	int we;
	we = 234;



	cout << "!!!Hello World!!! \n" << we << ctime (&nt) << endl; // prints !!!Hello World!!!
	return 0;
}
