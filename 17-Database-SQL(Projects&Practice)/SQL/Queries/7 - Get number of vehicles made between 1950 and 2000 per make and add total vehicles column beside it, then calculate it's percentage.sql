
select *,Perc = cast (T1.NumberOfVehilces as float) / T1.TotalVehicles  from 
(
	select m.Make,count(*) as NumberOfVehilces,
		TotalVehicles = (select count(*) from VehicleDetails ) 
		from VehicleDetails vd
	join Makes m on vd.MakeID = m.MakeID
	where vd.Year between 1950 and 2000
	group by m.Make
)T1
order by T1.NumberOfVehilces desc
