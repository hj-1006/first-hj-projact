//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//int main_array_projact(void)
//{
//	srand(time(NULL));
//	printf("\n\n === �ƺ��� ��Ӹ� ���� === \n\n");
//	int answer; //��밪
//	int treatment = rand() % 4;// �߸��� ����
//
//	int cntShowBottle = 0;// �̹��� ����
//	int prevCntShowBottle = 0;// ������ ������ �� ����?
//	//3���� ��ȸ
//	for (int i = 1;i <= 3;i++)
//	{
//		int bottle[4] = { 0,0,0,0 };
//		do {
//			cntShowBottle = rand() % 2 + 2; // ������ �� ���� 
//		} while (cntShowBottle == prevCntShowBottle);
//
//		int islncluded = 0;
//		printf("> %d��° �õ� : ", i);
//
//		//������ �� ���� ����
//		for (int j = 0;j < cntShowBottle;j++)
//		{
//			int randBottle = rand() % 4;
//
//			// ���� ���õ��� ���� ���̸�, ����ó��
//			if (bottle[randBottle] == 0)
//			{
//				bottle[randBottle] = 1;
//				if (randBottle == treatment)
//				{
//					islncluded = 1;
//				}
//			}
//			// �̹� ���õ� ���̸�, �ߺ��̹Ƿ� �ٽ� ����
//			else
//			{
//				j--;
//			}
//		}
//
//		//����� ����ǥ��
//		for (int k = 0;k < 4;k++)
//		{
//			if (bottle[k] == 1)
//				printf("%d", k + 1);
//		}
//		printf(" ������ �Ӹ��� �ٸ��ϴ�\n\n");
//
//		if (islncluded == 1)
//		{
//			printf(" >>���� ! �Ӹ��� �����!\n");
//		}
//		else
//		{
//			printf(" >> ����! �Ӹ��� ���� �ʾҾ��. �Ф�\n");
//		}
//		printf("\n ... �Լ� �Ϸ��� �ƹ�Ű�� ��������...\n");
//		getchar();
//	}
//
//	printf("\n\n�߸����� ����ϱ��? ");
//	scanf_s("%d", &answer);
//
//	if (answer == treatment+1)
//	{
//		printf("\n >> �����Դϴ�!\n");
//	}
//	else
//	{
//		printf("\n >> Ʋ�� �� ������ %d �Դϴ�.\n", treatment +1);
//	}
//
//	return 0;
//}
