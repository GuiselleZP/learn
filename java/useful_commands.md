# Comandos usados desde consola

1. Es necesario haber creado un archivo `.java`, luego este debe pre-compilarse
usando el siguiente comando en consola:
```
javac nameClass.java
```
1. El anterior comando produce un archivo `.class` que puede ser ejecutado, 
usando el siguiente comando en consola:
```
java nameClass.class
```
1. Si se desea crear un proyecto con múltiples paquetes, se debe crear una
carpeta con el nombre del paquete deseado, y dentro de esta las clases 
pertenecientes a la misma.

	* Para compiar el proyecto, se usa este comando sobre cada paquete creado:
	```
	javac -cp . namePackage/*.java
	```
	* Para ejecutar el código se usa el siguiente comando sobre el paquete que
	contenga la clase con el  método **main**, que en este ejemplo será la
	clase _MyClass_:
	```
	java -cp . namePackage.MyClass
	```
