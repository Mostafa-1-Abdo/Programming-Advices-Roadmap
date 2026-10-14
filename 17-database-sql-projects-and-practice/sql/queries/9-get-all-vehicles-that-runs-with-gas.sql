 
 select * from VehicleDetails vd
 join FuelTypes ft on vd.FuelTypeID = ft.FuelTypeID
 where ft.FuelTypeName = N'GAS'