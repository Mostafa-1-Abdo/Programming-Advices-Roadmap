
select m.Make,ft.FuelTypeName,count(*) as NumberOfVehicles from VehicleDetails vd
join Makes m on vd.MakeID = m.MakeID
join FuelTypes ft on vd.FuelTypeID = ft.FuelTypeID
where vd.Year between 1950 and 2000
group by m.Make,ft.FuelTypeName
order by m.Make
