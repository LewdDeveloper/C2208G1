USE demo_db;
GO
-- Create a new table called 'salary_grade'
-- Drop the table if it already exists
IF OBJECT_ID('salary_grade', 'U') IS NOT NULL
DROP TABLE salary_grade
GO
-- Create the table in the specified schema
CREATE TABLE salary_grade
(
    grade INTEGER NOT NULL PRIMARY KEY,
    min_salary INTEGER,
    max_salary INTEGER
);
GO
-- Create a new table called 'department'
-- Drop the table if it already exists
IF OBJECT_ID('department', 'U') IS NOT NULL
DROP TABLE department
GO
-- Create the table in the specified schema
CREATE TABLE department
(
    dep_id INTEGER NOT NULL PRIMARY KEY,
    dep_name VARCHAR(20) NOT NULL,
    dep_location VARCHAR(15) NOT NULL,
);
INSERT INTO department
    (dep_id, dep_name, dep_location )
VALUES
    (1001, 'Administration', '44 Quincy Place'),
    (2001, 'Marketing', '21 Prairie Rose'),
    (3001, 'Purchasing', '26 Old Shore La'),
    (4001, 'Human Resources', 'Ronald Regan W'),
    (5001, 'Shipping', '45 Graedel Trai'),
    (6001, 'IT', 'Ridgeway Circl'),
    (7001, 'Public Relations', 'Heath Alley'),
    (8001, 'Sales', '400 Sage Street'),
    (9001, 'Executive', '581 Center Stre'),
    (10001, 'Finance', 'Bultman Point'),
    (11001, 'Accounting', '9 Golf Road'),
    (12001, 'Treasury', '6345 South Plac');
GO
-- Create a new table called 'employees'
-- Drop the table if it already exists
IF OBJECT_ID('employees', 'U') IS NOT NULL
DROP TABLE employees
GO
-- Create the table in the specified schema
CREATE TABLE employees
(
    emp_id INTEGER NOT NULL PRIMARY KEY,
    emp_name VARCHAR(15),
    job_name VARCHAR(10),
    manager_id INTEGER ,
    hire_date DATE ,
    salary NUMERIC(9,2),
    commission NUMERIC(12,2),
    dep_id INTEGER
        FOREIGN KEY (dep_id) REFERENCES department(dep_id)
);
GO
INSERT INTO employees
    (emp_id,emp_name,job_name,manager_id,hire_date,salary,commission,dep_id)
VALUES
    (68319, 'KAYLING', 'PRESIDENT', NULL, '1991-11-18', 6000.00, NULL, 1001),
    (66928, 'BLAZE', 'MANAGER', 68319, '1991-05-01', 2750.00, NULL, 3001),
    (67832, 'CLARE', 'MANAGER', 68319, '1991-06-09', 2550.00, NULL, 1001),
    (65646, 'JONAS', 'MANAGER', 68319, '1991-04-02', 2957.00, NULL, 2001),
    (67858, 'SCARLET', 'ANALYST', 65646, '1997-04-19', 3100.00, NULL, 2001),
    (69062, 'FRANK', 'ANALYST', 65646, '1991-12-03', 3100.00, NULL, 2001),
    (63679, 'SANDRINE', 'CLERK', 69062, '1990-12-18', 900.00, NULL, 2001),
    (64989, 'ADELYN', 'SALESMAN', 66928, '1991-02-20', 1700.00, 400.00, 3001),
    (65271, 'WADE', 'SALESMAN', 66928, '1991-02-22', 1350.00, 600.00, 3001),
    (66564, 'MADDEN', 'SALESMAN', 66928, '1991-09-28', 1350.00, 1500.00, 3001),
    (68454, 'TUCKER', 'SALESMAN', 66928, '1991-09-08', 1600.00, 0.00, 3001),
    (68736, 'ADNRES', 'CLERK', 67858, '1997-05-23', 1200.00, NULL, 2001),
    (69000, 'JULIUS', 'CLERK', 66928, '1991-12-03', 1050.00, NULL, 3001),
    (69324, 'MARKER', 'CLERK', 67832, '1992-01-23', 1400.00, NULL, 1001);

