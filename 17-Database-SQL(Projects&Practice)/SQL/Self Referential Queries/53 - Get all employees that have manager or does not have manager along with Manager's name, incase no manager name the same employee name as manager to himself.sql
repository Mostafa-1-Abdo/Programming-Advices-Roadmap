
select e.*,
	   ManagerName = 
	   case
			when e.ManagerID is null then e.Name
			else m.Name
	   end   
from Employees e
left join Employees m on e.ManagerID = m.EmployeeID
