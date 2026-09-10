#include "model.h"

static POINT Points[MODEL_MAX_POINTS];
static int Index = 0;


extern inline int GetNumPoints() {
	return Index;
}
extern inline POINT GetPoint(int i) {
	return Points[i];
}

extern void AddPoint(POINT p) {
	if (Index < MODEL_MAX_POINTS)
		Points[Index++] = p;
}

extern void DeleteLastPoint() {
	if (Index > 0)
		Index--;
}