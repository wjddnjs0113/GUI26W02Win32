#include "model.h"

static POINT Points[MODEL_MAX_POINTS];
static int shapeType[MODEL_MAX_POINTS];
static int Index = 0;


extern inline int GetNumPoints() {
	return Index;
}
extern inline POINT GetPoint(int i) {
	return Points[i];
}
extern inline int GetShapeType(int i) {
	return shapeType[i];
}

extern void AddPoint(POINT p, int type) {
	if (Index < MODEL_MAX_POINTS) {
		Points[Index] = p;
		shapeType[Index] = type;
		Index++;
	}
}

extern void DeleteLastPoint() {
	if (Index > 0)
		Index--;
}