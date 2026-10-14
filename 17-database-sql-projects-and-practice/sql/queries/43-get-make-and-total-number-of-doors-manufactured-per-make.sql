
select m.Make,sum(vd.NumDoors) TotalNumberOfDoors from VehicleDetails vd
join Makes m on vd.MakeID = m.MakeID
group by m.Make
order by TotalNumberOfDoors desc
