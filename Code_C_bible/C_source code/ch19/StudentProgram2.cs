using System;

namespace Student2
{
    class Person
    {
        public String name;
        public void Talk()
        {
            Console.WriteLine("Hello");
        }

    }
    class ThaiStudent : Person
    {
        public String std_id;
        public void Talk()
        {
            Console.WriteLine("Sawasdee");
        }
    }

    class ChineseStudent : Person
    {
        public String std_id;
        public void Talk()
        {
            Console.WriteLine("Ni Hao");
        }
    }

    class StudentProgram2
    {
        static void Main(string[] args)
        {
            ThaiStudent tstd = new ThaiStudent();
            ChineseStudent cstd = new ChineseStudent();

            tstd.Talk();
            cstd.Talk();
        }
    }
}