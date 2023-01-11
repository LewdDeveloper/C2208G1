USE demo_db;
GO
IF OBJECT_ID('order', 'U') IS NOT NULL
DROP TABLE [order]
GO
CREATE TABLE [order]
(
    id INT NOT NULL PRIMARY KEY,
    transcation_id INT NOT NULL,
    product_id INT,
    quantity INT NOT NULL,
    amount INT NOT NULL,
    created_date VARCHAR(10) NOT NULL,
    updated_date VARCHAR(10) NOT NULL,
    [status] INT NOT NULL,
    FOREIGN KEY (product_id) REFERENCES product(id)
);
GO
INSERT INTO [order]
    (id, transcation_id, product_id, quantity, amount, created_date, updated_date, [status])
VALUES
    (1, 446, 1, 9, 437, '2003-11-01', '2021-05-04', 1),
    (2, 507, 2, 8, 960, '2020-07-06', '2021-10-22', 3),
    (3, 948, 3, 4, 220, '2015-03-10', '2021-12-25', 3),
    (4, 619, 4, 7, 684, '2012-02-26', '2022-06-16', 2),
    (5, 290, 5, 2, 951, '2020-12-31', '2020-12-08', 1),
    (6, 443, 6, 3, 648, '2019-11-06', '2020-03-04', 3),
    (7, 35, 7, 3, 583, '2006-05-25', '2021-09-12', 2),
    (8, 441, 8, 4, 797, '2022-12-28', '2022-12-28', 2),
    (9, 73, 9, 6, 178, '2022-03-02', '2020-06-30', 1),
    (10, 609, 10, 6, 499, '2014-03-09', '2021-02-01', 2);