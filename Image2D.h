#ifndef IMAGE2D_H
#define IMAGE2D_H

#include <string>

class Image2D
{
	private:
	int width;
	int height; 
public:
	Image2D();
	Image2D(std::string filename);

	inline int getHeight(){return height;}
	inline int getWidth(){return width;}

private:
	void ReadImagePGM(std::string filename);
	
};

#endif