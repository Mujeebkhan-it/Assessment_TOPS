-- Write SQL query to solve the problem given below
create table product
(
PRO_ID INT NOT NULL,
PRO_NAME VARCHAR(45) NOT NULL,
PRO_PRICE float NOT NULL,
PRO_COMM INT NOT NULL
);

INSERT INTO PRODUCT VALUES(101,'Mother Board',3200.00,15);
INSERT INTO PRODUCT VALUES(102,'Key Board',450.00,16);
INSERT INTO PRODUCT VALUES(103,'ZIP drive',250.00,14);
INSERT INTO PRODUCT VALUES(104,'Speaker',550.00,16);
INSERT INTO PRODUCT VALUES(105,'Monitor',5000.00,11);
INSERT INTO PRODUCT VALUES(106,'DVD drive',900.00,12);
INSERT INTO PRODUCT VALUES(107,'CD drive',800.00,12);
INSERT INTO PRODUCT VALUES(108,'Printer',2600.00,13);
INSERT INTO PRODUCT VALUES(109,'Refill cartridge',350.00,13);
INSERT INTO PRODUCT VALUES(110,'Mouse',250.00,12); 

select * from product;




-- Write sql query to find the items whose prices are higher than or equal 250rs.
-- Order the result by product price in descending, then product name in
-- ascending. Return pro_name and pro_price
SELECT PRO_NAME, PRO_PRICE FROM PRODUCT WHERE PRO_PRICE >= 250
ORDER BY PRO_PRICE DESC, PRO_NAME ASC;






-- Write a sql query to find the cheapest item. Return pro_name and pro_price
SELECT PRO_NAME, PRO_PRICE FROM PRODUCT
ORDER BY PRO_PRICE ASC
LIMIT 1;





-- Write the sql query to calculate the average price of the items for each
-- company. Return average price and company code.
ALTER TABLE PRODUCT
ADD COMPANY_CODE INT NOT NULL;

UPDATE PRODUCT SET COMPANY_CODE = 1 WHERE PRO_ID IN (101, 105, 108);
UPDATE PRODUCT SET COMPANY_CODE = 2 WHERE PRO_ID IN (102, 104, 109);
UPDATE PRODUCT SET COMPANY_CODE = 3 WHERE PRO_ID IN (103, 106, 107, 110);

SELECT COMPANY_CODE, AVG(PRO_PRICE) AS AVG_PRICE
FROM PRODUCT
GROUP BY COMPANY_CODE;


-- Write the sql query to find the average total for all the product mention in the table
SELECT AVG(PRO_PRICE) AS AVG_PRICE FROM PRODUCT;
 