#include <iostream.h>

class Book {  // ประกาศคลาส
   // ประกาศแอตทริบิวต์
   int totalPage;
   int currentPage;
   int pageNumber;
public:
   // ประกาศฟังก์ชั่น
   void setCurrentPage(int pageNumber) ;
   int getCurrentPage() ;
   int getTotalPage();
};

// กำหนดรายละเอียดการทำงานของแต่ละฟังก์ชั่น
void Book::setCurrentPage(int pageNumber) {
   currentPage=pageNumber;
}
int Book::getCurrentPage() {
   return currentPage;
}
int Book::getTotalPage() {
   totalPage = 300;
   return totalPage;
}

main() {
   Book book;  // สร้างออบเจ็ค
   book.setCurrentPage(123);  // เรียกฟังก์ชั่น setCurrentPage ให้ทำงานโดยส่งพารามิเตอร์ 123 ไปด้วย
   cout << "Book has " << book.getTotalPage();
   cout << " pages.\n";
   cout << "Current Page is " << book.getCurrentPage(); << "."
}