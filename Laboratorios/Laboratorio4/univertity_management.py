#Importamos las 3 clases necesarias
from student import Student
from teacher import Teacher
from course import Course

#Creamos objetos para estudian
student1 = Student("Esteban", 43, "B30754")
student2 = Student("Maria", 28, "B35149")

teacher1 = Teacher("Jorge Romero", 65, "123456",)
teacher2 = Teacher("Luis Diego Marin", 61, "55555")

course1 = Course("IE0217", "DSA")
course2 = Course("IE0323", "CD1")

#Incluimos cursos al estudiante 1
student1.enroll_courses(course1.course_code)
student1.enroll_courses(course2.course_code)

#Incluimos profesores a cada curso
teacher1.assign_course(course1.course_code)
teacher2.assign_course(course2.course_code)

#Realizamos display a un curso, un estudiante y un teacher
student1.display_info()

teacher1.display_info()

course1.display_info()