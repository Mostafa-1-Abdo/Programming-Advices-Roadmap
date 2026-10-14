using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Contacts.Data.DTOs
{
    public class clCountryDTO
    {
        public int ID { get; set; }
        public string Name { get; set; }
        public string Code { get; set; }
        public string PhoneCode { get; set; }

        public clCountryDTO()
        {
            ID = 0;
            Name = String.Empty;
            Code = String.Empty;
            PhoneCode = String.Empty;
        }
        public clCountryDTO(int id,string name,string code,string phoneCode)
        {
            ID = id;
            Name = name;
            Code = code;
            PhoneCode = phoneCode;
        }
    }
}
