#include <element.h>

int update_SUGR(UPDATE_FUNC_ARGS) {
	int r, rx, ry;
	for (rx=-2; rx<3; rx++)
		for (ry=-2; ry<3; ry++)
			if (x+rx>=0 && y+ry>0 && x+rx<XRES && y+ry<YRES && (rx || ry))
			{
				r = pmap[y+ry][x+rx];
				if (!r)
					continue;
				if ((r&0xFF)==PT_YEST && 1>(rand()%250))
				{
					part_change_type(i,x,y,PT_ALCO);
					kill_part(r>>8);
				}
				if ((r&0xFF)==PT_YWTR && 1>(rand()%250))
				{
					part_change_type(i,x,y,PT_ALCO);
					kill_part(r>>8);
				}
				if ((r&0xFF)==PT_WATR && 1>(rand()%250))
				{
					part_change_type(i,x,y,PT_SUGW);
					kill_part(r>>8);
				}
			}
	return 0;
}