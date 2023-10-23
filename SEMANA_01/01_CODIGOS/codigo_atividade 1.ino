// C++ code
//
void setup()
{
  pinMode(2, OUTPUT); // saida no pino 2
}

void loop()
{
  digitalWrite(2, HIGH); // saida que indica que o LED deve ser ligado
  delay(500); // esperar por 500 milisegundo(s)
  digitalWrite(2, LOW); // saida que indica que o LED deve ser desligado
  delay(500); // esperar por 500 milisegundo(s)
}