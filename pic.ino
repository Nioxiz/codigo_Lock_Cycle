#include <Servo.h>

// Definindo os pinos
const int trigPin1 = 12;
const int echoPin1 = 11;
const int trigPin2 = 2;
const int echoPin2 = 3;
const int ledVermelho = 7;
const int ledVerde = 4;
const int servoPin = 8;

// Variáveis
Servo meuServo;
long duracao1, distancia1, duracao2, distancia2;
bool estadoSistema = false; // false = primeiro sensor, true = segundo sensor

void setup() {
  // Configuração dos pinos
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  
  // Inicializa o servo
  meuServo.attach(servoPin);
  meuServo.write(0); // Posição inicial
  
  // LEDs iniciais
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledVerde, LOW);
  
  Serial.begin(9600); 
}

long lerSensor(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  return pulseIn(echoPin, HIGH) * 0.034 / 2;
}

void loop() {
  
  distancia1 = lerSensor(trigPin1, echoPin1);
  distancia2 = lerSensor(trigPin2, echoPin2);
  
  
  Serial.print("Sensor 1: ");
  Serial.print(distancia1);
  Serial.print(" cm | Sensor 2: ");
  Serial.print(distancia2);
  Serial.println(" cm");
  
  
  if (!estadoSistema && distancia1 <= 10 && distancia1 > 0 && distancia2 >30) {
    
    meuServo.write(0);
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);
    estadoSistema = true;
    delay(500); 
    Serial.println("Modo 1: Servo em 0°, LED Vermelho ON");
  }
  
  if (estadoSistema && distancia2 <= 10 && distancia2 > 0 && distancia1 >30) {
    
    meuServo.write(90);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);
    estadoSistema = false;
    delay(500);
    Serial.println("Modo 2: Servo em 90°, LED Verde ON");
  }
  if(distancia1 <=10 && distancia2 <=10){
    meuServo.write(90);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);
    
    estadoSistema = false;
    delay(500); 
  }
  
  delay(100);
}