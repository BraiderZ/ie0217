#Los set tienen la diferencia de que eliminan los datos repetidos y en orden aleatorio
#También puede tener valores de diferente tipo
#Para iniciar un set
companies = set()
companies = {'Lacoste','Ralph Lauren'}

#Para añadir un valor usamos add y para eliminar usamos discard
print(companies)
companies.add('Java')
print(companies)
companies.discard('Java')
print(companies)

#Podemos añadir valores y verificar si se repiten algunos nuevos con update
tech_companies = {'apple','google','apple'}
companies.update(tech_companies)
print(companies)


#También puede usar for y len con un set
for companies in companies:
    print(companies)


