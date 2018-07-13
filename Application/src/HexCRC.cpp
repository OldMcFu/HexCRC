//============================================================================
// Name        : HexCRC.cpp
// Author      : Matthias Romer
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "../headers/filehandler.h"

using namespace std;

int main(int argc,  char** argv) {
	cout << argv[1] << endl;

	filehandler* fh = new filehandler(argv[1]);
	fh->read_file();
	delete fh;


	return 0;
}
