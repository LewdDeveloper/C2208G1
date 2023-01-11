USE demo_db;
GO
IF OBJECT_ID('reservedNicknames', 'U') IS NOT NULL
DROP TABLE reservedNicknames
GO
-- Create the table in the specified schema
CREATE TABLE reservedNicknames
(
    id VARCHAR(10) NOT NULL,
    nickname VARCHAR(50) NOT NULL,
);
GO

UPDATE reservedNicknames
SET nickname = 'rename - ' + nickname, id = 'rename - ' + id
WHERE LEN(nickname) <>8;