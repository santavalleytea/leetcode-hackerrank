class Solution(object):
    def countStudents(self, students, sandwiches):
        """
        :type students: List[int]
        :type sandwiches: List[int]
        :rtype: int
        """
        # Queue for students
        student = deque(students)

        # Stack pointer
        index = 0

        # Count how many students unable to eat
        count = 0

        # While student not empty and count is less than student (if not cycle detected)
        while student and count < len(student):
            # If value matches, pop and increment stack pointer, reset counter.
            if student[0] == sandwiches[index]:
                student.popleft()
                index += 1
                count = 0
            # Append student at front to the rear of queue, increment count
            else:
                student.append(student.popleft())
                count += 1
        
        return len(student)



        
