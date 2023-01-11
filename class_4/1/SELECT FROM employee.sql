USE demo_db;
SELECT * FROM employee WHERE salary >= 1000;
SELECT * FROM employee WHERE salary >= 1000 AND sex = 'Male';
SELECT * FROM employee WHERE [name] LIKE 'A%';
DELETE FROM employee WHERE [status] = 3;
SELECT * FROM employee WHERE [status] = 3;