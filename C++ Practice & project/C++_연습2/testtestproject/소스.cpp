#include<stdio.h>

void moveBall()
{
	if (y <= crt.top + R || y >= crt.bottom - R) {
		yv *= -(BOUNCE);
		if (y <= R) y = crt.top + R;
		if (y >= crt.bottom - R) y = crt.bottom - R;
	}
	if (x <= crt.left + R) {
		xv *= -(BOUNCE);
		x = crt.left + R;
	}
	x += (int)xv;
	y += (int)yv;
}

void moveBall2()
{
	if (y <= crt.top + R || y >= crt.bottom - R) {
		yv *= -(BOUNCE);
		if (y <= crt.top + R) y = crt.top + R;
		if (y >= crt.bottom - R) y = crt.bottom - R;
	}
	if (x >= crt.right - R) {
		xv *= -(BOUNCE);
		x = crt.right - R;
	}
	x += (int)xv;
	y += (int)yv;
}

