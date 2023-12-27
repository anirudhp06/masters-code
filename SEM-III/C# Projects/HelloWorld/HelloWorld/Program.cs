using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
//C# program to handle Exceptions 
namespace HelloWorld
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[5] { 10, 20, 30, 40, 50 };
            int sum = 0;
            try
            {
                for (int i = 0; i < arr.Length; i++)
                {
                    sum += arr[i];
                }
                Console.WriteLine("Sum is {0}", sum);
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);
            }
            finally
            {
                Console.WriteLine("Execution completed");
                Console.ReadKey();
            }
        }
    }
}