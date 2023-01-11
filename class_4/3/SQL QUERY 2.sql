USE demo_db;
GO
SELECT emp_id,
    emp_name,
    salary,
    format(hire_date,'MMMM dd,yyyy')
FROM employees;
GO
SELECT *
FROM employees
WHERE hire_date<('1991');
GO
--- Display record that match condition (record[emp_name] equals 'BLAZE')
SELECT *
FROM employees
WHERE emp_name = 'BLAZE';