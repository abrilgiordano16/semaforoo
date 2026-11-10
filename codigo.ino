entero rojo = 8;
entero amarillo = 9;
entero verde = 10;

void setup () {
  // Los pinos son SALIDAS porque el Arduino controla los LEDs
  pinMode (rojo, SALIDA);
  pinMode (amarillo, SALIDA);
  pinMode (verde, SALIDA);
}

void loop () {
  // --- VERDE encendido (3 segundos) ---
  digitalWrite (verde, HIGH);
  escritura digital (amarillo, BAJO);
  digitalWrite (rojo, BAJO);
  retraso (3000);

  // --- AMARILLO encendido (2 segundos) ---
  digitalWrite (verde, BAJO);
  digitalWrite (amarillo, ALTO);
  digitalWrite (rojo, BAJO);
  retraso (2000);

  // --- ROJO encendido (3 segundos) ---
  digitalWrite (rojo, HIGH);
  escritura digital (amarillo, BAJO);
  retraso (3000);
}