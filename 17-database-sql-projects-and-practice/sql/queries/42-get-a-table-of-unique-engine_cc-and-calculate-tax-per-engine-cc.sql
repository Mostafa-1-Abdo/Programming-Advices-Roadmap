
select Engine_CC,
	   Tax = 
	   case
			when Engine_CC between 0 and 1000 then 100
			when Engine_CC between 1001 and 2000 then 200
			when Engine_CC between 2001 and 4000 then 300
			when Engine_CC between 4001 and 6000 then 400
			when Engine_CC between 6001 and 8000 then 500
			when Engine_CC > 8000 then 600
			else 0
	  end
from
(
	select distinct Engine_CC from VehicleDetails
)T1
order by Engine_CC desc
