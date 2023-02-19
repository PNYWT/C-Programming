#include <stdio.h>
#include <time.h>

char character[]="abcdefghijklmnopqrstuvwxyz!@#$%&*?ABCDEFGHIJKLMNOPQRSTUVWXYZ";

main() {
    char pwd[11]="",encrypt_pwd[31]="";
    char *ptr1=pwd;
    char *ptr2=encrypt_pwd;
    int i,rand_num=0;

    printf("please enter password : ");
    for(i=0;i<10;i++) {
        pwd[i] = getch();
	  	printf("*");
    }
    pwd[i]='\0';

    srand((unsigned)time(NULL));
    for(i=0;i<30;i++) {
		rand_num = rand()%59+1;
		switch(i) {
			case 1  : *(ptr2+1)  = *(ptr1); break;
			case 2  : *(ptr2+2)  = *(ptr1+1);  break;
			case 3  : *(ptr2+3)  = *(ptr1+2);  break;
			case 5  : *(ptr2+5)  = *(ptr1+3);  break;
			case 7  : *(ptr2+7)  = *(ptr1+4);  break;
			case 11 : *(ptr2+11) = *(ptr1+5);  break;
			case 13 : *(ptr2+13) = *(ptr1+6);  break;
			case 17 : *(ptr2+17) = *(ptr1+7);  break;
			case 19 : *(ptr2+19) = *(ptr1+8);  break;
			case 23 : *(ptr2+23) = *(ptr1+9);  break;
			default : *(ptr2+i) = character[rand_num];
		}
    }
    encrypt_pwd[i]='\0';
    printf("\nYour real pwd is %s\n",pwd);
    printf("Your encrypt pwd is %s\n",encrypt_pwd);
}

/*
please enter password : **********
Your real pwd is Password!!
Your encrypt pwd is OPasgsKW!ifotr?RGd!!m#s!hJSSPM
*/