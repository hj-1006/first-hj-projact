#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	srand(time(NULL));
	printf("\n\n ====== �ƺ��� ��Ӹ����� ====== \n\n");
	
	int answer;
	int treatment = rand() % 4 + 1;
	int cntShowBottle = 0;
	int prevCntShowBottle = 0;
	int cnt = 0;

	for (int i = 1;i <= 3;i++)
	{
		printf(" >> %d ��° �õ� \n", i);

		cntShowBottle = rand() % 2 + 2;

		int bottle[4] = { 0,0,0,0 };

		for (int j = 0;j < cntShowBottle; j++)
		{
			int randBottle;

			do {
				randBottle = rand() % 4 + 1;
			} while (bottle[randBottle - 1] == 1);

			bottle[randBottle - 1] = 1;

			if (randBottle == treatment) {
				printf(" %d(�߸���)", randBottle);
			}
			else {
				printf(" %d", randBottle);
			}
		}

		printf("\n �����ϼ��� : ");
		scanf_s(" %d", &answer);

		if (answer = treatment) {
			printf(" >> �����Դϴ�!! \n\n");
			cnt++;
			break;
		}
		else {
			printf("����\n");
		}
		
		return 0;
	}

}