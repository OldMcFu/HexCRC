/*
 * filehandler.h
 *
 *  Created on: 13.07.2018
 *      Author: Romer
 */

#ifndef FILEHANDLER_H_
#define FILEHANDLER_H_

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <queue>

class filehandler {
private:
	std::string file_path;
	std::ofstream ofile;
	std::ifstream ifile;
	std::queue<std::string> lines;

public:
	filehandler(std::string path_to_file);
	virtual ~filehandler();
	int read_file();
	std::queue<std::string> get_queue();
};



#endif /* FILEHANDLER_H_ */
