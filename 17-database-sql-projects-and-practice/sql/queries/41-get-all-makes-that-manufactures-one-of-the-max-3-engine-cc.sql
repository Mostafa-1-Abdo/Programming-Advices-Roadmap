
select distinct m.Make from VehicleDetails vd
join Makes m on vd.MakeID = m.MakeID
where vd.Engine_CC in 
(
	select distinct top 3 Engine_CC from VehicleDetails
	order by Engine_CC desc
)
