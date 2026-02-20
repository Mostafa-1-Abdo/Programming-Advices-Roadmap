
select count(*) TotalVehicles from
(
	select * from VehicleDetails
	where Engine_CC > (select avg(Engine_CC) from VehicleDetails)
)T1
