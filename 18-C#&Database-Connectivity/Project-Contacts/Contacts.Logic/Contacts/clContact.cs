using System;
using System.Data;
using Contacts.Data.Contacts;

namespace Contacts.Logic.Contacts
{
    public class clContact
    {
        public enum enMode : byte
        {
            Add, Update, Delete
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
        private enMode _Mode = enMode.Add;

        private bool _AddNew()
        {
            int ID = clContactData.AddNewContact(FirstName, LastName, DateOfBirth, Address, Phone, Email, ImagePath, CountryID);

            return ID != 0;
        }

        private bool _Update()
        {
            return clContactData.UpdateContactByID(ID, FirstName, LastName, DateOfBirth, Address, Phone, Email, ImagePath, CountryID);
        }

        public clContact()
        {
            this.ID = 0;
            this.FirstName = null;
            this.LastName = null;
            this.DateOfBirth = DateTime.Today;
            this.Address = null;
            this.Phone = null;
            this.Email = null;
            this.ImagePath = null;
            this.CountryID = 0;
            _Mode = enMode.Add;
        }
        private clContact(int ID, string FirstName, string LastName, DateTime DataOfBirth, string Address, string Phone, string Email, string ImagePath, int CountryID)
        {
            this.ID = ID;
            this.FirstName = FirstName;
            this.LastName = LastName;
            this.DateOfBirth = DataOfBirth;
            this.Address = Address;
            this.Phone = Phone;
            this.Email = Email;
            this.ImagePath = ImagePath;
            this.CountryID = CountryID;
            _Mode = enMode.Update;
        }

        static public clContact Find(int ID)
        {
            string FirstName, LastName, Address, Phone, Email, ImagePath;
            DateTime DateOfBirth = DateTime.Today;
            int CountryID = 0;

            if (clContactData.FindContactInfoByID(ID, out FirstName, out LastName, out DateOfBirth, out Address, out Phone, out Email, out ImagePath, out CountryID))
                return new clContact(ID, FirstName, LastName, DateOfBirth, Address, Phone, Email, ImagePath, CountryID);
            return null;
        }

        public bool Save()
        {
            switch (_Mode)
            {
                case enMode.Add:
                    if (_AddNew())
                    {
                        _Mode = enMode.Update;
                        return true;
                    }
                    else
                        return false;

                case enMode.Update:
                    if (_Update())
                    {
                        _Update();
                        return true;
                    }
                    else
                        return false;

                default:
                    return false;
            }
        }

       static public bool Delete(int ID)
        {
            return clContactData.DeleteContactByID(ID);
        }

        static public bool IsExistByID(int ID)
        {
            return clContactData.IsContactExistByID(ID);
        }

        static public DataTable GetAllContacts()
        {
            return clContactData.GetAllContacts();
        }
    }
}
