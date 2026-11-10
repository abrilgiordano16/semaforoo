## Semáforo con Arduino 🚦

## 📖 Historia de usuario
Como persona que quiere aprender electrónica y programación con Arduino, quiero armar un semáforo con LEDs que cambie de color en forma automática, para entender cómo se controlan salidas digitales y tiempos, y simular el funcionamiento de un semáforo real.

## ⚙️ Requerimientos funcionales
RF1: El sistema deberá encender el LED verde (pin 10) durante 3 segundos.
RF2: El sistema deberá encender el LED amarillo (pin 9) durante 2 segundos.
RF3: El sistema deberá encender el LED rojo (pin 8) durante 3 segundos.
RF4: El sistema deberá mantener un solo LED encendido a la vez, apagando los otros dos cada vez que cambia de color.
RF5: El sistema deberá repetir la secuencia verde, amarillo, rojo de forma continua mientras tenga alimentación.

## 🛠️ Requerimientos no funcionales
RNF1, Fiabilidad: el sistema deberá funcionar de forma continua, sin intervención del usuario y sin trabarse.
RNF2, Precisión de tiempos: los intervalos de 3 s, 2 s y 3 s deberán respetarse en cada ciclo, usando delay().
RNF3, Bajo costo y disponibilidad: el sistema deberá construirse con componentes simples y económicos: Arduino UNO, 3 LEDs, resistencias, protoboard y cables.
RNF4, Mantenibilidad y legibilidad: el código deberá usar nombres claros para las variables (rojo, amarillo, verde) y comentarios que expliquen cada etapa.
RNF5, Portabilidad: el mismo código deberá funcionar tanto en el simulador Wokwi como en el circuito real, alimentado por USB (5 V).

## 💰 Componentes

| Cantidad | Componente | Costo |
|---|---|---|
| 1 | Arduino | $10.400 |
| 2 | Protoboard| $3.195 |
| 3 | Resistencias (una por LED) | $3.000 |
| 5 | Cables | $3.000 |
| 3 | LEDs (rojo, amarillo y verde) | 1932|
| | **Total** | **$21.527** |
