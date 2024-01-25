#Importamos la clase Person del archivo person para usar herencia
from person import Person

#Creamos la clase heredando de Person
class Teacher(Person):
     #Modificamos el init para que primero invoque al init base y después crear los atributos extra
    def __init__(self, name, age, empleyee_id):
        super().__init__(name, age)
        self.empleyee_id = empleyee_id
        self.courses_taught = []

    #Método para agregar cursos que da el profesor
    def assign_course(self, course):
        self.courses_taught.append(course)
    
    #Ahora el display imprime los nuevos datos
    def display_info(self):
        super().display_info()
        print(f"Employee ID: {self.empleyee_id}\
              \nCourses taught: {', '.join(self.courses_taught)}\n")#Join mejora la visualizacion
    
