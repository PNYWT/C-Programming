<!DOCTYPE HTML>
<html>
<head>
<title>Test If</title>
</head>
<body>
<?php
   // ��С�ȵ���� a  ��� b
   $a="5";
   $b="3";

   // ��������͹� if ��͹ if
   if ($a<$b) {
       // ����� echo ��� ����觢�ͤ������Ѿ���Ѻ��ʴ��ŷ����纺�������ͧ����ͧ�����ҹ
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