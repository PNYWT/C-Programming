#include <iostream.h>

class Book {  // ��С�Ȥ���
   // ��С���͵��Ժ�ǵ�
   int totalPage;
   int currentPage;
   int pageNumber;
public:
   // ��С�ȿѧ����
   void setCurrentPage(int pageNumber) ;
   int getCurrentPage() ;
   int getTotalPage();
};

// ��˹���������´��÷ӧҹ�ͧ���пѧ����
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
   Book book;  // ���ҧ�ͺ��
   book.setCurrentPage(123);  // ���¡�ѧ���� setCurrentPage ���ӧҹ���觾��������� 123 仴���
   cout << "Book has " << book.getTotalPage();
   cout << " pages.\n";
   cout << "Current Page is " << book.getCurrentPage(); << "."
}