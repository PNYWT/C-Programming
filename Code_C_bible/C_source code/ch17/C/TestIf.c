#include <stdio.h>
main() {
   int a = 5;
   int b = 3;
   
   if(a<b) {
      printf(�%d is smaller than %d�,a,b);  // ����� printf �繡����觾�����ͤ����͡�ҧ���Ҿ
   }
   else if(a==b) {
      printf(�%d is equal to %d�,a,b);
   }
   else {
      printf(�%d is greater than %d�,a,b);
   }
}