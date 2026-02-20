
select * from VehicleDetails
where Engine_CC = (select max(Engine_CC) from VehicleDetails)
