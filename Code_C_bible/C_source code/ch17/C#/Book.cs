using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
   class Book
   { // ประกาศคลาส
      // ประกาศแอตทริบิวต์
      public int totalPage;
      public int currentPage;
      public int pageNumber;

      // ประกาศและกำหนดรายละเอียดการทำงานของแต่ละเมธอด
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
         Book book = new Book(); // สร้างออบเจ็ค
         book.setCurrentPage(123); // เรียกเมธอด setCurrentPage ให้ทำงานโดยส่งพารามิเตอร์ 123 ไปด้วย
         Console.WriteLine("Book has " + book.getTotalPage() + " pages");  // พิมพ์ข้อความออกทางจอภาพ
         Console.WriteLine("Current Page is " + book.getCurrentPage() + ".");
         Console.ReadKey();
      }
   }
}