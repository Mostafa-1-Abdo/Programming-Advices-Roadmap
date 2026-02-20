
select m.Make,count(*) as NumberOfVehilces from VehicleDetails vd 
join Makes m on vd.MakeID = m.MakeID
where vd.Year between 1950 and 2000
group by m.Make
having count(*) > 12000
order by NumberOfVehilces desc

--Without having

select * from 
(
	select m.Make,count(*) as NumberOfVehilces from VehicleDetails vd 
	join Makes m on vd.MakeID = m.MakeID
	where vd.Year between 1950 and 2000
	group by m.Make
)T1
where T1.NumberOfVehilces > 12000
order by NumberOfVehilces desc