using System;
using System.Data;
using Contacts.Data.Contacts;

namespace Contacts.Logic.Contacts
{
    public class clContact
    {
        public enum enMode : byte
        {
            Create, Update, Delete
        }

        public int ID { set; get; }
        public string FirstName { set; get; }
        public string LastName { set; get; }
        public DateTime DateOfBirth { set; get; }
        public string Address { set; get; }
        public string Phone { set; get; }
        public string Email { set; get; }
        public string ImagePath { set; get; }
        public int CountryID { set; get; }
        private enMode _Mode;

        private bool _AddNew()
        {
            ID = clContactData.AddNewContact(FirstName, LastName, DateOfBirth, Address, Phone, Email, ImagePath, CountryID);

            return ID != 0;
        }

        private bool _Update()
        {
            return clContactData.UpdateContact(ID, FirstName, LastName, DateOfBirth, Address, Phone, Email, ImagePath, CountryID);
        }

        public clContact()
        {
            ID = 0;
            FirstName = null;
            LastName = null;
            DateOfBirth = DateTime.Today;
            Address = null;
            Phone = null;
            Email = null;
            ImagePath = null;
            CountryID = 0;
            _Mode = enMode.Create;
        }
        private clContact(int id, string firstName, string lastName, DateTime dataOfBirth, string address, string phone, string email, string imagePath, int countryID)
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
            _Mode = enMode.Update;
        }

        static public clContact Find(int ID)
        {
            string FirstName = null, LastName = null, Address = null, Phone = null, Email = null, ImagePath = null;
            DateTime DateOfBirth = new DateTime();
            int CountryID = 0;

            if (clContactData.FindContact(ID, ref FirstName, ref LastName, ref DateOfBirth, ref Address, ref Phone, ref Email, ref ImagePath, ref CountryID))
                return new clContact(ID, FirstName, LastName, DateOfBirth, Address, Phone, Email, ImagePath, CountryID);
            return null;
        }

        public bool Save()
        {
            switch (_Mode)
            {
                case enMode.Create:
                    if (_AddNew())
                    {
                        _Mode = enMode.Update;
                        return true;
                    }
                    return false;

                case enMode.Update:
                    return _Update();

                default:
                    return false;
            }
        }

        static public bool Delete(int ID)
        {
            return clContactData.DeleteContact(ID);
        }

        static public bool IsExist(int ID)
        {
            return clContactData.IsContactExist(ID);
        }

        static public DataTable GetAllContacts()
        {
            return clContactData.GetAllContacts();
        }
    }
}
