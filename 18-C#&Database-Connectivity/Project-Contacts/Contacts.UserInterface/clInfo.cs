using System;
using Contacts.Logic.Contacts;
using Contacts.Logic.Countries;
using Util;

namespace Contacts.UI.Info
{
    internal class clInfo
    {
        static public void ReadContactInfo(clContact Contact)
        {
            Console.Write("Enter first name    : ");
            Contact.FirstName = Console.ReadLine();
            Console.Write("Enter last name     : ");
            Contact.LastName = Console.ReadLine();
            Contact.DateOfBirth = clUtil.ReadDate("Enter date of birth : ");
            Console.Write("Enter address       : ");
            Contact.Address = Console.ReadLine();
            Console.Write("Enter phone         : ");
            Contact.Phone = Console.ReadLine();
            Console.Write("Enter email         : ");
            Contact.Email = Console.ReadLine();
            Console.Write("Enter image path    : ");
            Contact.ImagePath = Console.ReadLine();
            Console.Write("Enter country id    : ");
            Contact.CountryID = Convert.ToInt32(Console.ReadLine());
        }

        static public void ReadCountryInfo(clCountry Country)
        {
            Console.WriteLine("Enter name : ");
            Country.Name = Console.ReadLine();
        }
    }
}
