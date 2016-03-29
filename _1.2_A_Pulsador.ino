int boton1 = 11;  //Inicializa boto1 en el PIN3
int led1 = 8;  //Inicializa led 1 en pin 8
int led2 = 9;  //Inicializa led 1 en pin 8

int estado_boton1; //Variable que contiene estado del boton
                   //Presionado - NOPresionado

void setup() {
  pinMode(boton1, INPUT); //inicializa el pin como entrada
  pinMode(led1, OUTPUT);  //inicializa el pin como salida

}

void loop() {

 estado_boton1 = digitalRead(boton1); //Lee el estado de boton1
 
if (estado_boton1 == HIGH) {

  digitalWrite(led1, HIGH);  
  digitalWrite(led1, HIGH);  
  delay(300); 
  digitalWrite(led1, LOW);  
  delay(1. 00);

}
}
