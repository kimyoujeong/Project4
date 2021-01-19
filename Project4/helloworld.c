//프로젝트
//경찰관이 범죄자의 정보를 입수
//이름,나이,몸무게,키,범죄명
#include<stdio.h>

int main(void)
{
	char name[256];
	printf("이름이 뭐에요?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇 살이에요?");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇 Kg 이에요?");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇 cm 이에요?");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀어요?");
	scanf_s("%s", what, sizeof(what));

	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf("이름       :%n\n", name);
	printf("나이       :%d\n", age);
	printf("몸무게     :%.2f\n", weight);
	printf("키         :%.2lf\n", height);
	printf("범죄       :%s\n", what);

	return 0;
}