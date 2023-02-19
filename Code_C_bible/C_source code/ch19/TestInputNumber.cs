using System;

namespace MyCSharpApp2
{
   class TestInputNumber
    {
        static void Main(string[] args)
        {
            Console.Write("Please enter number : ");
            int num = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Your number plus 10 is " + (num+10));
        }
    }
}