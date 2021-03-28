int boton =2;

void setup(){

   pinMode(boton,INPUT);
   Serial.begin(9600);  
  
  }

  void loop(){

    int estado = digitalRead(boton);
    if(estado == 1){

      Serial.println("Pulsado");
      }
      else{

        Serial.println("No pulsado");
        }

        delay(100);


    
    }
