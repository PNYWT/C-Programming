using System;

namespace Product
{
    class Discount
    {
        private double price;
        private double discount_price;

        public void Price()
        {
            Console.Write("Please enter product price : ");
            price = Convert.ToDouble(Console.ReadLine());
        }
        public void SetDiscount()
        {
            discount_price = 0.85 * price;
        }
        public void GetDiscount()
        {
            Console.WriteLine("Discount 15%, Price is "+ discount_price);
        }
    }

    class DoDiscount
    {
        static void Main(string[] args)
        {
            Discount d = new Discount();
            d.Price();
            d.SetDiscount();
            d.GetDiscount();
        }
    }
}