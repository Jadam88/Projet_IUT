# Projet_IUT

### 1. ALARME CONNECTÉE
Proposé par : Pierre-André GUENEGO
Description du projet
Basé sur un Arduino équipé d’un capteur de mouvement et d’une interface Ethernet,
l’alarme doit envoyer un SMS ou un mail en cas de détection de mouvement. Elle peut être
activée ou désactivée via une interface web. Elle peut être configurée à distance
(modification du mail, téléphone, plage horaires) et met à disposition des statistiques de
détection sous forme de graphique (quantité de passage en fonction du temps...). Pour
gérer le poids de l’interface web plusieurs technique seront explorées : usage de librairie
hébergé sur le web (jquery-mobile,...), extension de la mémoire par carte SD, hébergement
du serveur hors de l’Arduino mais communiquant avec (Raspberry Pi, WampServer, serveur
en ligne gratuit,...). L’usage de NodeJS et des websockets pourra apporter une
communication bidirectionnelle synchrone. Une attention particulière sera apportée à la
sécurité de fonctionnement. Des notions de base en électronique et en manipulation seront
nécessaires.
Nombreux prolongements possibles : piloter d'autres actionneurs (lampe, volet...), ajouter
une caméra pour voir l'intrus, piloter un robot mobile, wifi.
Objectifs à atteindre
Réaliser le programme Arduino, mettre en œuvre.
Réalisation éventuelle de l’interface de gestion sur un serveur LAMP ou autre
Outils à utiliser
* Editeur de code,
* IDE Arduino
* Arduino Leonardo
* module Ethernet ENC28J60
* mini détecteur de mouvement
* éventuellement serveur LAMP ou autre
* Raspberry Pi + PiFace si version Raspberry
