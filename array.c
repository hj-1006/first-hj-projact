//#include<stdio.h>
//
//int main(voiu)
//{
//	//int subway_1 = 30; //����ö 1ȣ���� 30�� Ÿ���ִ�
//	//int subway_2 = 30; //����ö 2ȣ���� 50�� Ÿ���ִ�
//	//int subway_3 = 30; //����ö 3ȣ���� 100�� Ÿ���ִ�
//
//	//printf("����ö 1ȣ���� %d ���� Ÿ���ִ�.\n", subway_1);
//	//printf("����ö 2ȣ���� %d ���� Ÿ���ִ�.\n", subway_2);
//	//printf("����ö 3ȣ���� %d ���� Ÿ���ִ�.\n", subway_3);
//
//
//	//int subway_array[3];
//	//subway_array[0] = 30;
//	//subway_array[1] = 40;
//	//subway_array[2] = 50;
//
//	//for (int i = 0;i < 3;i++)
//	//{
//	//	printf("����ö %d ȣ���� %d���� Ÿ���ֽ��ϴ�.\n", i + 1, subway_array[i]);
//	//}
//	/*
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	*/
//	//�迭ũ��� �׻� ����� ��ȯ
//	/*/int size = 10;
//	int arr[10];*/
//
//
//	/*arr[10] = {1,2};	//3������ 0���� �ʱ�ȭ��
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	*/
//
//	/*float arr_f[5] = { 1.0f,2.0f,3.0f };
//	for (int i = 0;i < 5;i++)
//	{
//		printf("%.2f\n", arr_f[i]);
//	}*/
//
//	/*char c = 'A';
//	printf("%c\n", c);*/
//
//	//���ڿ� ���� '\0'���� ������
//	/*char str[6] = "coding"; 
//	char str[7] = "coding";
//	printf("%s", str);*/
//
//	char str[] = "coding";
//	/*printf("%s\n", str);
//	printf("%d\n", sizeof(str));*/
//
//	/*for (int i = 0;i < sizeof(str);i++)
//	{
//		printf("%c\n", str[i]);
//	}*/
//
//	/*char kor[] = "�ڵ���";
//	printf("%s\n", kor);
//	printf("%d\n", sizeof(kor));*/
//	//���� 1���� : 1 byte
//	//�ѱ� 1���� : 2 byte
//
//	/*char c_arry[7] = { 'c','o','d','i','n','g','\0'};
//	char c_arry[6] = { 'c','o','d','i','n','g' };
//	printf("%s\n", c_arry);*/
//
//	/*char c_array[10]= { 'c','o','d','i','n','g'};
//	printf("%s\n", c_array);*/
//
//	/*for (int i = 0;i < 10;i++)
//	{
//		printf("%c\n", c_array[i]);
//	}*/
//
//	/*for (int i = 0;i < 10;i++)
//	{
//		printf("%d\n", c_array[i]);//�ƽ�Ű�ڵ�
//	}*/
//	//���ڿ� �Է¹ޱ� : ������ ���� ���� ����
//	/*char name[256];
//	printf("�̸��� �Է��ϼ��� : ");
//	scanf_s("%s", name, sizeof(name));
//	printf("%s\n", name);*/
//
//	printf("%c\n", 'a');
//	printf("%d\n", 'a');
//
//
//	return 0;
//}

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    printf("\n\n === �ƺ��� ��Ӹ� ���� === \n\n");

    int answer;
    int cntShowBottle;
    int isCorrect = 0;

    // �Ӹ�ī���� �ڶ�� �� �ʿ��� �߸��� ��ȣ�� �������� �����մϴ�.
    int treatment = rand() % 4 + 1;

    printf("���� : %d\n", treatment);

    for (int i = 1; i <= 3; i++) {
        printf("> %d��° �õ� : ", i);

        cntShowBottle = rand() % 2 + 2;

        int bottle[4] = { 0, 0, 0, 0 };

        for (int j = 0; j < cntShowBottle; j++) {
            int randBottle;

            do {
                randBottle = rand() % 4 + 1;
            } while (bottle[randBottle - 1] == 1);

            bottle[randBottle - 1] = 1;

            if (randBottle == t reatment) {
                printf("  %d(�߸���)", randBottle);
            }
            else {
                printf("  %d", randBottle);
            }
        }

        // ����ڷκ��� ���� ������ �޽��ϴ�.
        printf("\n �����ϼ��� : ");
        scanf("%d", &answer);

        // ����ڰ� ������ ������ �߸����� ��ġ�ϸ�, �������� ó���մϴ�.
        if (answer == treatment) {
            printf(" >> �����Դϴ�!\n\n");
            isCorrect = 1;
            break;
        }
        else {
            printf(" >> ����! �ٽ� �õ��غ�����.\n\n");
        }
    }

    // ���� ��� ���
    if (isCorrect) {
        printf("�����մϴ�! �Ӹ�ī���� �ڶ����ϴ�!\n");
    }
    else {
        printf("�ƽ��Ե� �����ϼ̽��ϴ�. ���� ��ȸ�� �����غ�����.\n");
    }

    return 0;
}*/


















