
select m.Make,vd.* from VehicleDetails vd
join Makes m on vd.MakeID = m.MakeID
where vd.Engine like '%OHV%' and vd.Engine_Cylinders = 4
