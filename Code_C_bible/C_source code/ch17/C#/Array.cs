Using System;
class Array
{
   public static void main()
   {
      int[] a = {101,201,301};  // ประกาศและกำหนดค่าให้อาร์เรย์ 1 มิติ
       for(int i=0;i<3;i++) {
         Console.WriteLine(a[i]);  // วนลูปพิมพ์ค่าในอาร์เรย์ 1 มิติออกทางจอภาพ
      }
   }
}