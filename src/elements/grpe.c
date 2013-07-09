#include <element.h>

int update_GRPE(UPDATE_FUNC_ARGS) {
	int r, rx, ry, np;
	for (rx=-2; rx<3; rx++)
		for (ry=-2; ry<3; ry++)
			if (x+rx>=0 && y+ry>0 && x+rx<XRES && y+ry<YRES && (rx || ry))
			{
				if(pv[y/CELL][x/CELL]>2.5f) 
				{
				create_part(i, x, y, PT_GRPJ);
				}
			}
			if ((legacy_enable||parts[i].temp>(273.15f+100.0f) && 1>(rand()%250)))
				{
					part_change_type(i,x,y,PT_WTRV);
					create_part(-1,x,y-1,PT_GRPB);
				}
		return 0;
}