#ifndef _VLIV_BITMAP_H
#define _VLIV_BITMAP_H

#include <vliv.h>

HBITMAP VlivCreateTrueColorDIBSection(HDC hdc, int width, int height, unsigned int** bits, unsigned int format);

HBITMAP VlivCreateIndexedDIBSection(HDC hdc, int width, int height, unsigned int** bits, FILLCMAP fillcmap, void* args);

HBITMAP VlivCreateDefaultDIBSection(HDC hdc, int width, int height, const char* text, unsigned int** bits);

#endif
