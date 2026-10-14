
select m.Make,dt.DriveTypeName,count(*) NumberOfVehicles from VehicleDetails vd
join Makes m on vd.MakeID = m.MakeID
join DriveTypes dt on vd.DriveTypeID = dt.DriveTypeID
group by m.Make,dt.DriveTypeName
order by m.Make asc,NumberOfVehicles desc
