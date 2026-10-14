using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace Contacts.Data.DTOs
{
    public class clContactDTO
    {
        public int ID { get; set; }
        public string FirstName { get; set; }
        public string LastName { get; set; }
        public DateTime DateOfBirth { get; set; }
        public string Address { get; set; }
        public string Phone { get; set; }
        public string Email { get; set; }
        public string ImagePath { get; set; }
        public int CountryID { get; set; }

        public clContactDTO()
        {
            ID = 0;
            FirstName = null;
            LastName = null;
            DateOfBirth = new DateTime();
            Address = null;
            Phone = null;
            Email = null;
            ImagePath = null;
            CountryID = 0;
        }
        public clContactDTO(int id, string firstName, string lastName, DateTime dataOfBirth, string address, string phone, string email, string imagePath, int countryID)
        {
            ID = id;
            FirstName = firstName;
            LastName = lastName;
            DateOfBirth = dataOfBirth;
            Address = address;
            Phone = phone;
            Email = email;
            ImagePath = imagePath;
            CountryID = countryID;
        }
    }
}
