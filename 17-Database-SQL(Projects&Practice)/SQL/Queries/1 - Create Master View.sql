create view VehicleDetailsMaster as
select vd.ID,vd.MakeID,m.Make,vd.ModelID,mm.ModelName as Model,vd.SubModelID,
	   sm.SubModelName as SubModel,vd.BodyID,b.BodyName as Body,vd.Vehicle_Display_Name,vd.Year,
	   vd.DriveTypeID,dt.DriveTypeName as DriveType,vd.Engine,vd.Engine_CC,vd.Engine_Cylinders,
	   vd.Engine_Liter_Display,vd.FuelTypeID,ft.FuelTypeName as Fuel,vd.NumDoors
from VehicleDetails vd
left join Makes m on vd.MakeID = m.MakeID
left join MakeModels mm on vd.ModelID= mm.ModelID
left join SubModels sm on  vd.SubModelID = sm.SubModelID
left join DriveTypes dt on vd.DriveTypeID = dt.DriveTypeID
left join FuelTypes ft on  vd.FuelTypeID = ft.FuelTypeID
left join Bodies b on  vd.BodyID = b.BodyID

