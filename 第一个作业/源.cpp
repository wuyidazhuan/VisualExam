/*
1�� ���ԭ˳������չʾ���û����û�����һ��ֵ��
��ֵ��˳����뵽��������������顣
2�� ������������ A��B������ A��B �� A x B �� *3������չ�⣩�������� A���� A �������
*4������չ�⣩���������������<<����ʹ����ֱ����
std::cout ��ӡ��������ݣ�
*/
#include<stdio.h>
#include<windows.h>
int main()
{
	printf("1.\n");
	char byd[] = "��Ŷ��棬ܽ����Դ";
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
	// ���
	printf("���\n");
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
	// ���
	printf("���\n");
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
	printf("����A2\n");
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
	printf("�����\n");
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