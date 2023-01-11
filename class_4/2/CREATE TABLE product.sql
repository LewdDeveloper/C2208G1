USE demo_db;
GO
IF OBJECT_ID('product', 'U') IS NOT NULL
DROP TABLE product
GO
CREATE TABLE product
(
    id INT NOT NULL PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    price NUMERIC(10, 2) NOT NULL,
    content VARCHAR(100) NOT NULL,
    discount VARCHAR(6) NOT NULL,
    image_link VARCHAR(200) NOT NULL,
    created_date VARCHAR(10) NOT NULL,
    updated_date VARCHAR(10) NOT NULL,
);
GO
INSERT INTO product
    (id, [name], price, content, discount, image_link, created_date, updated_date)
VALUES
    (1, 'Mendy: A Question of Faith', 95.66, 'Drama', '23,31%', 'http://dummyimage.com/234x100.png/cc0000/ffffff', '10/6/2008', '5/21/2020'),
    (2, 'Blue Steel', 105.83, 'Western', '77,98%', 'http://dummyimage.com/147x100.png/5fa2dd/ffffff', '1/23/2010', '2/16/2021'),
    (3, 'Tap', 112.69, 'Drama', '8,01%', 'http://dummyimage.com/130x100.png/dddddd/000000', '2/24/2017', '10/27/2020'),
    (4, 'Story of Esther Costello, The', 61.8, 'Drama', '75,02%', 'http://dummyimage.com/246x100.png/dddddd/000000', '6/27/2013', '9/3/2021'),
    (5, 'Four Feathers, The', 112.67, 'Adventure|War', '3,95%', 'http://dummyimage.com/230x100.png/5fa2dd/ffffff', '11/21/2014', '10/9/2020'),
    (6, 'Fara', 128.35, 'Drama', '8,75%', 'http://dummyimage.com/151x100.png/cc0000/ffffff', '6/13/2001', '10/6/2020'),
    (7, 'White Sun of the Desert, The (Beloe solntse pustyni)', 122.59, 'Action|Adventure|Comedy|Drama|Romance|War', '3,88%', 'http://dummyimage.com/222x100.png/ff4444/ffffff', '3/21/2003', '4/13/2020'),
    (8, 'King Corn', 132.67, 'Documentary', '65,58%', 'http://dummyimage.com/144x100.png/5fa2dd/ffffff', '5/27/2018', '7/9/2021'),
    (9, 'Horse Soldiers, The', 60.96, 'Adventure|War|Western', '28,71%', 'http://dummyimage.com/160x100.png/ff4444/ffffff', '10/4/2005', '8/25/2021'),
    (10, 'Chump at Oxford, A', 55.31, 'Comedy', '1,96%', 'http://dummyimage.com/211x100.png/5fa2dd/ffffff', '5/3/2012', '5/11/2022');