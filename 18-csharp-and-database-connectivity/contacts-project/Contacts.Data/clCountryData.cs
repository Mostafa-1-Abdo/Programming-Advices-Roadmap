using Contacts.Data;
using Contacts.Data.DTOs;
using System;
using System.Data;
using System.Data.SqlClient;
using System.Diagnostics.Eventing.Reader;
using System.Runtime.Remoting.Messaging;
using System.Xml.Linq;

namespace Contacts.Data
{
    public static class clCountryData
    {
        static public clCountryDTO FindCountry(int ID)
        {
            clCountryDTO CountryDTO = null;
            SqlConnection Connection = null;
            SqlDataReader Reader = null;

            try
            {
                Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);
                Connection.Open();

                string SQL = @"select * from Countries 
                               where ID = @ID";
                SqlCommand Command = new SqlCommand(SQL, Connection);
                Command.Parameters.AddWithValue("@ID", ID);

                Reader = Command.ExecuteReader();

                if (Reader.Read())
                {
                    CountryDTO = new clCountryDTO();

                    CountryDTO.ID = (int)Reader["ID"];
                    CountryDTO.Name = (string)Reader["Name"];
                    CountryDTO.Code = Reader["Code"] != DBNull.Value ? (string)Reader["Code"] : null;
                    CountryDTO.PhoneCode = Reader["PhoneCode"] != DBNull.Value ? (string)Reader["PhoneCode"] : null;
                }
            }
            catch
            {
                //Coode
            }
            finally
            {
                if (Reader != null && !Reader.IsClosed)
                    Reader.Close();

                if (Connection != null && Connection.State == ConnectionState.Open)
                    Connection.Close();
            }

            return CountryDTO;
        }
        static public clCountryDTO FindCountry(string Name)
        {
            clCountryDTO CountryDTO = null;
            SqlConnection Connection = null;
            SqlDataReader Reader = null;

            try
            {
                Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);
                Connection.Open();

                string SQL = @"select * from Countries 
                               where Name = @Name";
                SqlCommand Command = new SqlCommand(SQL, Connection);
                Command.Parameters.AddWithValue("@Name", Name);

                Reader = Command.ExecuteReader();

                if (Reader.Read())
                {
                    CountryDTO = new clCountryDTO();

                    CountryDTO.ID = (int)Reader["ID"];
                    CountryDTO.Name = (string)Reader["Name"];
                    CountryDTO.Code = Reader["Code"] != DBNull.Value ? (string)Reader["Code"] : null;
                    CountryDTO.PhoneCode = Reader["PhoneCode"] != DBNull.Value ? (string)Reader["PhoneCode"] : null;
                }
            }
            catch
            {
                //Coode
            }
            finally
            {
                if (Reader != null && !Reader.IsClosed)
                    Reader.Close();

                if (Connection != null && Connection.State == ConnectionState.Open)
                    Connection.Close();
            }

