#Importamos la clase Person del archivo person para usar herencia
from person import Person

#Creamos la clase heredando de Person
class Student(Person):
    #Modificamos el init para que primero invoque al init base y después crear los atributos extra
    def __init__(self, name, age, student_id):
        super().__init__(name, age)
        self.student_id = student_id
        self.courses = []

    #Método para agregar cursos al estudiante
    def enroll_courses(self, course):
        self.courses.append(course)

    #Ahora el display imprime los nuevos datos
    def display_info(self):
        super().display_info()
        print(f"Student ID: {self.student_id}\
              \nCourses: {', '.join(self.courses)}\n") #Join mejora la visualizacion
    

        
    