
select vd.* from VehicleDetails vd
join Bodies b on vd.BodyID = b.BodyID
where b.BodyName in ('Coupe','Hatchback','Sedan')
