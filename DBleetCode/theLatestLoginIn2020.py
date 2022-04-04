SELECT L1.user_id, MAX(L1.time_stamp) AS last_stamp FROM Logins L1
JOIN Logins L2 ON L1.user_id = L2.user_id
WHERE YEAR(L1.time_stamp) = 2020
GROUP BY L1.user_id;
