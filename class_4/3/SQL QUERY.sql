USE demo_db;
GO
--- Display salary from employees
SELECT salary
FROM employees;
GO
--- Display jobs without duplicate from employees
SELECT DISTINCT job_name
FROM employees;