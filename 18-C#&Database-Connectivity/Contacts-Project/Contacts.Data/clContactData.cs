using Contacts.Data;
using Contacts.Data.DTOs;
using System;
using System.Data;
using System.Data.SqlClient;
using System.Runtime.Remoting.Messaging;

namespace Contacts.Data
{
    public static class clContactData
    {
        static public clContactDTO FindContact(int ID)
        {
            clContactDTO ContactDTO = null;
            SqlConnection Connection = null;
            SqlDataReader Reader = null;

            try
            {
                Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);
                Connection.Open();

                string SQL = @"select * from Contacts 
                               where ID = @ID";
                SqlCommand Command = new SqlCommand(SQL, Connection);
                Command.Parameters.AddWithValue("@ID", ID);

                Reader = Command.ExecuteReader();

                if (Reader.Read())
                {
                    ContactDTO = new clContactDTO();

                    ContactDTO.ID = (int)Reader["ID"];
                    ContactDTO.FirstName = (string)Reader["FirstName"];
                    ContactDTO.LastName = (string)Reader["LastName"];
                    ContactDTO.DateOfBirth = (DateTime)Reader["DateOfBirth"];
                    ContactDTO.Address = (string)Reader["Address"];
                    ContactDTO.Phone = (string)Reader["Phone"];
                    ContactDTO.Email = (string)Reader["Email"];
                    ContactDTO.ImagePath = Reader["ImagePath"] != DBNull.Value ? (string)Reader["ImagePath"] : null;
                    ContactDTO.CountryID = (int)Reader["CountryID"];
                }
            }
            catch
            {
                //Code
            }
            finally
            {
                if(Reader != null && !Reader.IsClosed)
                    Reader.Close();

                if(Connection != null && Connection.State == ConnectionState.Open)
                Connection.Close();
            }

            return ContactDTO;
        }

        static public bool IsContactExist(int ID)
        {
            bool IsExist = false;
            SqlConnection Connection = null;

            try
            {
                Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);
                Connection.Open();

                string SQL = @"select 1 from Contacts
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

        static public int AddNewContact(clContactDTO ContactDTO)
        {
            int ID = 0;
            SqlConnection Connection = null;

            try
            {
                Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);
                Connection.Open();

                string SQL = @"insert into Contacts (FirstName,LastName,DateOfBirth,Address,Phone,Email,ImagePath,CountryID)
                           values
                           (@FirstName,@LastName,@DateOfBirth,@Address,@Phone,@Email,@ImagePath,@CountryID)
                           select SCOPE_IDENTITY()";
                SqlCommand Command = new SqlCommand(SQL, Connection);
                Command.Parameters.AddWithValue("@FirstName", ContactDTO.FirstName);
                Command.Parameters.AddWithValue("@LastName", ContactDTO.LastName);
                Command.Parameters.AddWithValue("@DateOfBirth", ContactDTO.DateOfBirth);
                Command.Parameters.AddWithValue("@Address", ContactDTO.Address);
                Command.Parameters.AddWithValue("@Phone", ContactDTO.Phone);
                Command.Parameters.AddWithValue("@Email", ContactDTO.Email);
                if (string.IsNullOrEmpty(ContactDTO.ImagePath))
                    Command.Parameters.AddWithValue("@ImagePath", DBNull.Value);
                else
                    Command.Parameters.AddWithValue("@ImagePath", ContactDTO.ImagePath);
                Command.Parameters.AddWithValue("@CountryID", ContactDTO.CountryID);

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

        static public bool UpdateContact(clContactDTO ContactDTO)
        {
            int RowsAffected = 0;
            SqlConnection Connection = null;

            try
            {
                Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);
                Connection.Open();

                string SQL = @"update Contacts
                               set FirstName = @FirstName,LastName = @LastName,DateOfBirth = @DateOfBirth,Address = @Address,Phone = @Phone,Email = @Email,ImagePath = @ImagePath,CountryID = @CountryID
                               where ID = @ID";
                SqlCommand Command = new SqlCommand(SQL, Connection);
                Command.Parameters.AddWithValue("@ID", ContactDTO.ID);
                Command.Parameters.AddWithValue("@FirstName", ContactDTO.FirstName);
                Command.Parameters.AddWithValue("@LastName", ContactDTO.LastName);
                Command.Parameters.AddWithValue("@DateOfBirth", ContactDTO.DateOfBirth);
                Command.Parameters.AddWithValue("@Address", ContactDTO.Address);
                Command.Parameters.AddWithValue("@Phone", ContactDTO.Phone);
                Command.Parameters.AddWithValue("@Email", ContactDTO.Email);
                if (string.IsNullOrEmpty(ContactDTO.ImagePath))
                    Command.Parameters.AddWithValue("@ImagePath", DBNull.Value);
                else
                    Command.Parameters.AddWithValue("@ImagePath", ContactDTO.ImagePath);
                Command.Parameters.AddWithValue("@CountryID", ContactDTO.CountryID);

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

        static public bool DeleteContact(int ID)
        {
            int RowsAffected = 0;
            SqlConnection Connection = null;

            try
            {
                Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);
                Connection.Open();

                string SQL = @"delete Contacts
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

        static public DataTable GetAllContacts()
        {
            DataTable Table = new DataTable();
            SqlConnection Connection = null;
            SqlDataReader Reader = null;

            try
            {
                Connection = new SqlConnection(clDataAccessSettings.ConnectionInfo);
                Connection.Open();

                string SQL = "select * from Contacts";
                SqlCommand Command = new SqlCommand(SQL, Connection);

                Reader = Command.ExecuteReader();

                if (Reader.HasRows)
                    Table.Load(Reader);
            }
            catch
            {
                //Code
            }
            finally
            {
                if (Reader != null && !Reader.IsClosed)
                    Reader.Close();

                if (Connection != null && Connection.State == ConnectionState.Open)
                    Connection.Close();
            }

            return Table;
        }
    }
}
