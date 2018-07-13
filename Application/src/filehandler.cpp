/*
 * filehandler.cpp
 *
 *  Created on: 13.07.2018
 *      Author: Romer
 */

#include "../headers/filehandler.h"



filehandler::filehandler(std::string path_to_file) {

	file_path = path_to_file;
	ifile.open (file_path);
	ofile.open("output.hex");

}

filehandler::~filehandler() {
	ifile.close();
	ofile.close();
}

int filehandler::read_file() {
    std::string line;

   if(!ifile.is_open()) {
      perror("Error open");
      return 1;
   }
    while(getline(ifile, line)) {
    	lines.push(line);
    }
   return 0;
}

std::queue<std::string> filehandler::get_queue() {
	return lines;
}

