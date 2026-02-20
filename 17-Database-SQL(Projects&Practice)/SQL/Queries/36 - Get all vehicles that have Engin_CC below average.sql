
select * from VehicleDetails
where Engine_CC < (select avg(Engine_CC) from VehicleDetails)
