
select  cast ((select count(*) from VehicleDetails where NumDoors is null) as float) / 
		(select count(*) from  VehicleDetails) as PercentageOfNoSpecifiedDoors
