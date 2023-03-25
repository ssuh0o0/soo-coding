SELECT event_day As day , emp_id, sum(out_time - in_time) AS total_time FROM Employees 
GROUP By emp_id, event_day
