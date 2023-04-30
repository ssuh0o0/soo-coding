SELECT i.animal_id, i.animal_type, i.name
from animal_ins i join animal_outs o on i.animal_id = o.animal_id
where i.SEX_UPON_INTAKE LIKE "%Intact%" and (o.SEX_UPON_OUTCOME LIKE "%Spayed%"||o.SEX_UPON_OUTCOME LIKE "%Neutered%")
order by i.animal_id