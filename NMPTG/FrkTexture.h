#ifndef __FRKTEXTURE_H__
#define __FRKTEXTURE_H__

#include <d3d9.h>
#include <d3dx9.h>
#include <sstream>
#include <vector>
#include <exception>
#include <time.h>

using namespace std;

class FrkTexture
{
private:
	int m_width;
	int m_height;
public:
	void SetHeight(int);
	void SetWidth(int);
	void SetTexture(FrkTexture);
	int GetHeight();
	int GetWidth();
	FrkTexture();
	FrkTexture GetTexture();
	FrkTexture(FrkTexture&);
	FrkTexture(int, int);
	~FrkTexture();
};

#endif