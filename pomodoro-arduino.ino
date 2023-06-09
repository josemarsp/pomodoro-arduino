#define buz 2
#define b1 3
#define b2 4
#define b3 7
#define b4 8
#define m5 300
#define m10 600
#define m15 900
#define m25 1500
#define lonMax 4294967294
unsigned long tempoInicial = 0;
unsigned long tempoEscolhido = 0;
boolean ledStatus;

extern void tocaRaul();
extern void ledBoolean();
extern void ledLoop();

void setup() {
  ledLoop(true);
  delay(1000);
  ledStatus = false;

  //start serial connection
  // Serial.begin(9600);

  //configure pin2 as an input and enable the internal pull-up resistor
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  pinMode(b3, INPUT);
  pinMode(b4, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {

  ledLoop(ledStatus);
  Serial.println(ledStatus);

  int botao5 = digitalRead(b1);
  int botao10 = digitalRead(b2);
  int botao15 = digitalRead(b3);
  int botao25 = digitalRead(b4);

  unsigned long tempoAtual = millis() / 1000;

  if (botao5 == HIGH) {
    startPomodoro(m5);
  }

  if (botao10 == HIGH) {
    startPomodoro(m10);
  }

  if (botao15 == HIGH) {
    startPomodoro(m15);
  }

  if (botao25 == HIGH) {
    startPomodoro(m25);
  }


  //finalizando o timer
  if (tempoEscolhido > 0) {
    ledStatus = false;
    int diferenca = tempoAtual - tempoInicial;
    if (diferenca >= tempoEscolhido) {
      tocaRaul();
    }
  }
}

void startPomodoro(int value) {
  tempoEscolhido = value;
  tempoInicial = millis() / 1000;
  ledBoolean(true);
  delay(300);
  ledBoolean(false);
}
