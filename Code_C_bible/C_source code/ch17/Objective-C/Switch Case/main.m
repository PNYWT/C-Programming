// main.m
#import <Foundation/Foundation.h>
 
int main(int argc, const char * argv[]) 
{
   @autoreleasepool { 
      int num = 3;
      switch (num) {
         case 1:
            NSLog(@"Case : %d",1);
            break;
         case 3:
            NSLog(@"Case : %d",3);
            break;
      }
   }
   return 0;
}