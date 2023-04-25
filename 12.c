#include <stdio.h>
#include <time.h> // >>clock �� ���� ���� 
int level;
int arrayFish[6];
int* cursor; // >> ������ ��ɰ� ����. �����̸��� �ٲ۰�
void initData();
void printfFishes();
void decreaseWater(long elapsedTime);

int main(void)
{
    long startTime = 0; // >>���� ���۽ð�
    long totalElapsedTime = 0; // >>�� ����ð�
    long prevElapsedTime = 0; // >>���� ����ð�(�ֱٿ� ���� �� �ð� ����)

    int num; // >>�� �� ������ ���� �� ������, (����� �Է��� ����)
    initData(); // >>���� ������ �ʱ�ȭ

    cursor = arrayFish; // >> cursor[0]...cursor[1]... �� ������ ������ ��������ν� �̷��� �����ִ� (�迭)

    startTime = clock(); // >>����ð��� millisecond (1/1000 ��) ������ ��ȯ
    while (1) // >> (1)��� ������ ���ѹݺ��� �Ѵٴ� �ǹ� / ����Ⱑ ������������ ������ �ٿø������� ���ѹݺ��� �ϱ� ���� while���� ��.
    {
        printfFishes();
        printf("�� �� ���׿� ���� �ֽðڽ��ϱ�?\n");
        scanf_s("%d", &num);

        //�Է°� üũ
        if (num < 1 || num>6)
        {
            printf("\n�Է°��� �߸��Ǿ����ϴ�.\n");
            continue;
        }

        //�� ����ð�
        totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; // >> ���ݱ��� �� �󸶸�ŭ ���´��� �˱����ؼ� ��
        printf(" �� ����ð� : %ld ��\n", totalElapsedTime); // 1d �� �ƴ� ld �Դϴ� (����)

        //���� ���� �� �ð�(���������� ���� �� �ð�) ���ķ� �帥 �ð�
        prevElapsedTime = totalElapsedTime - prevElapsedTime;
        printf("�ֱ� ����ð� : %ld ��\n", prevElapsedTime);

        // ������ ���� ���� (����)
        decreaseWater(prevElapsedTime);

        //����ڰ� �Է��� ������ ���� �ش�.
        //1. ������ ���� 0�̸� ? >>> ���� �� �ʿ䰡 ����.
        if (cursor[num - 1] <= 0)
        {
            printf("%d ���� ������ �̹� �׾����ϴ�. ���� �����ʰڽ��ϴ�.\n", num);
        }

        //2. ������ ���� 0�� �ƴϸ�? >>> ���� ����Ѵ�. ��! 100�� ���� �ʴ��� üũ

        else if (cursor[num - 1] + 1 <= 100)
        {
            //���� �ش�.
            printf("%d �� ���׿� ���� �ݴϴ�.\n\n", num);
            cursor[num - 1] += 1; // cursor[num - 1] = cursor[num - 1] +1 
        }

        //�������� �� ���� (�������� 20�ʿ� 1����)>>> ����⸦ �������� �ʰ� �츮�� ������ ->���������ϸ� ���� ������ ����.
        if (totalElapsedTime / 20 > level - 1)
        {
            //������
            level++; // >> ex) totalE -> 30�̸� 20���� ���������� 1.xxx�ǹǷ� 1 > level(1)�� ����Ǳ⶧���� 1-1=0�̹Ƿ� 1>0 => level up! �Ǵ°Ŵ�.
            printf(" ***��! Level Up! ���� %d �������� -> %d ������ ���׷��̵����ϴ�. ***\n\n", level - 1, level);

            //���� ����: 5
            if (level == 5)
            {
                printf("\n\n�����մϴ�.MAX Level �޼��Ͽ����ϴ�. ������ �����մϴ�.\n\n");
                exit(0);
            }

        }

        //��� ����Ⱑ �׾����� Ȯ��
        if (checkFishAlive() == 0)
        {
            //����Ⱑ ��� �׾���.
            printf("��� ����Ⱑ �׾����ϴ�...\n");
            exit(0);
        }
        else
        {
            //�ּ� �Ѹ��� �̻� ������ �������.
            printf("���� ����Ⱑ ����־��.\n");
        }
        prevElapsedTime = totalElapsedTime;

        //ex) 10�� -> 15�� (5�� : prevElapsedTime �� ���� -> 15�ʷ� �ٲ��ش�) ->25��(10�ʸ� ����������) 25-15 =10�ε� 15�ʰ� ����ɰ����� ����
        //15�ʶ�� ���� while�� ������ ���� prev�� ����־�����Ѵ�.�ֳĸ� prev�� 5�ʴ� �̹� ��� ������ �ǹ̰� ����
    }



    return 0;
}
void initData()
{
    level = 1; // >> ���� ����(1~5)
    for (int i = 0; i < 6; i++)
    {
        arrayFish[i] = 100; // >>������ ������(0~100), arrayFish(���� �̸�)

    }
}
void printfFishes()
{
    printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
    for (int i = 0; i < 6; i++)
    {
        printf(" %4d ", arrayFish[i]);
    }
    printf("\n\n");
}
void decreaseWater(long elapsedTime)
{
    for (int i = 0; i < 6; i++)
    {
        // (���� �����߾��) arrayFish -> arrayFish[i] �� ����
        arrayFish[i] -= (level * 3 * (int)elapsedTime); // >> ���� 10�ʰ� ������.���� ������ �ְ��� �ٽ� ���� �ٶ����� 10�ʰ� �������� ���� ������1�϶� 1*3*10 �ؼ� ���� 30��ŭ ��������
        // >> 3 : ���̵� ������ ���� ��
        if (arrayFish[i] < 0) // (���� �����߾��) ; �� ���� ���� ������ if �� ����������!!
        {
            arrayFish[i] = 0;
        }
    }
}
int checkFishAlive()
{
    for (int i = 0; i < 6; i++)
    {
        if (arrayFish[i] > 0)
            return 1; // >> ���� ������ ���� ���������ϱ�.������ ����ִ�.
    }
    return 0; //>> ���̾��� ����Ⱑ �������� ����� �´�.
}