using Contacts.Logic.Contacts;
using Contacts.Logic.Countries;
using System;

namespace Contacts.UI
{
    internal class clReadInfo
    {
        static public DateTime ReadDate(string Message = "Enter a date : ")
        {
            DateTime Date = new DateTime();

            Console.Write(Message);
            while (!DateTime.TryParse(Console.ReadLine().Trim(), out Date))
            {
                Console.WriteLine("Invalid Date");
                Console.Write("Enter a date agian : ");
            }

            return Date;
        }

        static public void ReadContactInfo(clContact Contact)
        {
            Console.Write("Enter first name : ");
            Contact.FirstName = Console.ReadLine().Trim();
            Console.Write("Enter last name : ");
            Contact.LastName = Console.ReadLine().Trim();
            Contact.DateOfBirth = ReadDate("Enter date of birth : ");
            Console.Write("Enter address : ");
            Contact.Address = Console.ReadLine().Trim();
            Console.Write("Enter phone : ");
            Contact.Phone = Console.ReadLine().Trim();
            Console.Write("Enter email : ");
            Contact.Email = Console.ReadLine().Trim();
            Console.Write("Enter image path : ");
            Contact.ImagePath = Console.ReadLine().Trim();
            Console.Write("Enter country id : ");
            Contact.CountryID = Convert.ToInt32(Console.ReadLine().Trim());
        }

        static public void ReadCountryInfo(clCountry Country)
        {
            Console.Write("Enter name : ");
            Country.Name = Console.ReadLine().Trim();
            Console.Write("Enter code : ");
            Country.Code = Console.ReadLine().Trim();
            Console.Write("Enter phone code : ");
            Country.PhoneCode = Console.ReadLine().Trim();
        }
    }
}
