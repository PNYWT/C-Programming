#include <stdio.h>
void push(char sign1);
void pop(char sign2);
int push_pop1(void);
int push_pop2(void);

int chk_sign1=0,chk_sign2=0,chk_sign3=0,chk_sign4=0,chk_sign5=0,ret1=0,ret2=0;

main() {
	char content[100];
	int i;
	printf("Syntax error checking\n");
	printf("Line for check syntex\n");
	printf("Content of line : ");
	fgets(content,100,stdin);
	for(i=0;i<strlen(content);i++) {
		if(content[i]=='(' || content[i]=='{' || content[i]=='[')
			push(content[i]);
		else if(content[i]==')' || content[i]=='}' || content[i]==']')
			pop(content[i]);
		else if(content[i]=='\'')
			ret1 = push_pop1();
		else if(content[i]=='"')
			ret2 = push_pop2();
	}
	if(chk_sign1!=0 || chk_sign2!=0 || chk_sign3!=0 || ret1!=0 || ret2!=0) {
		printf("Syntax error\n");
		if(chk_sign1!=0) printf("Syntax error with () sign\n");
		if(chk_sign2!=0) printf("Syntax error with {} sign\n");
		if(chk_sign3!=0) printf("Syntax error with [] sign\n");
		if(ret1!=0) printf("Syntax error with \'\' sign\n");
		if(ret2!=0) printf("Syntax error with \"\" sign\n");
	}
	else 
		printf("No syntax error found\n");
}
void push(char sign1) {
	switch(sign1) {
		case '(' : chk_sign1++; break;
		case '{' : chk_sign2++; break;
		case '[' : chk_sign3++; break;
	}
}
void pop(char sign2) {
	switch(sign2) {
		case ')' : chk_sign1--; break;
		case '}' : chk_sign2--; break;
		case ']' : chk_sign3--; break;
	}
}
int push_pop1(void) {
	chk_sign4++;
	if((chk_sign4%2)==0) ret1=0;
	else ret1=1;
	return ret1;
}
int push_pop2(void) {
	chk_sign5++;
	if((chk_sign5%2)==0) ret2=0;
	else ret2=2;
	return ret2;
}

/*
Syntax error checking
Line for check syntex
Content of line : "Hello" ( How are you? ) {This is greeting[] msg "Special" 'For you''''
Syntax error
Syntax error with {} sign
Syntax error with '' sign
*/