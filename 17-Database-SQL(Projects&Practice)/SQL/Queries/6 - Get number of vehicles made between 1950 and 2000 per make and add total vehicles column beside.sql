
select m.Make,count(*) as NumberOfVehilces,
	TotalVehicles = (select count(*) from VehicleDetails ) 
from VehicleDetails vd
join Makes m on vd.MakeID = m.MakeID
where vd.Year between 1950 and 2000
group by m.Make
order by NumberOfVehilces desc