-- Write your query below
SELECT DISTINCT ON(student_id) student_id,exam_id,score
FROM exam_results
ORDER BY student_id, score DESC, exam_id --Basically student_id and exam_id are arranged in ascending order so that we get lower values, and score is arranged descending order, so that we get max values of the lowest values of student_id and exam_id
