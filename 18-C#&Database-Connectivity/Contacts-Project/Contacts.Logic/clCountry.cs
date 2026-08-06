using Contacts.Data;
using Contacts.Data.DTOs;
using System;
using System.Data;

namespace Contacts.Logic.Countries
{
    public class clCountry
    {
        public enum enMode : byte
        {
            AddNew, Update
        }

        private enMode _Mode;

        public int ID { get; set; }
        public string Name { get; set; }
        public string Code { get; set; }
        public string PhoneCode { get; set; }

        public clCountryDTO CountryDTO
        {
            get
            {
                return new clCountryDTO(ID, Name, Code, PhoneCode);
            }
        }

        private clCountry(clCountryDTO CountryDTO)
        {
            _Mode = enMode.Update;

            ID = CountryDTO.ID;
            Name = CountryDTO.Name;
            Code = CountryDTO.Code;
            PhoneCode = CountryDTO.Code;
        }
        public clCountry()
        {
            _Mode = enMode.AddNew;

            ID = 0;
            Name = String.Empty;
            Code = String.Empty;
            PhoneCode = String.Empty;
        }

        static public clCountry Find(int ID)
        {
            clCountryDTO CountryDTO = clCountryData.FindCountry(ID);

            return CountryDTO != null ? new clCountry(CountryDTO) : null;
        }
        static public clCountry Find(string Name)
        {
            clCountryDTO CountryDTO = clCountryData.FindCountry(Name);

            return CountryDTO != null ? new clCountry(CountryDTO) : null;
        }

        private bool IsValid()
        {
            if (string.IsNullOrEmpty(Name))
                return false;
            return true;
        }
        private bool _AddNew()
        {
            ID = clCountryData.AddNewCountry(CountryDTO);

            return ID != 0;
        }
        private bool _Update()
        {
            return clCountryData.UpdateCountry(CountryDTO);
        }
        public bool Save()
        {
            if (!IsValid())
                return false;

            switch (_Mode)
            {
                case enMode.AddNew:
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
