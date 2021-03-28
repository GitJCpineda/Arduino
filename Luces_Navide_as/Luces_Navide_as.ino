int switch1 =2;//Pulsador
int switch2 =3;
int led =13;//Pin de salida

int X=0; //para conteo
bool stateOne; //boleano para estados
bool stateTwo;

void setup() {

  pinMode(switch1, INPUT);//declaramos pin de entrada
  pinMode(switch2, INPUT);
  pinMode(led, OUTPUT);// declaramos led salida

  Serial.begin(9600); //consola
}

void loop() {

  stateOne= digitalRead(switch1); //bucle

  if(stateOne ==0){
    X +=20;
    Serial.print("X = ");
    Serial.println(X);
    }

    stateTwo=digitalRead(switch2);// bucle2
    if(stateTwo == 0){
    digitalWrite(led, HIGH);//enciende led
    digitalWrite(led, LOW);//apaga
    delay(X);
    }

    if(stateOne == 0 && stateTwo == 0){//pulsadores estado abiertos

      X=0;
      Serial.print("X = ");
      Serial.println(X);

      
      }

}
