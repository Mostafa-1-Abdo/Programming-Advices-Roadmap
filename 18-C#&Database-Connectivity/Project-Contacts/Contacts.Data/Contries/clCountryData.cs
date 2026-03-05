using System;
using System.Data;
using System.Data.SqlClient;
using System.Diagnostics.Eventing.Reader;
using Contacts.Data;

namespace Contacts.Data.Countries
{
    public class clCountryData
    {
        static public bool FindCountry(int ID, ref string Name, ref string Code, ref string PhoneCode)
        {
            bool IsFound = false;

            SqlConnection Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);

            string sql = @"select * from Countries 
                             where ID = @ID";
            SqlCommand Command = new SqlCommand(sql, Connection);
            Command.Parameters.AddWithValue("ID", ID);

            try
            {
                Connection.Open();

                SqlDataReader Reader = Command.ExecuteReader();

                if (Reader.Read())
                {
                    IsFound = true;

                    Name = (string)Reader["Name"];
                    Code = Reader["Code"] != DBNull.Value ? (string)Reader["Code"] : null;
                    PhoneCode = Reader["PhoneCode"] != DBNull.Value ? (string)Reader["PhoneCode"] : null;


                    Reader.Close();
                }
            }
            catch
            {

            }
            finally
            {
                Connection.Close();
            }

            return IsFound;
        }
        static public bool FindCountry(string Name, ref int ID, ref string Code, ref string PhoneCode)
        {
            bool IsFound = false;

            SqlConnection Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);

            string sql = @"select * from Countries 
                             where Name = @Name";
            SqlCommand Command = new SqlCommand(sql, Connection);
            Command.Parameters.AddWithValue("Name",Name);

            try
            {
                Connection.Open();

                SqlDataReader Reader = Command.ExecuteReader();

                if (Reader.Read())
                {
                    IsFound = true;

                    Name = (string)Reader["Name"];
                    Code = Reader["Code"] != DBNull.Value ? (string)Reader["Code"] : null;
                    PhoneCode = Reader["PhoneCode"] != DBNull.Value ? (string)Reader["PhoneCode"] : null;

                    Reader.Close();
                }
            }
            catch
            {

            }
            finally
            {
                Connection.Close();
            }

            return IsFound;
        }

        static public bool IsCountryExist(int ID)
        {
            bool IsExist = false;

            SqlConnection Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);

            string sql = @"select 1 from Countries
                           where ID = @ID";
            SqlCommand Command = new SqlCommand(sql, Connection);
            Command.Parameters.AddWithValue("ID", ID);

            try
            {
                Connection.Open();

                object Result = Command.ExecuteScalar();

                if (Result != null && Result != DBNull.Value)
                    IsExist = true;
            }
            catch
            {

            }
            finally
            {
                Connection.Close();
            }

            return IsExist;
        }
        static public bool IsCountryExist(string Name)
        {
            bool IsExist = false;

            SqlConnection Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);

            string sql = @"select 1 from Countries
                           where Name = @Name";
            SqlCommand Command = new SqlCommand(sql, Connection);
            Command.Parameters.AddWithValue("Name", Name);

            try
            {
                Connection.Open();

                object Result = Command.ExecuteScalar();

                if (Result != null && Result != DBNull.Value)
                    IsExist = true;
            }
            catch
            {

            }
            finally
            {
                Connection.Close();
            }

            return IsExist;
        }

        static public int AddNewCountry(string Name,string Code,string PhoneCode)
        {
            int ID = 0;

            SqlConnection Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);

            string sql = @"insert into Countries (Name,Code,PhoneCode)
                           values
                           (@Name,@Code,@PhoneCode)
                           select SCOPE_IDENTITY()
                           ";
            SqlCommand Command = new SqlCommand(sql, Connection);
            Command.Parameters.AddWithValue("@Name", Name);

            if (Code != "")
                Command.Parameters.AddWithValue("@Code", Code);
            else
                Command.Parameters.AddWithValue("@Code", DBNull.Value);

            if(PhoneCode != "")
                Command.Parameters.AddWithValue("@PhoneCode", PhoneCode);
            else
                Command.Parameters.AddWithValue("@PhoneCode", DBNull.Value);

            try
            {
                Connection.Open();

                object Result = Command.ExecuteScalar();

                if (Result != null && Result != DBNull.Value)
                {
                    ID = Convert.ToInt32(Result);
                }
            }
            catch
            {
            }
            finally
            {
                Connection.Close();
            }

            return ID;
        }

        static public bool UpdateCountry(int ID, string Name,string Code,string PhoneCode)
        {
            int RowsAffected = 0;

            SqlConnection Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);

            string sql = @"update Countries
                           set Name = @Name, Code = @Code, PhoneCode = @PhoneCode
                           where ID = @ID";
            SqlCommand Command = new SqlCommand(sql, Connection);
            Command.Parameters.AddWithValue("@ID", ID);
            Command.Parameters.AddWithValue("@Name", Name);
            if (Code != "")
                Command.Parameters.AddWithValue("@Code", Code);
            else
                Command.Parameters.AddWithValue("@Code", DBNull.Value);

            if (PhoneCode != "")
                Command.Parameters.AddWithValue("@PhoneCode", PhoneCode);
            else
                Command.Parameters.AddWithValue("@PhoneCode", DBNull.Value);

            try
            {
                Connection.Open();

                RowsAffected = Command.ExecuteNonQuery();
            }
            catch
            {
            }
            finally
            {
                Connection.Close();
            }

            return RowsAffected != 0;
        }

        static public bool DeleteCountry(int ID)
        {
            int RowsAffected = 0;

            SqlConnection Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);

            string sql = @"delete Countries
                           where ID = @ID";
            SqlCommand Command = new SqlCommand(sql, Connection);
            Command.Parameters.AddWithValue("@ID", ID);
            try
            {
                Connection.Open();

                RowsAffected = Command.ExecuteNonQuery();
            }
            catch
            {
            }
            finally
            {
                Connection.Close();
            }

            return RowsAffected != 0;
        }

        static public DataTable GetAllCountries()
        {
            DataTable Table = new DataTable();

            SqlConnection Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);

            string sql = "select * from Countries";
            SqlCommand Command = new SqlCommand(sql, Connection);

            try
            {
                Connection.Open();

                SqlDataReader Reader = Command.ExecuteReader();

                if (Reader.HasRows)
                    Table.Load(Reader);

                Reader.Close();
            }
            catch
            {
            }
            finally
            {
                Connection.Close();
            }

            return Table;
        }

    }
}
