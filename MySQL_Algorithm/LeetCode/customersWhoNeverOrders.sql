select Customers.name AS Customers
from Customers where Customers.id not in (select customerId from Orders)
