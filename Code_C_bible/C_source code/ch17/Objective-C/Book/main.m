// main.m
#import <Foundation/Foundation.h>
#include "Book.h"
 
int main(int argc, const char * argv[]) 
{
   @autoreleasepool { 
      Book *book = [[Book alloc] init];
      [book setCurrentPage:120];
      NSLog(@"Current Page : %d",[book getTotalPage]);
      NSLog(@"From Total Page : %d",[book getTotalPage]);
   }
   return 0;
}