using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
   class Book
   { // ��С�Ȥ���
      // ��С���͵��Ժ�ǵ�
      public int totalPage;
      public int currentPage;
      public int pageNumber;

      // ��С����С�˹���������´��÷ӧҹ�ͧ�������ʹ
      public void setCurrentPage(int pageNumber)
      {
         currentPage = pageNumber;
      }
      public int getCurrentPage()
      {
         return currentPage;
      }
      public int getTotalPage()
      {
         totalPage = 300;
         return totalPage;
      }

      static void Main(string[] args) 
      {
         Book book = new Book(); // ���ҧ�ͺ��
         book.setCurrentPage(123); // ���¡���ʹ setCurrentPage ���ӧҹ���觾��������� 123 仴���
         Console.WriteLine("Book has " + book.getTotalPage() + " pages");  // ������ͤ����͡�ҧ���Ҿ
         Console.WriteLine("Current Page is " + book.getCurrentPage() + ".");
         Console.ReadKey();
      }
   }
}