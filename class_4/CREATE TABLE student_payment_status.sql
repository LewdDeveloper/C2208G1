CREATE TABLE student_payment_status
(
    id INTEGER,
    fullname VARCHAR(10),
    email VARCHAR(50),
    class VARCHAR(10),
    paid SMALLINT,
)

INSERT INTO student_payment_status
    (id, fullname, email, dod, address, class, avg, paid)
VALUES
    (1, 'John', 'john@who', 'A', 1),
    (2, 'Doe', 'doe@who', 'B', 0)
