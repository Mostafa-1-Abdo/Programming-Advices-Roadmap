using System;

namespace Util
{
    internal class clUtil
    {
        static public DateTime ReadDate(string Message = "Enter date : ")
        {
            DateTime Date = new DateTime();
            bool InvalidDate = false;

            Console.Write(Message);
            do
            {
                try
                {
                    if (InvalidDate)
                        Console.Write("Enter date agian : ");

                    Date = Convert.ToDateTime(Console.ReadLine());

                    InvalidDate = false;
                }
                catch
                {
                    Console.WriteLine("Invalid Date");
                    InvalidDate = true;
                }

            } while (InvalidDate);

            return Date;
        }
    }
}
