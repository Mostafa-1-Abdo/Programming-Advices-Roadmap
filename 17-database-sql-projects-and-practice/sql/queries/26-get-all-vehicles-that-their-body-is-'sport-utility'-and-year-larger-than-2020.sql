
select vd.* from VehicleDetails vd
join Bodies b on vd.BodyID = b.BodyID
where b.BodyName = 'Sport Utility' and vd.Year > 2020
