class Book {  // ��С�Ȥ���
   // ��С���͵��Ժ�ǵ�
   private int totalPage;
   private int currentPage;
   private int pageNumber;
   
   // ��С����С�˹���������´��÷ӧҹ�ͧ�������ʹ
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
      Book book = new Book();  // ���ҧ�ͺ��
      book.setCurrentPage(123);  // ���¡���ʹ setCurrentPage ���ӧҹ���觾��������� 123 仴���
      System.out.println("Book has " + book.getTotalPage() + " pages");
      System.out.println("Current Page is " + book.getCurrentPage() + ".");
   }
}