#include <Bridge.h>//On inclut la librarie Bridge pour communiquer entre Linino et atmega32u4
#include <Console.h>//On inclut la librairie Console pour communiquer par la couche reseau 
#include <Process.h>//On inclut la librairie Process pour executer des commandes du cote linux de la carte

int PIR = 2;               // Entree sur laquelle est connecte le capteur
int Etat_PIR = LOW;             // Au debut le capteur ne detecte pas de mouvement 
int Val_PIR = 0;                    // on stocke la valeur du capteur

Process p;//creer l'objet p de la classe Process 

void setup() {
  
  //------------------E/S----------------------//
  pinMode(LED_BUILTIN, OUTPUT);//On definit la led L13 comme une sortie
  pinMode(PIR, INPUT); //On definit le pir comme une entree
  //-------------------------------------------//
  Bridge.begin();
  Console.begin();
  Console.println("Debut");
}

void loop() {
  Val_PIR = digitalRead(PIR);//Lecture de la valeur deu PIR 
  
   if (Val_PIR == 1 )//Si detection de mouvement 
    {
     Console.println("INTRUS DETECTE");//On affiche un message
     digitalWrite(LED_BUILTIN, HIGH);//On allume la led L13
      Etat_PIR = HIGH ;//On definit la valeur de la variable ETAT_PIR a 1
   }
   else //Sinon
   {
    Console.println("Pas de mouvement");
    digitalWrite(LED_BUILTIN, LOW);//La led reste eteinte
    Etat_PIR = LOW ;//La valeur de la variable Etat_PIR reste a 0
   }
  delay(2500);//temporisation de 2,5 secondes
}
