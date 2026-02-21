using Contacts.Data.Countries;
using System;
using System.Data;

namespace Contacts.Logic.Countries
{
   public class clCountry
    {
        public enum enMode : byte
        {
            Add, Update, Delete
        }

        public int ID { set; get; }
        public string Name { set; get; }
        public string Code { set; get; }
        public string PhoneCode { set; get; }
       private  enMode _Mode = enMode.Add;

        private bool _AddNew()
        {
             ID = clCountryData.AddNewCountry(Name,Code,PhoneCode);

            return ID != 0;
        }

        private bool _Update()
        {
            return clCountryData.UpdateCountryByID(ID, Name,Code,PhoneCode);
        }

        public clCountry()
        {
            ID = 0;
            Name = null;
            Code = null;
            PhoneCode = null;
            _Mode = enMode.Add;
        }
        private clCountry(int ID, string Name,string Code,string PhoneCode)
        {
            this.ID = ID;
            this.Name = Name;
           this. Code =Code;
           this. PhoneCode = PhoneCode;
            _Mode = enMode.Update;
        }

        static public clCountry Find(int ID)
        {
            string Name, Code, PhoneCode;

            if (clCountryData.FindCountryInfoByID(ID,out Name,out Code,out PhoneCode))
                return new clCountry(ID, Name,Code,PhoneCode);
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
            return clCountryData.DeleteCountryByID(ID);
        }

        static public bool IsExistByID(int ID)
        {
            return clCountryData.IsCountryExistByID(ID);
        }
        static public bool IsExistByName(string Name)
        {
            return clCountryData.IsCountryExistByName(Name);
        }

        static public DataTable GetAllCountries()
        {
            return clCountryData.GetAllCountries();
        }
    }
}
