#include <iostream>
#include "servivo.h"
#include "cocodrilo.h"
#include "pezmanosrojas.h"
#include "ornitorrinco.h"
#include "avisponasiaticogigante.h"
#include "ibisgigante.h"
#include "ranadedarwin.h"

using namespace std;

void ImprimirDatosSerVivo(SerVivo &obj)  //Referencia a objeto del tipo de la clase Interfaz
{
    obj.Respiro();
    obj.MeAlimento();
    obj.Habito();
    obj.MeReproduzco();
    obj.MeDesplazo();
}


int main()
{
    Cocodrilo obj("Reptil","Fria",4,"escamas","No","pulmonar","carnivoro carronero","agua dulce como rios, lagos, humedales y algunas veces en agua salobre","Oviparos","pueden desplazarse tanto por el agua como por la tierra","no tienen depredadores que los ataquen, no tienen una preferencia por presas especificas sino que pueden atacar a cualquier animal que encuentren. El sexo de los cocodrilos no es determinado por sus cromosomas sino por la temperatura durante la incubacion");
    PezManosRojas obj2("Pez","Fria",4,"escamas","No","Branquias","Crustaceos y gusanos","Agua salada, isla de Tasmania, en el sur de Australia","oviparos","se desplaza por el lecho marino","No nada, sino que camina por el fondo marino y encima de su cabeza tiene una aleta en forma de cresta");
    Ornitorrinco obj3("Mamifero","Caliente",4,"Pelaje","Si","Pulmonar","Camarones, cangrejos y otras criaturas que viven en el fondo del rio.","habitan solo en Australia cerca de los rios","oviparos","se desplaza por tierra y agua","Con hocico en forma de pico de pato, cola de castor y patas de nutria, es una de las 5 especies de mamiferos que pone huevos. Tanto los macho como las hembras nacen con espolones en el tobillo, solo los del macho liberan veneno,");
    AvisponAsiaticoGigante obj4("Insecto","fria",6,"Exoesqueleto","Si","Traqueal","caza insectos de mediano a gran tamano, como abejas, otras especies de avispas y mantis."," Anida en las tierras bajas y bosques, al pie de las sierras en el este y sureste de Asia.","oviparos","se desplaza por tierra y aire","De 3,5 a 3,9 cm de longitud corporal, es extremadamente territorial, se estima que cerca de 40 personas  mueren en Asia, a causa de la picadura de este insecto");
    IbisGigante obj5("Ave","Caliente",2,"Plumas","No","Pulmonar","Tienen una dieta variada que consiste en invertebrados, crustaceos, pequenos anfibios, reptiles y semillas. ","tienden a anidar lejos de las aldeas. En bosques caducifolios ubicados cerca de los pastizales, se encuentra mayoritariamente en el noreste y noroeste de Camboya. ","oviparos","se desplaza por tierra y aire","Estan en peligro de extincion. Muestra bandas oscuras en el dorso y la zona de los hombros; las puntas de las alas exhiben un color gris plateado palido. El pico es de color marron amarillento, mientras las patas son de color naranja.");
    RanaDeDarwin obj6("Anfibio","Fria",4,"Permeable","No","Cutanea","carnivoro, se alimentan de pequenos invertebrados como insectos, gusanos, caracoles y aranas.","en los campos y bosques de hayas, en las zonas mas frias de Sudamerica.","Oviparos","pueden desplazarse tanto por el agua como por la tierra","Es una especie en peligro de extincion. El croar o sonido de la ranita de darwin se asemeja al piar de un pollo o un pajaro, la cabeza tiene una forma triangular debido a una protuberancia carnosa estrecha y puntiaguda en la punta del hocico en forma de trompa. ");
    ImprimirDatosSerVivo(obj);
    ImprimirDatosSerVivo(obj2);
    ImprimirDatosSerVivo(obj3);
    ImprimirDatosSerVivo(obj4);
    ImprimirDatosSerVivo(obj5);
    ImprimirDatosSerVivo(obj6);
    return 0;
}
