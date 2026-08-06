using Contacts.Data;
using Contacts.Data.DTOs;
using System;
using System.Data;

namespace Contacts.Logic.Contacts
{
    public class clContact
    {
        public enum enMode : byte
        {
            AddNew, Update
        }

        private enMode _Mode;

        public int ID { get; set; }
        public string FirstName { get; set; }
        public string LastName { get; set; }
        public DateTime DateOfBirth { get; set; }
        public string Address { get; set; }
        public string Phone { get; set; }
        public string Email { get; set; }
        public string ImagePath { get; set; }
        public int CountryID { get; set; }

        public clContactDTO ContactDTO
        {
            get
            {
                return new clContactDTO(ID, FirstName, LastName, DateOfBirth, Address, Phone, Email, ImagePath, CountryID);
            }
        }

        private clContact(clContactDTO ContactDTO)
        {
            _Mode = enMode.Update;

            ID = ContactDTO.ID;
            FirstName = ContactDTO.FirstName;
            LastName = ContactDTO.LastName;
            DateOfBirth = ContactDTO.DateOfBirth;
            Address = ContactDTO.Address;
            Phone = ContactDTO.Phone;
            Email = ContactDTO.Email;
            ImagePath = ContactDTO.ImagePath;
            CountryID = ContactDTO.CountryID;
        }
        public clContact()
        {
            _Mode = enMode.AddNew;

            ID = 0;
            FirstName = string.Empty;
            LastName = string.Empty;
            DateOfBirth = new DateTime();
            Address = string.Empty;
            Phone = string.Empty;
            Email = string.Empty;
            ImagePath = string.Empty;
            CountryID = 0;
        }

        static public clContact Find(int ID)
        {
            clContactDTO ContactDTO = clContactData.FindContact(ID);

            return ContactDTO != null ? new clContact(ContactDTO) : null;
        }

        private bool _IsValid()
        {
            if (string.IsNullOrEmpty(FirstName) || string.IsNullOrEmpty(LastName) || string.IsNullOrEmpty(Address) || string.IsNullOrEmpty(Phone) || string.IsNullOrEmpty(Email))
                return false;
            return true;
        }
        private bool _AddNew()
        {
            ID = clContactData.AddNewContact(ContactDTO);

            return ID != 0;
        }
        private bool _Update()
        {
            return clContactData.UpdateContact(ContactDTO);
        }
        public bool Save()
        {
            if (!_IsValid())
                return false;

            switch (_Mode)
            {
                case enMode.AddNew:
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
