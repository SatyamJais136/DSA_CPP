# Write your MySQL query statement below here
select name
from customer
where referee_id != 2 or
referee_id is null