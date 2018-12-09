#pragma once
#include <string>
#include <wx\dcclient.h>
class LevelMap
{
private:
	int LevelWidth;
	int LevelHeight;
	std::string Map;
public:
	LevelMap();
	char GetTile(int x, int y);
	void Draw(wxPaintDC & dc, int x, int y);
	~LevelMap();
};

