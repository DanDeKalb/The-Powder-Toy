#include <element.h>

int update_SUGC(UPDATE_FUNC_ARGS) {
	int r, rx, ry, np;
	for (rx=-2; rx<3; rx++)
		for (ry=-2; ry<3; ry++)
            if (x+rx>=0 && y+ry>0 && x+rx<XRES && y+ry<YRES && (rx || ry))
            {
				r = pmap[y+ry][x+rx];
				if (!r)
					continue;
				if ((pv[y/CELL][x/CELL]>2.5f) && 1>(rand()%250))
					{
						if(1>rand()%2) 
							{
							create_part(-1,x,y-1,PT_SUGR);
							parts[i].life +=1;
							}
						else
							{
							create_part(-1,x,y-1,PT_MOLS);
							parts[i].life +=1;
							}
					}
				if (parts[i].life >= 5)
				{
					  kill_part(i);
				}			  
			}
			return 0;
}