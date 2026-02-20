
select e.* from Employees e
join Employees m on e.ManagerID = m.EmployeeID
where m.Name = 'Mohammed'
