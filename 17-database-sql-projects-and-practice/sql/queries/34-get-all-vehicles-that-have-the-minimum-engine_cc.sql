
select * from VehicleDetails
where Engine_CC = (select min(Engine_CC) from VehicleDetails)
