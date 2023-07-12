#include <stdio.h>
#include <time.h>

// 5������ ���ϸ�
// �ƹ� Ű�� ������ �������� ���ϸ� �̱�
// 5������ ���ϸ��� ���� ��Ƽ� ������ ������ ����
// �ߺ� �߻� ������

// ���ϸ�
// �̸�, ����, �Ӽ�, ����, Ű��� ���̵�

typedef struct {
	char* name;
	int level;
	char* attribute;
	char* character;
	int nan;

} POKETMON;

// ������� ������ ���ϸ�
int collection[5] = { 0, 0, 0, 0, 0 };

// ��ü ���ϸ� ����Ʈ
POKETMON pokets[5];

void initPokets(); // ���ϸ� ���� �ʱ�ȭ
void printPoket(int selected);


int main(void) {
	srand(time(NULL));  // #include <time.h> �ʿ���

	initPokets();
	while (1) {

		printf("�α� �α�~! � ���ϸ��� ���ñ�����~?\n �ƹ� Ű�� ������ Ȯ���ϼ���!");
		getchar();   // � Ű�� ���� ������ �����

		int selected = rand() % 5;  // 0~4 ������ ������ ���� ��ȯ
		printPoket(selected); // �����ϰ� ���� ���ϸ��� ���� ��� 
		collection[selected] = 1; // ���ϸ� �̱� ó��

		int collectAll = checkCollection();
		if (collectAll == 1)
		{
			break;
		}
	
	}

	return 0;
}

void initPokets() {    //  5���� ���ϸ� ����
	pokets[0].name = "��ī��";
	pokets[0].level = 1;
	pokets[0].attribute = "����";
	pokets[0].character = "�밨��";
	pokets[0].nan = 1;

	pokets[1].name = "���̸�";
	pokets[1].level = 2;
	pokets[1].attribute = "�Ҳ�";
	pokets[1].character = "�¼���";
	pokets[1].nan = 2;

	pokets[2].name = "���α�";
	pokets[2].level = 3;
	pokets[2].attribute = "��";
	pokets[2].character = "Ȱ����";
	pokets[2].nan = 3;

	pokets[3].name = "�̻��ؾ�";
	pokets[3].level = 4;
	pokets[3].attribute = "Ǯ";
	pokets[3].character = "���Ҷ���";
	pokets[3].nan = 4;

	pokets[4].name = "����";
	pokets[4].level = 5;
	pokets[4].attribute = "�ٶ�";
	pokets[4].character = "��ĥ��";
	pokets[4].nan = 5;


}

void printPoket(int selected) // �����ϰ� ���� ���ϸ��� ����
{

	printf("\n\n=== ����� �� ���ϸ��� ������ �Ǿ����! ===\n\n");
	printf(" �̸�       : %s\n", pokets[selected].name);
	printf(" ����       : %d\n", pokets[selected].level);
	printf(" �Ӽ�       : %s\n", pokets[selected].attribute);
	printf(" ����       : %s\n", pokets[selected].character);
	printf(" ���̵�     : ");

	for (int i = 0; i < pokets[selected].nan; i++)
	{

		printf("%s", "��");

	}
	printf("\n\n");



}

int checkCollection()
{
	// ���� ������ ���ϸ� ��ϵ� ���
	// ���ϸ��� ���� �����ߴ��� ���� ��ȯ
	int collectAll = 1;

	printf("\n\n=============== ������ ���ϸ� ��� =============== \n\n");
	
	for (int i = 0; i < 5; i++)
	{
		if (collection[i] == 0)   //  ���ϸ� ���� X
		{
			printf("%15s", "(�� ���Ϻ�)");
			collectAll = 0; // ���� �������� ���� ����
		}
		else //  ����� ���� O
		{
			printf("%10s", pokets[i].name);
		}
	}
		printf("\n\n==================================================\n\n");
	
	if (collectAll)  // ��� ���ϸ��� ������ ���
	{
		printf("\n\n �����մϴ�! ��� ���ϸ��� �� ������. ���� ���� ��������.\n\n");
	}


	return collectAll;
}