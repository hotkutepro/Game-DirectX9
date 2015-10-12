#include "Map.h"

void Map::loadMaxtrix(string path)
{
	fstream open(path);
	open >> this->_row;
	open >> this->_column;
	this->_matrix = new int*[this->_row];
	for (int j = 0; j<this->_row; j++)
	{
		this->_matrix[j] = new int[this->_column];
	}
	for (int i = 0; i<this->_row; i++)
	{
		for (int j = 0; j<_column; j++)
		{
			open >> this->_matrix[i][j];
		}
	}
	open.close();
}
void Map::Init(string path, FrkTexture* texture)
{
	this->loadMaxtrix(path);
	this->_texture = texture;
}
void Map::Update()
{

}
void Map::Render()
{

}
Map::Map()
{
	for (int i = this->_row - 1; i >= 0; i--)
	{
		for (int j = 0; j<this->_column; j++)
		{
			RECT s_rect;
			s_rect.left = (this->_matrix[i][j]) * 32;
			s_rect.right = s_rect.left + 32;
			s_rect.top = 0;
			s_rect.bottom = 32;

			RECT des_rect;
			des_rect.left = j * 32;
			des_rect.right = (j + 1) * 32;

			des_rect.top = 448 - i * 32;
			des_rect.bottom = des_rect.top + 32;
			m_hGraphic->DrawTexture(_texture->GetImage(), s_rect,D3DXVECTOR2(des_rect.left, des_rect.right), D3DCOLOR_XRGB(255, 255, 255));
		}
	}
}


Map::~Map()
{
}
