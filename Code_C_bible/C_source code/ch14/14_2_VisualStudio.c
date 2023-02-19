#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main() {
	FILE* fp;
	errno_t err;
	char filename[20];
	int a = 0;
	char b = '\0';
	char tmp;

	printf("Enter filename for keep data : ");
	scanf_s("%s", filename, 20);
	if ((err = fopen_s(&fp, filename, "w+")) != 0) {
		printf("Cannot open file %s\n", filename);
		exit(1);
	}
	fscanf_s(fp, "%d %c", &a, &b);
	printf("Your old data is %d and %c\n\n", a, b);
	printf("Enter integer : ");
	scanf_s("%d", &a);
	/* เนื่องจากฟังก์ชั่น scanf_s() จะแปะคีย์ Enter ต่อท้ายข้อมูลเสมอ
	ดังนั้นเมื่อรับค่าตัวแปร a แล้ว ค่าตัวแปร a จะมีคีย์ Enter
	แปะต่อท้ายมาด้วย ดังนั้น จึงต้องทำคำสั่ง scanf_s("%c",&tmp, 1);
	เพื่อรับค่าคีย์ Enter มาเก็บลงตัวแปร tmp ก่อน ถ้าไม่ทำเช่นนี้ 
	เมื่อรับข้อมูลด้วยคำสั่ง b = getchar(); แล้ว โปรแกรมจะไม่รอรับค่าตัวอักษร 
	แต่จะนำคีย์ Enter มากำหนดให้กับตัวแปร b ทันที ซึ่งทำให้โปรแกรมทำงานผิดพลาด */
	scanf_s("%c", &tmp, 1);
	printf("Enter character : ");
	b = getchar();
	a += 1; b += 1;
	fprintf(fp, "%d %c\n", a, b);
	printf("\nYour new data %d and %c already add to file %s\n", a, b, filename);
	fclose(fp);
}

/* result
Enter filename for keep data : test.txt
Your old data is 0 and o

Enter integer : 66
Enter character : m
Your new data 67 and n already add to file test.txt
*/