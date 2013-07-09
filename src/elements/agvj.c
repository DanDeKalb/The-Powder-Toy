#include <element.h>

int update_AGVJ(UPDATE_FUNC_ARGS) {
	int r, rx, ry, np;
	for (rx=-2; rx<3; rx++)
		for (ry=-2; ry<3; ry++)
			if (x+rx>=0 && y+ry>0 && x+rx<XRES && y+ry<YRES && (rx || ry))
			{
				r = pmap[y+ry][x+rx];
				if (!r)
					continue;
				if (parts[i].life == 0)
				{
					part_change_type(i,x,y,PT_WORT);
				}
				
			}
		return 0;
}