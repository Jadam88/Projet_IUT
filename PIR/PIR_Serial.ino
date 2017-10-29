int PIR = 2;               // Entree sur laquelle est connecte le capteur
int Etat_PIR = LOW;             // Au debut le capteur ne detecte pas de mouvement 
int Val_PIR = 0;                    // on stocke la valeur du capteur

void setup() {
  
  //------------------E/S----------------------//
  pinMode(LED_BUILTIN, OUTPUT);//On definit la led L13 comme une sortie
  pinMode(PIR, INPUT); //On definit le pir comme une entree
  //-------------------------------------------//
//Serial.begin(9600);
}

void loop() {
  Val_PIR = digitalRead(PIR);//Lecture de la valeur deu PIR 
  
   if (Val_PIR == 1 )//Si detection de mouvement 
    {
     Serial.println("INTRUS DETECTE");//On affiche un message
     digitalWrite(LED_BUILTIN, HIGH);//On allume la led L13
      Etat_PIR = HIGH ;//On definit la valeur de la variable ETAT_PIR a 1
   }
   else //Sinon
   {
    Serial.println("Pas de mouvement");
    digitalWrite(LED_BUILTIN, LOW);//La led reste eteinte
    Etat_PIR = LOW ;//La valeur de la variable Etat_PIR reste a 0
   }
  delay(2500);//temporisation de 2,5 secondes
}
