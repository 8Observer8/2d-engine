//-----------------------------------------------------------------------------
//	2d platform game engine and level editor by Andreas Traczyk (2014-15) GPL
//	http://andreastraczyk.com/	email: andreastraczyk@gmail.com
//
//	DESCRIPTION:	le misc functions
//-----------------------------------------------------------------------------

#ifndef _UTILS_H
#define _UTILS_H

#include "point.h"
#include "vector.h"
#include "camera.h"
#include "rectangle.h"

Point worldToScreen(Vector2 world_point, Camera camera, ScreenRect screen);
Vector2 screenToWorld(Point screen_point, Camera camera, ScreenRect screen);
Point worldToTile(Vector2 position, Vector2 size);
bool isInRange(int x, int min, int max);
int roundUp(int numToRound, int multiple);

#endif







