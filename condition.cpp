/*
#include<stdio.h>
int main(void) 
{
	int age = 0;
	scanf_s("%d", &age);
	if (age >= 20)
		printf("�Ϲ����Դϴ�.\n");
	else if (8 <= age <= 12)
		printf("�ʵ��л��Դϴ�.\n");
	else if (13 <= age <= 15)
		printf("���л��Դϴ�.\n");
	else if (16 <= age <= 19)
		printf("����л��Դϴ�.\n");
	else 
		printf("����\n");
	return 0;
}*/
/*
#include<stdio.h>
int main(void)
{
	for (int i = 1;i <= 30;i++)
	{
		if (i >= 6) 
		{
			printf("%d �л��� ���� ���ּ���\n",i);
			break;  //����
		}
		printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���\n", i);
	}
	return 0;
}

*/
/*
#include<stdio.h>
int main(void)
{
	for (int i = 1;i < 30;i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d �� �л��� �Ἦ�Դϴ�.\n", i);
				continue;  //�����ϰ� �Լ�����
			}
			printf("%d �� �л��� ��ǥ �غ� ���ּ���\n",i);
		}
	}
	return 0;
}
*/

/*
#include<stdio.h>
int main(void)
{
	int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
	if (a == b && c == d)
	{
		printf("a��b�� ���� c��d�� ����\n");
	}
	else
	{
		printf("���� ���� �ٸ���\n");
	}
}

#include<stdio.h>
int main(void)
{
	int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
	if (a == b || c == d)
	{
		printf("a��b Ȥ�� c��d�� ����\n");
	}
	else
	{
		printf("���� ���� �ٸ���\n");
	}
}
*/

/*  //����
#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//srand(timne(NULL));
	//int num = rand() % 3 + 1;
	printf("���� �ʱ�ȭ ����..\n");
	for (int i = 0;i < 10;i++)
	{
		printf("%d ",rand() % 10);
	}

	srand(time(NULL));
	printf("\n���� �ʱ�ȭ ����..\n");
	for (int i = 0;i < 10;i++)
	{
		printf("%d ", rand() % 10);
	}
		return 0;
}
*/

/*
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	
	srand(time(NULL));
	int i = rand() %3;   //0,1,2
	if (i == 0)
	{
		printf("����\n");
	}
	else if (i == 1)
	{
		printf("����\n");
	}
	else
	{
		printf("��\n");
	}
	

	
	srand(time(NULL));
	int i = rand() % 3;
	switch (i)	//����ġ
	{
	case 0:	printf("����\n");break;
	case 1:	printf("����\n");break;
	case 2:	printf("��\n");break;
	default:printf("��?��\n");	break;
	}
	
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	srand(time(NULL));
	int age = rand()%100;
	switch (age)
	{
	case 8: 
	case 9: 
	case 10:
	case 11:
	case 12:
	case 13:printf("�ʵ��л��Դϴ�\n"); break;
	case 14:
	case 15:
	case 16:printf("���л��Դϴ�\n"); break;
	case 17:
	case 18:
	case 19: printf("����л��Դϴ�\n"); break;
	default: printf("�л��� �ƴϿ���%d\n",age); break;
	}
	return 0;
}
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	srand(time(NULL));
	int num = rand() % 100;
	printf("���� %d\n", num);
	int answer = 0;
	int chance = 5;
	while (chance > 0)
	{
		printf("���� ��ȸ %d ��\n", chance--);
		printf("���ڸ� ���纸����(1~100) : ");
		scanf_s("%d", &num);
		
		if (answer > num)
		{
			printf("%d ���� ŭ�ϴ�.\n\n", answer);
		}
		else if (answer < num)
		{
			printf("%d ���� �۽��ϴ�.\n\n", answer);
		}
		else if (answer == num)
		{
			printf("�����̴� ���ݼ���!\n\n");
			break;
		}
		else
		{
			printf("�����߻�");
		}
		if (chance == 0)
		{
			printf("������ �� ����ϼ˽��ϴ� ������ %d �Դϴ�.\n\n", num);
		}
	}
	return 0;
}
















































































