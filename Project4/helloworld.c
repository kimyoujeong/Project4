//������Ʈ
//�������� �������� ������ �Լ�
//�̸�,����,������,Ű,���˸�
#include<stdio.h>

int main(void)
{
	char name[256];
	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("�� ���̿���?");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� �� Kg �̿���?");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� �� cm �̿���?");
	scanf_s("%lf", &height);

	char what[256];
	printf("���� ���˸� ���������?");
	scanf_s("%s", what, sizeof(what));

	printf("\n\n--- ������ ���� ---\n\n");
	printf("�̸�       :%n\n", name);
	printf("����       :%d\n", age);
	printf("������     :%.2f\n", weight);
	printf("Ű         :%.2lf\n", height);
	printf("����       :%s\n", what);

	return 0;
}