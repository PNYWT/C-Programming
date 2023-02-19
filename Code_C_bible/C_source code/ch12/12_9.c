#include <stdio.h>
#include <stdlib.h>

main() {
        struct std_report {
                char topic[30];
                int member;
        };

        struct std_activity {
                char name_act[30];
                int actor;
                int actress;
        };

        struct group1 {
                struct std_report stdr1;
                struct std_activity stda1;
        };

        struct group2 {
                struct std_report stdr2;
                struct std_activity stda2;
        };

        struct group1 g1 = {
                {"Mother\'s Day",6} ,
                {"How to say love mom?",2,4}
        };

        struct group2 g2 = {
                {"Valentine\'s Day",6} ,
                {"Sweet word for say love",2,4}
        };

        printf("Group 1\n");
        printf("Report\n");
        printf("\tTopic : %s\n",g1.stdr1.topic);
        printf("\tMember : %d persons\n",g1.stdr1.member);
        printf("Activity\n");
        printf("\tName act : %s\n",g1.stda1.name_act);
        printf("\tActor : %d\t Actress : %d\n\n",g1.stda1.actor,g1.stda1.actress);

        printf("Group 2\n");
        printf("Report\n");
        printf("\tTopic : %s\n",g2.stdr2.topic);
        printf("\tMember : %d persons\n",g2.stdr2.member);
        printf("Activity\n");
        printf("\tName act : %s\n",g2.stda2.name_act);
        printf("\tActor : %d\t Actress : %d\n",g2.stda2.actor,g2.stda2.actress);
}

/* result

Group 1
Report
        Topic : Mother's Day
        Member : 6 persons
Activity
        Name act : How to say love mom?
        Actor : 2        Actress : 4

Group 2
Report
        Topic : Valentine's Day
        Member : 6 persons
Activity
        Name act : Sweet word for say love
        Actor : 2        Actress : 4

*/