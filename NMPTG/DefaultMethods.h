#ifndef __DEFAULT_METHODS_H__
#define __DEFAULT_METHODS_H__

#include <d3dx9.h>

#include "DefaultStructure.h"
#include "DefaultConstant.h"

#include <vector>

using namespace std;

class Default
{
public:
	// chuyen content thanh string, char* hoac wchar_t*
	template <class P>
	static pstring tostr(const P& content)
	{
		pstringstream os;
		os << content;
		return os.str();
	}
};


#endif