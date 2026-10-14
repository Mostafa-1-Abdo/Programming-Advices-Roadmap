
select * from
(
	select Vehicle_Display_Name,Year,Age = year(getdate()) - Year from VehicleDetails
)T1
where T1.Age between 15 and 25
