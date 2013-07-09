#include <element.h>

int update_MASH(UPDATE_FUNC_ARGS) {
	int r, rx, ry;
	if ((legacy_enable||parts[i].temp>(273.15f+50.0f) && 1>(rand()%250)))
				{
					if(1>rand()%2) 
					{
						create_part(-1,x,y-1,PT_ALCV);
						parts[i].life +=1;						
					}
					else
					{
						create_part(-1,x,y-1,PT_WTRV);
						parts[i].life +=1;
					}
				}
	for (rx=-2; rx<3; rx++)
		for (ry=-2; ry<3; ry++)
            if(x+rx>=0 && y+ry>0 && x+rx<XRES && y+ry<YRES && (rx || ry))
              {
			  r = pmap[y+ry][x+rx];
			  if (!r)
				continue;
			  if (parts[i].life >= 5)
			  {
				  part_change_type(i,x,y,PT_DMSH);
			  }
			  if ((r&0xFF)==PT_HOPS && 1>(rand()%250))
				{
					part_change_type(i,x,y,PT_MALT);
					kill_part(r>>8);
				}
			  }
			return 0;
}