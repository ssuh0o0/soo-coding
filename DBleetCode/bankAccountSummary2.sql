SELECT u.name , Sum(t.amount) AS balance 
FROM Users As u Join Transactions As t ON t.account = u.account
GROUP By t.account 
Having balance > 10000
