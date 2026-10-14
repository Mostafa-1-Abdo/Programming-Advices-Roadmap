
select m.Make,count(*) as NumberOfVehicles from VehicleDetails vd
join Makes m on vd.MakeID = m.MakeID
group by m.Make
order by NumberOfVehicles desc
