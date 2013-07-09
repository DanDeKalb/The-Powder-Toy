#include <element.h>

int update_APPL(UPDATE_FUNC_ARGS) {
	int r, rx, ry, np;
	for (rx=-2; rx<3; rx++)
		for (ry=-2; ry<3; ry++)
			if (x+rx>=0 && y+ry>0 && x+rx<XRES && y+ry<YRES && (rx || ry))
			{
				if(pv[y/CELL][x/CELL]>2.5f) 
				{
				create_part(i, x, y, PT_APLJ);
				}
			}
		return 0;
}