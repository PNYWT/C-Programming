#include <stdio.h>
#include <string.h>

void wordwrap(char information[]) {
	int i=0,j=0,mark=0;
	static int count=0;

	printf("\n");
	printf("##################################################\n");
	printf("#                 After word wrap                #\n");
	printf("##################################################\n");

	do {
		for(i=mark+51;i>=mark;i--) {
			if(i>strlen(information)) mark=strlen(information);
			else if(information[i]==' ') {
				mark=i;
				break;
			}
		}


		for(;;) {
			if(information[count]==' ') count++;
			else break;
		}
		
		for(j=count;j<count+51;j++) {
			if(j>=mark) printf(" ");
			else printf("%c",information[j]);
		}

		printf("\n");
		count = mark;
	} while(count<strlen(information));
}

main() {
	//char detail[]="Once upon a time there was a dear little girl who was loved by every one who looked at her, but most of all by her grandmother, and there was nothing that she would not have given to the child.  Once she gave her a little cap of red velvet, which suited her so well that she would never wear anything else.  So she was always called Little Red Riding Hood. ";
	char detail[]="The final piece of S/MIME is the trust hierarchy. This is a method based on certificates for verifying that people really are who they say they are. A certificate is a public key signed with the private key of a trusted third party such as Verisign. Because of the importance of the trust hierarchy, S/MIME products should include a certificate management system that lets you set trust levels, but not all do.";

	printf("###############################################################################\n");
	printf("# This is word wrap program  (will be cut your detail for 50 characters/line) #\n");
	printf("# Try this program , please put your detail in same line                      #\n");
	printf("###############################################################################\n");
	printf("##################################################\n");
	printf("#                Before word wrap                #\n");
	printf("##################################################\n");
	puts(detail);
	wordwrap(detail);
}

/*
###############################################################################
# This is word wrap program  (will be cut your detail for 50 characters/line) #
# Try this program , please put your detail in same line                      #
###############################################################################
##################################################
#                Before word wrap                #
##################################################
Once upon a time there was a dear little girl who was loved by every one who loo
ked at her, but most of all by her grandmother, and there was nothing that she w
ould not have given to the child.  Once she gave her a little cap of red velvet, 
 which suited her so well that she would never wear anything else.  So she was a
lways called Little Red Riding Hood. 


##################################################
#                 After word wrap                #
##################################################
Once upon a time there was a dear little girl who 
was loved by every one who looked at her, but most 
of all by her grandmother, and there was nothing 
that she would not have given to the child.  Once 
she gave her a little cap of red velvet, which 
suited her so well that she would never wear 
anything else.  So she was always called Little 
Red Riding Hood.                                                           
*/