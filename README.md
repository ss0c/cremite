<h1 align = "center">Project-CREMITE</h1>
<p><b>Cremite es un dron terrestre comandado mediante bluetooth. Este será destinado a la exploración en lugares en donde el terreno
cuenta con características que dificultan
la investigación humana.</b> El dron contará con diversas
herramientas, que tendrán el fin común a facilitar la
observación, inspección y reconicimiento del área, entre
ellas se encuentran:</p>
<ul>
<li><b>Dos ruedas de tracción y una rueda auxiliar:</b></li>
Las ruedas posibilitarán el desplazamiento sobre terrenos
en los que se puedan presentar caminos desafiantes, por
ej: rocas, barro, arena, etc.


<li><b>Luz frontal: </b></li>
La iluminación en zonas oscuras es imprescindible en nuestro dron.

<li><b>Módulo ultrasonido HC-SR04:</b></li>
Una de las destacadas funciones de Cremite es la detección de objetos próximos mediante ultrasonido, lo que buscará minimizar la
posibilidad de choques contra paredes, rocas, y demás obstáculos.

<li><b>Sensor de temperatura y humedad DHT11:</b></li>
A través de este sensor, podremos evaluar las condiciones del clima, y no enviar a nuestro dron por zonas no soportadas, si los valores de temperatura y humedad superan 
el límite, se enviará una advertencia.

<li><b>Bocina:</b></li> 
Nuestro dron dispondrá de avisos acústicos para evitar accidentes.
</ul>
<h3>HARDWARE</h3>
<p><b>Puente H</b>: 
Es el circuito que usaremos para invertir el giro de nuestros motores, es decir, un puente por motor. Este
circuito está compuesto por:</p>
<ul>
  <li>4 Transistores BJT TIP 42C (PNP)</li>
  <li>4 Transistores BJT TIP 41C (NPN)</li>
  <li>8 Diodos rectificadores 1N4007</li>
  <li>4 Resistencias 200Ω</li>
</ul>
<p>También utilizaremos una compuerta lógica <b>HD74HC08P</b> (AND) la cual nos servirá para convertir la señal de 3,3 V de la placa
Raspberry Pi Pico a 5 V, que es la tensión ideal para el puente H. La lógica de nuestra compuerta consiste en que el 0 lógico
ocurre cuando la tensión de la señal es menor a 2.4 V y el 1 Lógico ocurre cuando la tensión de la señal es mayor a 2,4 V.
Pero el 0 lógico de la salida es 0 V y el 1 lógico es 5 V, entonces cuando la Raspberry envía 3,3 V a las entradas de la 
compuerta en la salida de esta hay una tensión de 5 V.</p>


Raspberry Pi Pico: 
Es un microcontrolador que puede ser programado en C y en el framework de Arduino. Nos interesó por que es económico, de 
la calidad necesaria y tambien nos intereso por sus caractersticas por sus caracteristicas, que favorecen a Cremite.

------






