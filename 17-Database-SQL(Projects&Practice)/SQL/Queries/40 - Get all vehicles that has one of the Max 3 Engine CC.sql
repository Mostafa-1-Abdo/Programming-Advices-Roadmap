
select * from VehicleDetails
where Engine_CC in
(
	select distinct top 3 Engine_CC from VehicleDetails
	order by Engine_CC desc
)
