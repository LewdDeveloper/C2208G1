USE demo_db;

-- CREATE TABLE professors
-- (
--     id INTEGER PRIMARY KEY,
--     firstname VARCHAR(64) NOT NULL,
--     lastname VARCHAR(64) NOT NULL,
--     university_shortname CHAR(3) NOT NULL
-- );
-- GO
-- SELECT *
-- FROM professors;
-- DROP TABLE professors;

-- CREATE TABLE professors
-- (
--     id INTEGER NOT NULL,
--     email VARCHAR(50) NOT NULL,
--     firstname VARCHAR(64) NOT NULL,
--     lastname VARCHAR(64) NOT NULL,
--     university_shortname CHAR(3) NOT NULL
-- );
-- ALTER TABLE professors ADD CONSTRAINT professors_pk PRIMARY KEY (id);

-- GO
-- SELECT *
-- FROM professors;
-- DROP TABLE professors;

-- CREATE TABLE professors
-- (
--     id INTEGER,
--     email VARCHAR(50),
--     firstname VARCHAR(64) NOT NULL,
--     lastname VARCHAR(64) NOT NULL,
--     university_shortname CHAR(3) NOT NULL
--     PRIMARY KEY(id, email)
-- );
-- GO
-- SELECT *
-- FROM professors;
-- DROP TABLE professors;