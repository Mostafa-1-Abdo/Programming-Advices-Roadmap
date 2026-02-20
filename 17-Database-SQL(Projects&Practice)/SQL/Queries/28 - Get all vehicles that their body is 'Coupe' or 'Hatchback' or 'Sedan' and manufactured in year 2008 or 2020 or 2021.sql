
select vd.* from VehicleDetails vd
join Bodies b on vd.BodyID = b.BodyID
where b.BodyName in ('Coupe','Hatchback','Sedan') and vd.Year in (2008,2020,2021)
