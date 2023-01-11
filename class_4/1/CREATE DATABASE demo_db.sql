CREATE DATABASE demo_db;
GO
USE demo_db;
CREATE TABLE employee
(
    id INTEGER,
    name VARCHAR(255),
    dob CHAR(10),
    address VARCHAR(255),
    sex VARCHAR(10),
    role VARCHAR(255),
    salary NUMERIC(10,2),
    work_experience VARCHAR(255),
    status SMALLINT
);