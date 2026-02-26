// C++ code

const int led = 13;

void setup()
{
  pinMode(led, OUTPUT);//FUNÇÃO DE SAÍDA DE PINO 13
}

void loop()
{
  digitalWrite(led, HIGH);//Acende o led
  delay(1000);//Por 1 segundos
  digitalWrite(led, LOW);//Apaga o led
  delay(1000);//Por 1 segundos
 }