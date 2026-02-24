using System;
using System.Data;
using Contacts.Logic.Contacts;
using Contacts.Logic.Countries;
using Contacts.UI.Info;

namespace Contacts.UI
{
    internal class Program
    {
        static void TestFindContactByID(int ID)
        {
            clContact Contact = clContact.Find(ID);

            if (Contact != null)
            {
                Console.WriteLine($"First Name    : {Contact.FirstName}");
                Console.WriteLine($"Last Name     : {Contact.LastName}");
                Console.WriteLine($"Date Of Birth : {Contact.DateOfBirth}");
                Console.WriteLine($"Address       : {Contact.Address}");
                Console.WriteLine($"Phone         : {Contact.Phone}");
                Console.WriteLine($"Email         : {Contact.Email}");
                Console.WriteLine($"Image Path    : {Contact.ImagePath}");
                Console.WriteLine($"Country ID    : {Contact.CountryID}");
            }
            else
                Console.WriteLine($"Contact with ID {ID} was not exist");
        }
        static void TestAddNewContact()
        {
            clContact Contact = new clContact();
            clInfo.ReadContactInfo(Contact);

            if (Contact.Save())
                Console.WriteLine($"Contact added successfully with ID = {Contact.ID}");
            else
                Console.WriteLine("Contact was not added successfully");
        }
        static void TestUpdateContact(int ID)
        {
            clContact Contact = clContact.Find(ID);

            if (Contact != null)
            {
                clInfo.ReadContactInfo(Contact);
                if (Contact.Save())
                {
                    Console.WriteLine($"Contact with ID {ID} was updated successfully");
                    return;
                }

                Console.WriteLine($"Contact with ID {ID} was not updated successfully");
            }

            Console.WriteLine($"Contact with ID {ID} was not exist");
        }
        static void TestDeleteContact(int ID)
        {
            if (clContact.IsExistByID(ID))
            {
                if (clContact.Delete(ID))
                {
                    Console.WriteLine($"Contact with ID {ID} was deleted successfully");
                    return;
                }

                Console.WriteLine($"Contact with ID {ID} was not deleted successfully");
            }

            Console.WriteLine($"Contact with ID {ID} was not exist");
        }
        static void TestListContact()
        {
            DataTable Table = clContact.GetAllContacts();

            Console.WriteLine("Contacts Data:");
            foreach (DataRow Row in Table.Rows)
                Console.WriteLine($"{Row["ID"],-5}     {Row["FirstName"],-10}      {Row["LastName"],-10}");
        }
        static void TestIsContactExist(int ID)
        {
            if (clContact.IsExistByID(ID))
                Console.WriteLine($"Contact with ID {ID} was exist");
            else
                Console.WriteLine($"Contact with ID {ID} was not exist");
        }

        static void TestFindCountryByID(int ID)
        {
            clCountry Country = clCountry.Find(ID);

            if (Country != null)
            {
                Console.WriteLine($"Name : {Country.Name}");
            }
            else
                Console.WriteLine($"Country with ID {ID} was not exist");
        }
        static void TestAddNewCountry()
        {
            clCountry Country = new clCountry();
            clInfo.ReadCountryInfo(Country);

            if (Country.Save())
                Console.WriteLine($"Country added successfully with id = {Country.ID}");
            else
                Console.WriteLine("Country was not added successfully");
        }
        static void TestUpdateCountry(int ID)
        {
            clCountry Country = clCountry.Find(ID);

            if (Country != null)
            {
                clInfo.ReadCountryInfo(Country);
                if (Country.Save())
                {
                    Console.WriteLine($"Country with ID {ID} was updated successfully");
                    return;
                }

                Console.WriteLine($"Country with ID {ID} was not updated successfully");
            }

            Console.WriteLine($"Country with ID {ID} was not exist");
        }
        static void TestDeleteCountry(int ID)
        {
            if (clCountry.IsExistByID(ID))
            {
                if (clCountry.Delete(ID))
                {
                    Console.WriteLine($"Country with ID {ID} was deleted successfully");
                    return;
                }

                Console.WriteLine($"Country with ID {ID} was not deleted successfully");
            }

            Console.WriteLine($"Country with ID {ID} was not exist");
        }
        static void TestListCountry()
        {
            DataTable Table = clCountry.GetAllCountries();

            Console.WriteLine("Countries Data:");
            foreach (DataRow Row in Table.Rows)
            {
                Console.WriteLine($"{Row["ID"],-5}     {Row["Name"],-15}       {Row["Code"],-3}        { Row["PhoneCode"],-3}");
            }
        }
        static void TestIsCountryExistByID(int ID)
        {
            if (clCountry.IsExistByID(ID))
                Console.WriteLine($"Country with ID {ID} was exist");
            else
                Console.WriteLine($"Country with ID {ID} was not exist");
        }
        static void TestIsCountryExistByName(string Name)
        {
            if (clCountry.IsExistByName(Name))
                Console.WriteLine($"Country with name {Name} was exist");
            else
                Console.WriteLine($"Country with name {Name} was not exist");
        }

        static void Main()
        {
            TestIsCountryExistByName("United Kingdom");

        }
    }
}
