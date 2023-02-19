#include <stdio.h>

main() {
        struct employee {
			char emp_id[8];
			char name[20];
			char position[30];
			char dept[30];
			float salary;
			struct address {
				char home_number[10];
				char soi[20];
				char street[20];
				char district[20];
				char province[20];
				char postal_code[6];
			} addr;
	} emp[11] = {{"10000","Sa-art  ","IT Manager         ","IT-Planning",30000,
		      {"125/95","Sai-lom","Paholyothin","Payathai","Bangkok","10400"}},
		     {"10001","Sakol   ","Programmer         ","IT-Planning",13000,
		      {"594/5","Sutthiporn","Prachasongkhrao","Dindaeng","Bangkok","10400"}},
		     {"10002","Savitree","Admin              ","IT-Planning",10000,
		      {"87/1","Intamara 23","Sutthisarn","Payathai","Bangkok","10400"}},
		     {"80001","Satid   ","User support       ","Support    ",11000,
		      {"235/5","Jangwatana 10","Jangwatana","Donmuang","Bangkok","10210"}},
		     {"80002","Savinee ","Project Coordinator","IT-Planning",13000,
		      {"254/5","Lardpraw 101","Lardpraw","Jatujak","Bangkok","10900"}},
		     {"80003","Saithip ","Admin              ","Support    ",10000,
		      {"79/9","","Charunsanitwong","Bangkoknoi","Bangkok","10700"}},
		     {"10003","Sartra  ","User Support       ","Support    ",11000,
		      {"7/7","Watmaipirain","Issaraparb","Bangkokyai","Bangkok","10600"}},
		     {"10004","Sasikarn","System Analyst     ","IT-Planning",15000,
		      {"145/42","Mangkorn 5","Mangkorn","Pomprab","Bangkok","10100"}},
		     {"80004","Sasaluk ","System Analyst     ","IT-Planning",15000,
		      {"89/89","Jambud","Pracha-utid","Huaykwang","Bangkok","10320"}},
		     {"10005","Samaporn","Programmer         ","IT-Planning",13000,
		      {"679/4","Phetkasem 20","Phetkasem","Pasicharoen","Bangkok","10230"}},
		     {"10006","Apichart","Project Coordinator","IT-Planning",13000,
		      {"942/5","Ratchadaniwed 4","Ratchada","Huaykwang","Bangkok","10320"}}};
	int i;

	printf("Temporary Employee\n");
	for(i=0;i<10;i++) {
                if(strcmp(emp[i].emp_id,"80000")>0)
		printf("%s %s %s %s %.2f\n\t%s %s %s %s %s %s\n",emp[i].emp_id,emp[i].name,emp[i].position,emp[i].dept,emp[i].salary,emp[i].addr.home_number,emp[i].addr.soi,emp[i].addr.street,emp[i].addr.district,emp[i].addr.province,emp[i].addr.postal_code);
	}
}

/*
Temporary Employee
80001 Satid    User support        Support     11000.00
	235/5 Jangwatana 10 Jangwatana Donmuang Bangkok 10210
80002 Savinee  Project Coordinator IT-Planning 13000.00
	254/5 Lardpraw 101 Lardpraw Jatujak Bangkok 10900
80003 Saithip  Admin               Support     10000.00
	79/9 Charunsanitwong Bangkoknoi Bangkok 10700
80004 Sasaluk  System Analyst      IT-Planning 15000.00
	89/89 Jambud Pracha-utid Huaykwang Bangkok 10320
*/