-- Write your query below
SELECT expressions.left_operand,expressions.operator,expressions.right_operand,
CASE 
WHEN expressions.operator = '>' AND lv.value > rv.value THEN 'true'
WHEN expressions.operator = '<' AND lv.value < rv.value THEN 'true'
WHEN expressions.operator = '=' AND lv.value = rv.value THEN 'true'
ELSE 'false'
END AS value
FROM expressions
JOIN variables lv ON expressions.left_operand = lv.name
JOIN variables rv ON expressions.right_operand = rv.name