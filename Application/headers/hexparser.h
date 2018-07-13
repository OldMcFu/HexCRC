/*
 * hexparser.h
 *
 *  Created on: 13.07.2018
 *      Author: Romer
 */

#ifndef HEXPARSER_H_
#define HEXPARSER_H_

#include <cstdint>
#include <queue>
#include <string>
#include <sstream>
#include <iostream>

class hex_parser {
private:
	std::queue<std::string> lines;
	std::vector<uint16_t> bytes;
public:
	hex_parser();
	virtual ~hex_parser();

	void get_lines(std::queue<std::string> l);
	uint16_t sort_all_data();
	uint16_t string_to_uint(std::string s);
};

#endif /* HEXPARSER_H_ */
