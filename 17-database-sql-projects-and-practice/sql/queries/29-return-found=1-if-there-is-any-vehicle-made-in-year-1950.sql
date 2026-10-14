
select Found=1
where exists
(
	select 1 from VehicleDetails 
	where Year = 1950
)
