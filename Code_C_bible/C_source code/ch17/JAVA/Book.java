class Book {  // ประกาศคลาส
   // ประกาศแอตทริบิวต์
   private int totalPage;
   private int currentPage;
   private int pageNumber;
   
   // ประกาศและกำหนดรายละเอียดการทำงานของแต่ละเมธอด
   public void setCurrentPage(int pageNumber) {
      currentPage=pageNumber;
   }
   public int getCurrentPage() {
      return currentPage;
   }
   public int getTotalPage() {
      totalPage = 300;
      return totalPage;
   }

   public static void main(String[] args) {
      Book book = new Book();  // สร้างออบเจ็ค
      book.setCurrentPage(123);  // เรียกเมธอด setCurrentPage ให้ทำงานโดยส่งพารามิเตอร์ 123 ไปด้วย
      System.out.println("Book has " + book.getTotalPage() + " pages");
      System.out.println("Current Page is " + book.getCurrentPage() + ".");
   }
}