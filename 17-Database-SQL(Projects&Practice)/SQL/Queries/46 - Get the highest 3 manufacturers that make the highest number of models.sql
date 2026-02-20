
select top 3 with ties m.Make,count(*) NumberOfModels from Makes m
join MakeModels mm on mm.MakeID = m.MakeID
group by m.Make
order by NumberOfModels desc
