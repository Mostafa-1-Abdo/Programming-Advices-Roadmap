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
       private  enMode _Mode = enMode.Add;

        private bool _AddNew()
        {
            int ID = clCountryData.AddNewCountry(Name);

            return ID != 0;
        }

        private bool _Update()
        {
            return clCountryData.UpdateCountryByID(ID, Name);
        }

        public clCountry()
        {
            this.ID = 0;
            this.Name = null;
            _Mode = enMode.Add;
        }
        private clCountry(int ID, string Name)
        {
            this.ID = ID;
            this.Name = Name;
            _Mode = enMode.Update;
        }

        static public clCountry Find(int ID)
        {
            string Name;

            if (clCountryData.FindCountryInfoByID(ID,out Name))
                return new clCountry(ID, Name);
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
