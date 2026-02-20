
select e.*,m.Name ManagerName from Employees e
join Employees m on e.ManagerID = m.EmployeeID
