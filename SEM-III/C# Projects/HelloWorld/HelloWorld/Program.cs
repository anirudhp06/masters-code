using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
//C# program to handle Exceptions 
namespace HelloWorld
{
    abstract public class Maths
    {
        abstract public int operation(int a,int b);
    }
    class Multiplication : Maths
    {
        public override int operation(int a, int b)
        {
            return a*b;
        }
    }
    class Program
    {
        static void Main()
        {
            Console.WriteLine("Abstract class program");
            Maths m = new Multiplication();
            int a = m.operation(20, 30);
            Console.WriteLine("Multiplication of 20*30={0}",a);
            Console.ReadLine();
        }
    }
}