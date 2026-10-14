
select m.MakeID,m.Make,sm.SubModelName from VehicleDetails vd
join SubModels sm on vd.SubModelID = sm.SubModelID
join Makes m on vd.MakeID = m.MakeID
where sm.SubModelName = 'Elite'
