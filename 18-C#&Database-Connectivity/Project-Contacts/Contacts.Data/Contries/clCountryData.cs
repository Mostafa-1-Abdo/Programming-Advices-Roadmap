using System;
using System.Data;
using System.Data.SqlClient;
using Contacts.Data;

namespace Contacts.Data.Countries
{
    public class clCountryData
    {
        static public bool FindCountryInfoByID(int ID, out string Name)
        {
            Name = null;

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
        static public bool FindCountryInfoByName(string Name,out int ID)
        {
            ID = 0;

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

        static public bool IsCountryExistByID(int ID)
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
        static public bool IsCountryExistByName(string Name)
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

        static public int AddNewCountry(string Name)
        {
            int ID = 0;

            SqlConnection Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);

            string sql = @"insert into Countries (Name)
                           values
                           (@Name)
                           select SCOPE_IDENTITY()
                           ";
            SqlCommand Command = new SqlCommand(sql, Connection);
            Command.Parameters.AddWithValue("@Name", Name);
 
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

        static public bool UpdateCountryByID(int ID, string Name)
        {
            int RowsAffected = 0;

            SqlConnection Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);

            string sql = @"update Countries
                           set FirstName = @FirstName, LastName = @LastName, DateOfBirth = @DateOfBirth, Address = @Address, Phone = @Phone, Email = @Email, ImagePath = @ImagePath, CountryID = @CountryID
                           where ID = @ID";
            SqlCommand Command = new SqlCommand(sql, Connection);
            Command.Parameters.AddWithValue("@ID", ID);
            Command.Parameters.AddWithValue("@Name", Name);

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

        static public bool DeleteCountryByID(int ID)
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
