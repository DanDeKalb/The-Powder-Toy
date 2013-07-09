#include <element.h>

int update_FOAM(UPDATE_FUNC_ARGS) {
	int r, rx, ry, np;
	for (rx=-2; rx<3; rx++)
		for (ry=-2; ry<3; ry++)
			if (x+rx>=0 && y+ry>0 && x+rx<XRES && y+ry<YRES && (rx || ry))
			{
				r = pmap[y+ry][x+rx];
				if (!r)
					continue;
				if ((parts[i].life ==0) && (pv[y/CELL][x/CELL]<2.5f) && 1>(rand()%250))
			    {
					part_change_type(i,x,y,PT_BEER);
			    }
				else
				{
					parts[i].life==50;
				}
			}
			return 0;
}