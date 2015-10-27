#ifndef __DEFAULT_STRUCTURE_H__
#define __DEFAULT_STRUCTURE_H__

#include <sstream>
#include <iostream>
#include <d3dx9.h>
using namespace std;

#ifdef _UNICODE
typedef	std::wstring	pstring;
typedef wchar_t pchar;
typedef wstringstream	pstringstream;

#else

typedef char pchar;
typedef std::string pstring;
typedef ostringstream pstringstream;

#endif

#endif