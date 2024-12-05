# Arduino
Apuntes:

* En el “setup” declaramos las salidas o entradas. (Variables globales)
> Las variables globales se declaran fuera de cualquier función, normalmente al principio del código. (A veces se pueden considerar a las variables declaradas dentro del setup como variables globales)

* El ánodo (terminal largo) del LED va hacia el número, y el cátodo (terminal corto) hacia la resistencia.


# Comandos útiles para Github

## 1. Preparación inicial
* Tener una cuenta en GitHub y descargar Git.
* Configura el usuario en Git/CMD (solo una vez):
```
git config --global user.name "TuNombreDeUsuario"
git config --global user.email "TuEmail"
```

## 2. Crear un repositorio
<strong>Método 1:</strong> Crear el repositorio en GitHub y conectarlo con tu proyecto local
1. Crea el repositorio en GitHub (público o privado).
2. Inicializa Git en tu proyecto local:
   ```
   git init
   ```
3. Conecta tu repositorio local con el de GitHub:
   ```
   git remote add origin https://github.com/TuUsuario/TuRepositorio.git
   ```
 > (Opcional) Verifica la rama actual: ```git branch```,si necesitas cambiar a main: ```git checkout main```
4. Cargar archivos del repositorio de Github a la maquina local:
   ```
   git pull origin main
   ```
   (Después puedes simplemente usar ```git pull```)

<strong>Método 2:</strong> Clonar un repositorio ya creado, esto generará una carpeta con el nombre del repositorio clonado, dentro de él estará todo el contenido:
   ```
   git clone https://github.com/TuUsuario/TuRepositorio.git
   ```

<strong>Método 3:</strong> Crear un repositorio directamente desde la terminal:
1. Crea un archivo README.md:
   ```
   echo "# MiProyecto" >> README.md
   ```
2. Inicializa Git/CMD, agrega archivos y súbelos:
   ```
   git init
   git add README.md
   git commit -m "Primer commit"
   git branch -M main
   git remote add origin https://github.com/TuUsuario/TuRepositorio.git
   git push -u origin main
   ```

## Actualizar y subir cambios
1. Si otros colaboradores han subido cambios al repositorio remoto es necesario cargar los cambios:
   ```
   git pull
   ```
2. Agrega los archivos al seguimiento de Git:
   ```
   git add .
   ```
   (Usa ```git add archivo.txt``` si quieres agregar un archivo específico.)
4. Crea un commit con un mensaje descriptivo:
   ```
   git commit -m "Descripción de los cambios"
   ```
5. Sube los cambios a GitHub:
   ```
   git push -u origin main
   ```
   (Después puedes simplemente usar ```git push```)

## Borrar archivos del repositorio
1. Eliminar un archivo del repositorio (y del sistema local):
   ```
   git rm archivo.txt
   ```
   Para eliminarlo solo del repositorio (mantenerlo localmente): ```git rm --cached archivo.txt```
2. Confirma y sube los cambios:
   ```
   git commit -m "Eliminado archivo.txt"
   git push
   ```
   
