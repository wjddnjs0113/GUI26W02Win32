#pragma once
#include "framework.h"

#define MODEL_MAX_POINTS	3000

int GetNumPoints();
POINT GetPoint(int);

void AddPoint(POINT);
void DeleteLastPoint();