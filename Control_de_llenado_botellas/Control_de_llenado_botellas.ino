int boton1= 2 ;//asignacion de salidas
int boton2= 3;

 
void setup()
{
    pinMode(boton2, INPUT);//Referencias a pines de salidas  
    pinMode(boton1, INPUT);
    pinMode(13,OUTPUT);
    Serial.begin(9600);

}
 
void loop()
{
while (digitalRead(boton2) == HIGH) {//busca la lectura del primer switch
  
}
int estado = digitalRead(boton1); // Boton 1 para "botella llena"
    if (estado==1)
    {
        Serial.println("gaseosa llena"); // Muestra en el input serial el mensaje

while (digitalRead(boton1) == HIGH) {
 
}
        
        int estado2 = digitalRead(boton2); // valor 2
        

        
        if(estado2==1){   // proceso de tapon
        Serial.println("Gaseosa tapada");
        digitalWrite(13,HIGH);
        delay(2000);
        digitalWrite(13, LOW);
        delay(2000);
        Serial.println("Gaseosa bien empacada"); //termina proceso   
    }
    }
    }
