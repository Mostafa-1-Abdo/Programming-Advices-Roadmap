
select m.Make,count(*) as NumberOfModels from Makes m
join MakeModels mm on mm.MakeID = m.MakeID
group by m.Make
order by NumberOfModels desc
