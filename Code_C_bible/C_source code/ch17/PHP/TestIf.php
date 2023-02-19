<!DOCTYPE HTML>
<html>
<head>
<title>Test If</title>
</head>
<body>
<?php
   // ประกาศตัวแปร a  และ b
   $a="5";
   $b="3";

   // คำสั่งเงื่อนไข if ซ้อน if
   if ($a<$b) {
       // คำสั่ง echo คือ การส่งข้อความผลลัพธ์กลับไปแสดงผลที่เว็บบราวเซอร์ของเครื่องผู้ใช้งาน
      echo $a."is smaller than".$b; 
   }
    elseif($a>$b) { 
       echo $a."is equal to ".$b;
   }
   else { 
      echo $a."is greater than ".$b;
   }             
?>
</body>
</html>