/*
1、 输出原顺序数组展示给用户，用户输入一个值并
将值按顺序插入到数组里，最后输出数组。
2、 创建两个矩阵 A，B，并求 A·B 和 A x B 。 *3、（扩展题）创建矩阵 A，求 A 的逆矩阵
*4、（扩展题）重载左移运算符（<<），使其能直接用
std::cout 打印矩阵的内容；
*/
#include<stdio.h>
#include<windows.h>
int main()
{
	printf("1.\n");
	char byd[] = "尼古丁真，芙蓉王源";
	printf("%s\n", byd);
	char abc[30];
	scanf("%s", abc);
	printf("%s\n", abc);
	system("pause");
	printf("2\n");
	int ab[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int cd[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int yp[3][3];
	// 点乘
	printf("点乘\n");
	for (int i = 0; i < 3; i++)
		for (int p = 0; p < 3; p++)
		{
			yp[i][p] = ab[i][p] * cd[i][p];
		};
	for (int i = 0; i < 3; i++)
	{
		for (int p = 0; p < 3; p++)
		{
			printf("%d ", yp[i][p]);

		};
		printf("\n");
	}
	// 叉乘
	printf("叉乘\n");
	for (int i = 0; i < 3; i++)
		for (int o = 0; o < 3; o++)
		{
			ab[i][o] *= cd[o][i];
		};
	for (int i = 0; i < 3; i++)
	{
		for (int o = 0; o < 3; o++)
		{
			printf("%d ", ab[i][o]);
		}
		printf("\n");
	}
	printf("矩阵A2\n");
	int AA[2][2] =
	{
		{1,2},
		{-1,-3}
	};
	int a, b, c, d, e, f, g, h;
	e = AA[0][0];
	f = AA[0][1];
	g = AA[1][0];
	h = AA[1][1];
	a = (1 * h - 0 * f) / (e * h - f * g);
	c = (1 * g - 0 * e) / (f * g - e * h);
	b = (0 * h - 1 * f) / (e * h - f * g);
	d = (0 * g - e * 1) / (f * g - e * h);
	int aa[2][2] =
	{
		{a,b},
		{c,d}

	};
	for (int i = 0; i < 2; i++)
	{
		for (int p = 0; p < 2; p++)
		{
			printf("%d ", AA[i][p]);
		}
		printf("\n");
	}
	printf("逆矩阵\n");
	for (int i = 0; i < 2; i++)
	{
		for (int p = 0; p < 2; p++)
		{
			printf("%d ", aa[i][p]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}