            return CountryDTO;
        }

        static public bool IsCountryExist(int ID)
        {
            bool IsExist = false;
            SqlConnection Connection = null;

            try
            {
                Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);
                Connection.Open();

                string SQL = @"select 1 from Countries
                               where ID = @ID";
                SqlCommand Command = new SqlCommand(SQL, Connection);
                Command.Parameters.AddWithValue("@ID", ID);

                object Result = Command.ExecuteScalar();

                if (Result != null && Result != DBNull.Value)
                    IsExist = true;
            }
            catch
            {
                //Code
            }
            finally
            {
                if (Connection != null && Connection.State == ConnectionState.Open)
                    Connection.Close();
            }

            return IsExist;
        }
        static public bool IsCountryExist(string Name)
        {
            bool IsExist = false;
            SqlConnection Connection = null;

            try
            {
                Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);
                Connection.Open();

                string SQL = @"select 1 from Countries
                               where Name = @Name";
                SqlCommand Command = new SqlCommand(SQL, Connection);
                Command.Parameters.AddWithValue("@Name", Name);

                object Result = Command.ExecuteScalar();

                if (Result != null && Result != DBNull.Value)
                    IsExist = true;
            }
            catch
            {
                //Code
            }
            finally
            {
                if (Connection != null && Connection.State == ConnectionState.Open)
                    Connection.Close();
            }

            return IsExist;
        }

        static public int AddNewCountry(clCountryDTO CountryDTO)
        {
            int ID = 0;
            SqlConnection Connection = null;

            try
            {
                Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);
                Connection.Open();

                string SQL = @"insert into Countries (Name,Code,PhoneCode)
                               values
                               (@Name,@Code,@PhoneCode)
                               select SCOPE_IDENTITY()";
                SqlCommand Command = new SqlCommand(SQL, Connection);
                Command.Parameters.AddWithValue("@Name", CountryDTO.Name);
                if (string.IsNullOrEmpty(CountryDTO.Code))
                    Command.Parameters.AddWithValue("@Code", CountryDTO.Code);
                else
                    Command.Parameters.AddWithValue("@Code", DBNull.Value);
                if (string.IsNullOrEmpty(CountryDTO.PhoneCode))
                    Command.Parameters.AddWithValue("@PhoneCode", CountryDTO.PhoneCode);
                else
                    Command.Parameters.AddWithValue("@PhoneCode", DBNull.Value);

                object Result = Command.ExecuteScalar();

                if (Result != null && Result != DBNull.Value)
                {
                    ID = Convert.ToInt32(Result);
                }
            }
            catch
            {
                //Code
            }
            finally
            {
                if (Connection != null && Connection.State == ConnectionState.Open)
                    Connection.Close();
            }

            return ID;
        }

        static public bool UpdateCountry(clCountryDTO CountryDTO)
        {
            int RowsAffected = 0;
            SqlConnection Connection = null;

            try
            {
                Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);
                Connection.Open();

                string SQL = @"update Countries
                               set Name = @Name, Code = @Code, PhoneCode = @PhoneCode
                               where ID = @ID";
                SqlCommand Command = new SqlCommand(SQL, Connection);
                Command.Parameters.AddWithValue("@ID", CountryDTO.ID);
                Command.Parameters.AddWithValue("@Name", CountryDTO.Name);
                if (string.IsNullOrEmpty(CountryDTO.Code))
                    Command.Parameters.AddWithValue("@Code", CountryDTO.Code);
                else
                    Command.Parameters.AddWithValue("@Code", DBNull.Value);
                if (string.IsNullOrEmpty(CountryDTO.PhoneCode))
                    Command.Parameters.AddWithValue("@PhoneCode", CountryDTO.PhoneCode);
                else
                    Command.Parameters.AddWithValue("@PhoneCode", DBNull.Value);

                RowsAffected = Command.ExecuteNonQuery();
            }
            catch
            {
                //Code
            }
            finally
            {
                if (Connection != null && Connection.State == ConnectionState.Open)
                    Connection.Close();
            }

            return RowsAffected > 0;
        }

        static public bool DeleteCountry(int ID)
        {
            int RowsAffected = 0;
            SqlConnection Connection = null;

            try
            {
                Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);
                Connection.Open();

                string SQL = @"delete Countries
                               where ID = @ID";
                SqlCommand Command = new SqlCommand(SQL, Connection);
                Command.Parameters.AddWithValue("@ID", ID);

                RowsAffected = Command.ExecuteNonQuery();
            }
            catch
            {
                //Code
            }
            finally
            {
                if (Connection != null && Connection.State == ConnectionState.Open)
                    Connection.Close();
            }

            return RowsAffected > 0;
        }

        static public DataTable GetAllCountries()
        {
            DataTable Table = new DataTable();
            SqlConnection Connection = null;

            try
            {
                Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);
                Connection.Open();

                string SQL = "select * from Countries";
                SqlCommand Command = new SqlCommand(SQL, Connection);

                SqlDataReader Reader = Command.ExecuteReader();

                if (Reader.HasRows)
                    Table.Load(Reader);

                Reader.Close();
            }
            catch
            {
                //Code
            }
            finally
            {
                if (Connection != null && Connection.State == ConnectionState.Open)
                    Connection.Close();
            }

            return Table;
        }
    }
}
