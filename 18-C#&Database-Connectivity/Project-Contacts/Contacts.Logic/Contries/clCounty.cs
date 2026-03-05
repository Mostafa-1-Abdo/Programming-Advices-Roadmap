using Contacts.Data.Countries;
using System;
using System.Data;

namespace Contacts.Logic.Countries
{
    public class clCountry
    {
        public enum enMode : byte
        {
            Create, Update, Delete
        }

        public int ID { set; get; }
        public string Name { set; get; }
        public string Code { set; get; }
        public string PhoneCode { set; get; }
        private enMode _Mode;

        private bool _AddNew()
        {
            ID = clCountryData.AddNewCountry(Name, Code, PhoneCode);

            return ID != 0;
        }

        private bool _Update()
        {
            return clCountryData.UpdateCountry(ID, Name, Code, PhoneCode);
        }

        public clCountry()
        {
            ID = 0;
            Name = null;
            Code = null;
            PhoneCode = null;
            _Mode = enMode.Create;
        }
        private clCountry(int id, string name, string code, string phoneCode)
        {
            ID = id;
            Name = name;
            Code = code;
            PhoneCode = phoneCode;
            _Mode = enMode.Update;
        }

        static public clCountry Find(int ID)
        {
            string Name = null, Code = null, PhoneCode = null;

            if (clCountryData.FindCountry(ID, ref Name, ref Code, ref PhoneCode))
                return new clCountry(ID, Name, Code, PhoneCode);
            return null;
        }
        static public clCountry Find(string Name)
        {
            int ID = 0;
            string Code = null, PhoneCode = null;

            if (clCountryData.FindCountry(Name, ref ID, ref Code, ref PhoneCode))
                return new clCountry(ID, Name, Code, PhoneCode);
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
                    else
                        return false;

                case enMode.Update:
                    return _Update();

                default:
                    return false;
            }
        }

        static public bool Delete(int ID)
        {
            return clCountryData.DeleteCountry(ID);
        }

        static public bool IsExist(int ID)
        {
            return clCountryData.IsCountryExist(ID);
        }
        static public bool IsExist(string Name)
        {
            return clCountryData.IsCountryExist(Name);
        }

        static public DataTable GetAllCountries()
        {
            return clCountryData.GetAllCountries();
        }
    }
}
