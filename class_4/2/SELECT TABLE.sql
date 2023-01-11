USE demo_db;
SELECT *
FROM product
WHERE CHARINDEX(created_date, '2022-12-28', 1)<>0
SELECT *
FROM [order]
WHERE CHARINDEX(created_date, '2022-12-28', 1)<>0