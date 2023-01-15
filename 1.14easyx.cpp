#include<easyx.h>

#include<stdio.h>
//int main()
//{
//	initgraph(800, 600);
//	setorigin(400,300);
//	setaspectratio(1, -1);
//	circle(0, 0, 200);
//	getchar();
//	closegraph();
//	return 0;
//}


//int main()
//{
//	initgraph(800, 600);
//	setorigin(400, 300);
//	setaspectratio(1, -1);
//	putpixel(-200, 200, WHITE);
//	putpixel(200, 200, YELLOW);
//	putpixel(-200, -200, GREEN);
//	putpixel(200, -200, CYAN);
//
//	getchar();
//	closegraph();
//	return 0;
//}

int main()
{
	initgraph(800, 600);
	setorigin(400, 300);
	setaspectratio(1, -1);
	int x, y;
	for (int i = 0; i < 1000; i++)
	{
		x = rand() % (800 + 1) - 400;
		y = rand() % (600 + 1) - 300;
		putpixel(x, y, RED);
	}
	getchar();
	closegraph();
	return 0;
}