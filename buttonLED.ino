// C++ code
void setup()
{
  pinMode(3, OUTPUT);  // LED sinistro
  pinMode(4, OUTPUT);  // LED centrale
  pinMode(5, OUTPUT);  // LED destro
  pinMode(2, INPUT);   // Pulsante
}

void loop()
{
  int switchState = digitalRead(2);

  if (switchState == LOW) {
    // Se il pulsante non è premuto → solo LED sul pin 3 acceso
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  } 
  else {
    // Sequenza 3 → 4 → 5 e l’ultimo resta acceso
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(3, LOW);

    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(4, LOW);

    digitalWrite(5, HIGH);  // Accende l’ultimo LED
    // NON lo spengo, così resta acceso
  }
}
