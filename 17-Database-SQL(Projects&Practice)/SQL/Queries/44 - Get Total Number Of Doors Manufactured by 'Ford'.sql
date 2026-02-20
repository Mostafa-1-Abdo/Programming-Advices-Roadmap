
select m.Make,sum(vd.NumDoors) TotalNumberOfDoors from VehicleDetails vd
join Makes m on vd.MakeID = m.MakeID
group by m.Make
having m.Make = 'Ford'
order by TotalNumberOfDoors desc

--

select m.Make,sum(vd.NumDoors) TotalNumberOfDoors from VehicleDetails vd
join Makes m on vd.MakeID = m.MakeID
where m.Make = 'Ford'
group by m.Make
order by TotalNumberOfDoors desc

--Same performance but less flexibility

select sum(NumDoors) TotalNumberOfDoors from VehicleDetails
where MakeID = (select MakeID from Makes where Make = 'Ford')