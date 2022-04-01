SELECT product_id,
        CASE WHEN x=1 THEN 'store1'   
             WHEN x=2 THEN 'store2'
             WHEN x=3 THEN 'store3'
        END store,
        CASE WHEN x=1 THEN store1
             WHEN store2 != null && x=2 THEN store2
             WHEN x=3 THEN store3
        END price
FROM (
    SELECT *
    FROM Products, (
        SELECT 1 AS x
        UNION ALL SELECT 2 AS x
        UNION ALL SELECT 3 AS x
    )B
)A
ORDER BY product_id, store


/* using pivot */
