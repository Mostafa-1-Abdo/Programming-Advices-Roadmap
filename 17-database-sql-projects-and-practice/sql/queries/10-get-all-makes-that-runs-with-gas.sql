
select distinct m.Make,ft.FuelTypeName from VehicleDetails vd
join Makes m on vd.MakeID = m.MakeID
join FuelTypes ft on vd.FuelTypeID = ft.FuelTypeID
where ft.FuelTypeName = N'GAS'
