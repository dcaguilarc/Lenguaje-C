# Usamos una imagen oficial de GCC para compilar el código C
FROM gcc:latest
 
# Establecer el directorio de trabajo en el contenedor
WORKDIR /app
 
# Copiar el archivo Tarea1C.c al contenedor
COPY Tarea1C.c /app
 
# Compilar el archivo C
RUN gcc -o tarea1c Tarea1C.c
 
# Comando por defecto para ejecutar la aplicación
CMD ["./tarea1c"]