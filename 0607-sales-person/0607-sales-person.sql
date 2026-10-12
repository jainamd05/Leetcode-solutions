SELECT S.name FROM SalesPerson S
WHERE S.name NOT IN (SELECT S.name FROM SalesPerson S 
                    LEFT JOIN Orders O on S.sales_id = o.sales_id
                    LEFT JOIN Company C on O.com_id = C.com_id
                    WHERE C.name = 'RED') ;