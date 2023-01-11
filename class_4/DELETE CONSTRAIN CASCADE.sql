USE demo_db;

CREATE TABLE Countries

(
    CountryID INT PRIMARY KEY,
    CountryName VARCHAR(50),
    CountryCode VARCHAR(3)
)


CREATE TABLE States

(
    StateID INT PRIMARY KEY,
    StateName VARCHAR(50),
    StateCode VARCHAR(3),
    CountryID INT
)
 
GO


CREATE TABLE Cities
(
    CityID INT,
    CityName varchar(50),
    StateID INT
)
GO

INSERT INTO Countries
VALUES
    (1, 'United States', 'USA')

INSERT INTO Countries
VALUES
    (2, 'United Kingdom', 'UK')

INSERT INTO States
VALUES
    (1, 'Texas', 'TX', 1)
INSERT INTO States
VALUES
    (2, 'Arizona', 'AZ', 1)

INSERT INTO Cities
VALUES(1, 'Texas City', 1)
INSERT INTO Cities
values
    (1, 'Phoenix', 2)
 
GO


ALTER TABLE [dbo].[States]  WITH CHECK ADD  CONSTRAINT [FK_States_Countries] FOREIGN KEY([CountryID])
REFERENCES [dbo].[Countries] ([CountryID])
ON DELETE CASCADE
GO