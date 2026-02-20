
select top 1 with ties m.Make,count(*) MinNumberOfModels from Makes m
join MakeModels mm on mm.MakeID = m.MakeID
group by m.Make
order by MinNumberOfModels 

--

select m.Make,count(*) MinNumberOfModels from Makes m
join MakeModels mm on mm.MakeID = m.MakeID
group by m.Make
having count(*) =
(
	select min(T1.NumberOfModels) as MinNumberOfModels from
	(
		select m.Make,count(*) as NumberOfModels from Makes m
		join MakeModels mm on mm.MakeID = m.MakeID
		group by m.Make
	)T1
)
