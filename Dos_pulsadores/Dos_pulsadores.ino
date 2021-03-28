 int boton2=2;//Declaramos y asignamos pin
 int boton3=3;

void setup() {
  
  pinMode(boton3,INPUT);//asignamos como entradas
  pinMode(boton2, INPUT);
  Serial.begin(9600);//salida visual

}

void loop() {

  pinMode(13, OUTPUT);//Asignacion de pin

  int estado1 = digitalRead(boton2);//Declaracion estados
  int estado2 = digitalRead(boton3);

  if(estado1 == 1 && estado2 == 1){//validacion

    Serial.println("Inicio");//imprimimos verificacion
    delay(100);
    digitalWrite(13,HIGH);//encendemos led
    }
    else{
      Serial.println("Verificar");
      digitalWrite(13,LOW);
      }
  

}
