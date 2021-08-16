#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	long long c, h, o, cc, oo, hh;
	long long cm, wm, gm;
	scanf("%lld %lld %lld", &c, &h, &o);
	/*
	c  = cm + 6 *gm
	cm = c - 6 * gm
	o  = 2 * cm + wm + 6* gm
	o  = 2 * ( c - 6 *gm ) + wm + 6 * gm
	o = 2*c - 12 * gm  + wm + 6 gm
	o = 2*c - 6 * gm + wm
	wm = o - 2*c + 6 gm
	h  = 2 * wm + 12 * gm
	h  = 2 * (o-2*c + 6 * gm) + 12 * gm
	h  = 2 * o - 4*c + 24 gm
	gm = (h-2 * o + 4 *c )/24
	*/
	gm = (h - (2 * o) + (4 * c)) / 24;
	cm = c - 6 * gm;
	wm = o - 2 * c + 6 * gm;
	cc = cm + 6 * gm;
	hh = 2 * wm + 12 * gm;
	oo = wm + 2 * cm + 6 * gm;
	if (oo != o) goto error;
	if (cc != c) goto error;
	if (hh != h) goto error;
	printf("%lld %lld %lld", wm, cm, gm);
	return 0;
error:
	printf("Error");
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	return 0;
}
