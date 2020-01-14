#include "toolbox.h"

int main()
{
    REG_DISPCNT = DCNT_MODE3 | DCNT_BG2;
	

    m3_plot(120, 80, CLR_MAG);
    m3_plot(136, 80, CLR_CYAN);
    m3_plot(120, 96, CLR_YELLOW);

	while(1);

	return 0;
}

