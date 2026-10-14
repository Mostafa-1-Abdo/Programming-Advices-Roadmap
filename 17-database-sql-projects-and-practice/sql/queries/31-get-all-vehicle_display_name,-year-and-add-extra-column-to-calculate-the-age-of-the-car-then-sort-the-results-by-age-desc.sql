
select Vehicle_Display_Name,Year,Age = year(getdate()) - Year from VehicleDetails
order by Age desc
