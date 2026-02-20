
select top 1 with ties m.Make,count(*) MaxNumberOfModels from Makes m
join MakeModels mm on mm.MakeID = m.MakeID
group by m.Make
order by MaxNumberOfModels desc

--

select m.Make,count(*) MaxNumberOfModels from Makes m
join MakeModels mm on mm.MakeID = m.MakeID
group by m.Make
having count(*) =
(
	select max(T1.NumberOfModels) as MaxNumberOfModels from
	(
		select m.Make,count(*) as NumberOfModels from Makes m
		join MakeModels mm on mm.MakeID = m.MakeID
		group by m.Make
	)T1
)
