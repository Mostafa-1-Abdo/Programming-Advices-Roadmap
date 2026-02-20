
select m.Make,count(*) as NumberOfVehicles from VehicleDetails vd
join Makes m on vd.MakeID = m.MakeID
group by m.Make
having count(*) > 20000
order by NumberOfVehicles desc
