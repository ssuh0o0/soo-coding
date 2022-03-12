select emp.name AS Employee
from Employee AS emp Join Employee As ma on emp.managerId = ma.id
where emp.salary > ma.salary
