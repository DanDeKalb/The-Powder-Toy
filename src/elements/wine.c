#include <element.h>

int update_WINE(UPDATE_FUNC_ARGS) {
	int r, rx, ry, np;
	for (rx=-2; rx<3; rx++)
		for (ry=-2; ry<3; ry++)
			if (x+rx>=0 && y+ry>0 && x+rx<XRES && y+ry<YRES && (rx || ry))
			{
				r = pmap[y+ry][x+rx];
				if (!r)
					continue;
				if ((r&0xFF)==PT_CHRW && 1>(rand()%250))
				{
					part_change_type(i,x,y,PT_AWNE);
				}
				if ((r&0xFF)==PT_AWNE && 1>(rand()%10000))
				{	
					part_change_type(i,x,y,PT_AWNE);					
				}
			}
			if ((legacy_enable||parts[i].temp>(273.15f+100.0f) && 1>(rand()%250)))
				{
					part_change_type(i,x,y,PT_WTRV);
					create_part(-1,x,y-1,PT_GRPB);
				}
		return 0;
}