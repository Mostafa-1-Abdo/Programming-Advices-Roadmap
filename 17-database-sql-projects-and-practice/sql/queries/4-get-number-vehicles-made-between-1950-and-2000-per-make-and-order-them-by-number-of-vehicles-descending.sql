
select m.Make,count(*) as NumberOfVehicles from VehicleDetails vd
join Makes m on vd.MakeID = m.MakeID
where vd.Year between 1950 and 2000
group by m.Make
order by NumberOfVehicles desc