CREATE TABLE student
(
    id INTEGER,
    fullname VARCHAR(10),
    email VARCHAR(50),
    dod VARCHAR(10),
    address VARCHAR(10),
    class VARCHAR(10),
    avg FLOAT
)

INSERT INTO student
    (id, fullname, email, dod, address, class, avg)
VALUES
    (1, 'John', 'john@who', '1990-01-01', 'Hanoi', 'A', 8.5),
    (2, 'Doe', 'doe@who', '1990-01-01', 'Haiphong', 'B', 7.9)