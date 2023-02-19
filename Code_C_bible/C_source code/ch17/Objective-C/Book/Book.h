//Book.h
#import <Foundation/Foundation.h>

@interface Book: NSObject
   int totalPage;
   int currentPage;
   int pageNumber;
-(void) setCurrentPage: (int)pageNumber;
-(int) getCurrentPage;
-(int) getTotalPage;
@end

@implementation Book
-(void) setCurrentPage: (int)pageNumber
{
   currentPage = pageNumber;
}

 -(int) getCurrentPage
{
   return currentPage;
}

-(int) getTotalPage
{
   totalPage = 300;
  return totalPage;
}
@end
