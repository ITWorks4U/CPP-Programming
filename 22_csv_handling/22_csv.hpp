#pragma once

/*
	if #pragma once gives you a warning,
	then use the alternative:

	#ifndef HEADER_FILE_NAME_HERE
	#define HEADER_FILE_NAME_HERE

	//	functions, data types, etc.

	#endif
*/

bool write_to_csv();
bool read_from_csv();