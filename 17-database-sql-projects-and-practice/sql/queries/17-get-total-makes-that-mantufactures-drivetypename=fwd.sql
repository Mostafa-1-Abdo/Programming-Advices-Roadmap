
select count(distinct m.Make) TotalMakesWithFWD from Makes m 
join VehicleDetails vd on vd.MakeID = m.MakeID
join DriveTypes dt on vd.DriveTypeID = dt.DriveTypeID
where dt.DriveTypeName = 'FWD'
