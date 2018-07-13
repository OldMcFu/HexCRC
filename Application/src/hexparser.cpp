/*
 * hexparser.cpp
 *
 *  Created on: 13.07.2018
 *      Author: Romer
 */

#include "../headers/hexparser.h"

hex_parser::hex_parser() {
	// TODO Auto-generated constructor stub

}

hex_parser::~hex_parser() {
	// TODO Auto-generated destructor stub
}

void hex_parser::get_lines(std::queue<std::string> l) {
	lines = l;
}

uint16_t hex_parser::sort_all_data() {
	uint8_t byte_amount = 0;
	uint16_t address = 0;
	uint8_t type = 0xff;
	std::string s;
	uint8_t byte_count = 9;

	while (!lines.empty())
	  {
		s = lines.front();

		if(s[0] == ':')
		{
			byte_amount = string_to_uint(s.substr (1,2));
			address = string_to_uint(s.substr (3,6));
			type = string_to_uint(s.substr (7,8));
			if(type == 0)
			{
				do{
					type = string_to_uint(s.substr (byte_count,byte_count+1));
					byte_amount--;
					byte_count += 2;
				}while(byte_amount != 0);
			}
		}
	    lines.pop();
	  }

}

uint16_t hex_parser::string_to_uint(std::string s){
	uint16_t v = 0;
    std::stringstream ss;
    ss << std::hex << s;
    ss >> v;
    return v;
}
