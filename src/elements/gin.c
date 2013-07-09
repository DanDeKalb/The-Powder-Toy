#include <element.h>

int update_GIN(UPDATE_FUNC_ARGS) {
	int r, rx, ry;
	for (rx=-2; rx<3; rx++)
		for (ry=-2; ry<3; ry++)
            if(x+rx>=0 && y+ry>0 && x+rx<XRES && y+ry<YRES && (rx || ry))
				{
				r = pmap[y+ry][x+rx];
				if (!r)
					continue;
					if ((r&0xFF)==PT_CBNW && 1>(rand()%250))
						{
							part_change_type(i,x,y,PT_GNT);
							kill_part(r>>8);
						} 
					if ((r&0xFF)==PT_VRMT && 1>(rand()%250))
					{
						part_change_type(i,x,y,PT_MRTN);
						kill_part(r>>8);
					}  									
				}
			return 0;
}