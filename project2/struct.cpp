#include <stdio.h>

struct Gameinfo {
	char* name;
	int year;
	int price;
	char* company;

	struct Gameinfo* friendGame; // ���� ��ü ����
	
};

typedef struct {
	char* name;
	int year;
	int price;
	char* company;

	struct Gameinfo* friendGame; // ���� ��ü ����

} GAME_INFO;

int main(void) {

	// ���� ���
	// �̸� : ���ϸ���
	// �߸ų⵵ : 2023��
	// ���� : 1000��
	// ���ۻ� : HKȸ��

	char* name = "���ϸ���";
	int year = 2023;
	int price = 1000;
	char* company = "HKȸ��";

		// �� �ٸ� ���� ���
		// �̸� : ���ϸ�Ÿ
		// �߸ų⵵ : 2023��
		// ���� : 1200��
		// ���ۻ� : KKȸ��

	char* name2 = "���ϸ�Ÿ";
	int year2 = 2023;
	int price2 = 1200;
	char* company2 = "KKȸ��";

	// ����ü ���
	struct Gameinfo gameinfo1;
	// struct Gameinfo gameinfo2;

	gameinfo1.name = "���ϸ���";
	gameinfo1.year = 2023;
	gameinfo1.price = 1000;
	gameinfo1.company = "HKȸ��";

	//����ü ���
	printf("-- ���� ��� ���� --\n");
	printf("  ���Ӹ�   : %s\n", gameinfo1.name);
	printf("  �߸ų⵵ : %d\n", gameinfo1.year);
	printf("  ����     : %d\n", gameinfo1.price);
	printf("  ���ۻ�   : %s\n", gameinfo1.company);

	// ����ü�� �迭ó�� �ʱ�ȭ

	struct Gameinfo gameinfo2 = { "���ϸ�Ÿ", 2023, 1200, "KKȸ��" };


	printf("-- �� �ٸ� ���� ��� ���� --\n");
	printf("  ���Ӹ�   : %s\n", gameinfo2.name);
	printf("  �߸ų⵵ : %d\n", gameinfo2.year);
	printf("  ����     : %d\n", gameinfo2.price);
	printf("  ���ۻ�   : %s\n", gameinfo2.company);

	// ����ü �迭
	struct Gameinfo gameArray[2] = {
		{ "���ϸ���", 2023, 1000, "HKȸ��" },
	    { "���ϸ�Ÿ", 2023, 1200, "KKȸ��" }

	};

	// ����ü ������
	struct Gameinfo * gamePtr;  // �̼Ǹ�
	gamePtr = &gameinfo1;
	
    /*printf("\n\n-- �̼Ǹ��� ���� ��� ���� --\n");
	printf("  ���Ӹ�   : %s\n", (*gamePtr).name); //*ptr
	printf("  �߸ų⵵ : %d\n", (*gamePtr).year);
	printf("  ����     : %d\n", (*gamePtr).price);
	printf("  ���ۻ�   : %s\n", (*gamePtr).company);*/

	printf("\n\n-- �̼Ǹ��� ���� ��� ���� --\n");
	printf("  ���Ӹ�   : %s\n", gamePtr->name); 
	printf("  �߸ų⵵ : %d\n", gamePtr->year);
	printf("  ����     : %d\n", gamePtr->price);
	printf("  ���ۻ�   : %s\n", gamePtr->company);

	// ���� ��ü ���� �Ұ�
	gameinfo1.friendGame = &gameinfo2;
   
	printf("\n\n-- ���� ��ü�� ���� ��� ���� --\n");

	printf("  ���Ӹ�   : %s\n", gameinfo1.friendGame->name);
	printf("  �߸ų⵵ : %d\n", gameinfo1.friendGame->year);
	printf("  ����     : %d\n", gameinfo1.friendGame->price);
	printf("  ���ۻ�   : %s\n", gameinfo1.friendGame->company);


	// typedef
	// �ڷ����� ���� ����

	int i = 1;
	typedef int ����;
	typedef float �Ǽ�;

	���� �������� = 3; // int i =3; �� ���� ����
	�Ǽ� �Ǽ����� = 3.23f; // float f = 3.23f; �� ���� ����

	printf("\n\n�������� : %d, �Ǽ����� : %.2f\n\n", ��������, �Ǽ�����);

	typedef struct Gameinfo ��������;

	�������� game1;
	game1.name = "�ѱ� ����";
	game1.year = 2015;

	GAME_INFO game2;
	game2.name = "�ѱ� ����";
	game2.year = 2013;

	/*struct Gameinfomation game3;
	game3.name = "�ѱ� ����";*/


	return 0;
}