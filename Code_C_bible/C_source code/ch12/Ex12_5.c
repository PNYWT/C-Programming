#include <stdio.h>
#include <string.h>

typedef struct {
	char first_name[10];
	char middle_name;
	char last_name[20];
} NAME;

typedef struct {
	char blood_type;
	union {
		char characters[20];
		NAME p;
	} u;
} DETAIL;

main() {
	int i;
	DETAIL first={'B',"good looking"};
	DETAIL second;
	DETAIL last[2];

	second.blood_type = 'A';
	strcpy(second.u.p.first_name,"Robert");
	strcpy(second.u.p.last_name,"Watcherner");
	second.u.p.middle_name = 'G';

	last[0] = first;
	last[1] = second;

	for(i=0;i<2;i++) {
		switch(last[i].blood_type) {
			case 'A' :
				printf("%s %c %s\n",last[i].u.p.first_name,
				                    last[i].u.p.middle_name,
				                    last[i].u.p.last_name);
				break;
			case 'B' :
				printf("%c %s\n",last[i].blood_type,last[i].u.characters);
				break;
			default :
				printf("No Data\n");
		}
	}
}