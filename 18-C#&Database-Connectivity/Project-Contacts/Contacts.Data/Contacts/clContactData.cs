using System;
using System.Data;
using System.Data.SqlClient;
using Contacts.Data;

namespace Contacts.Data.Contacts
{
    public class clContactData
    {
        static public bool FindContact(int ID, ref string FirstName, ref string LastName, ref DateTime DateOfBirth, ref string Address, ref string Phone, ref string Email, ref string ImagePath, ref int CountryID)
        {
            bool IsFound = false;

            SqlConnection Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);

            string sql = @"select * from Contacts 
                           where ID = @ID";
            SqlCommand Command = new SqlCommand(sql, Connection);
            Command.Parameters.AddWithValue("@ID", ID);

            try
            {
                Connection.Open();
                SqlDataReader Reader = Command.ExecuteReader();


                if (Reader.Read())
                {
                    IsFound = true;

                    FirstName = (string)Reader["FirstName"];
                    LastName = (string)Reader["LastName"];
                    DateOfBirth = (DateTime)Reader["DateOfBirth"];
                    Address = (string)Reader["Address"];
                    Phone = (string)Reader["Phone"];
                    Email = (string)Reader["Email"];
                    ImagePath = Reader["ImagePath"] != DBNull.Value ? (string)Reader["ImagePath"] : null;
                    CountryID = (int)Reader["CountryID"];

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

        static public bool IsContactExist(int ID)
        {
            bool IsExist = false;

            SqlConnection Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);

            string sql = @"select 1 from Contacts
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

        static public int AddNewContact(string FirstName, string LastName, DateTime DateOfBirth, string Address, string Phone, string Email, string ImagePath, int CountryID)
        {
            int ID = 0;

            SqlConnection Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);

            string sql = @"insert into Contacts (FirstName,LastName,DateOfBirth,Address,Phone,Email,ImagePath,CountryID)
                           values
                           (@FirstName,@LastName,@DateOfBirth,@Address,@Phone,@Email,@ImagePath,@CountryID)
                           select SCOPE_IDENTITY()
                           ";
            SqlCommand Command = new SqlCommand(sql, Connection);
            Command.Parameters.AddWithValue("@FirstName", FirstName);
            Command.Parameters.AddWithValue("@LastName", LastName);
            Command.Parameters.AddWithValue("@DateOfBirth", DateOfBirth);
            Command.Parameters.AddWithValue("@Address", Address);
            Command.Parameters.AddWithValue("@Phone", Phone);
            Command.Parameters.AddWithValue("@Email", Email);
            Command.Parameters.AddWithValue("@CountryID", CountryID);

            if (string.IsNullOrWhiteSpace(ImagePath) || ImagePath == "")
                Command.Parameters.AddWithValue("@ImagePath", DBNull.Value);
            else
                Command.Parameters.AddWithValue("@ImagePath", ImagePath);

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

        static public bool UpdateContact(int ID, string FirstName, string LastName, DateTime DateOfBirth, string Address, string Phone, string Email, string ImagePath, int CountryID)
        {
            int RowsAffected = 0;

            SqlConnection Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);

            string sql = @"update Contacts
                           set FirstName = @FirstName, LastName = @LastName, DateOfBirth = @DateOfBirth, Address = @Address, Phone = @Phone, Email = @Email, ImagePath = @ImagePath, CountryID = @CountryID
                           where ID = @ID";
            SqlCommand Command = new SqlCommand(sql, Connection);
            Command.Parameters.AddWithValue("@ID", ID);
            Command.Parameters.AddWithValue("@FirstName", FirstName);
            Command.Parameters.AddWithValue("@LastName", LastName);
            Command.Parameters.AddWithValue("@DateOfBirth", DateOfBirth);
            Command.Parameters.AddWithValue("@Address", Address);
            Command.Parameters.AddWithValue("@Phone", Phone);
            Command.Parameters.AddWithValue("@Email", Email);
            Command.Parameters.AddWithValue("@CountryID", CountryID);

            if (string.IsNullOrWhiteSpace(ImagePath) || ImagePath == "")
                Command.Parameters.AddWithValue("@ImagePath", DBNull.Value);
            else
                Command.Parameters.AddWithValue("@ImagePath", ImagePath);

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

        static public bool DeleteContact(int ID)
        {
            int RowsAffected = 0;

            SqlConnection Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);

            string sql = @"delete Contacts
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

        static public DataTable GetAllContacts()
        {
            DataTable Table = new DataTable();

            SqlConnection Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);

            string sql = "select * from Contacts";
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
