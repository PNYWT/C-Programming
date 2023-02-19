using System;

namespace Student
{
    class Person
    { 
        public String name;

    }
    class Student : Person
    {
        public String std_id;
    }

    class StudentProgram
    {
        static void Main(string[] args)
        {
            Student std = new Student();
            std.name = "Somsri Jaikla";
            std.std_id = "s001";
            Console.WriteLine(std.name);
            Console.WriteLine(std.std_id);
        }
    }
}