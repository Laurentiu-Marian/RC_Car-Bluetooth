# RC_Car-Bluetooth
- Masina controlata prin Bluetooth

-Proiect SMP-

Descrierea functionalitatiilor
	Pentru realizarea masinutei, intentionam sa folosim:
	
•	Placuta de dezvoltare Arduino;

•	Modul Bluetooth;

•	1 – 2 motoare DC;

•	Aplicatie de control;

•	Sursa de alimentare;

•	Punte H;

•	4 LED-uri;

•	Masinuta de jucarie ( aceasta este o masinuta veche ce apartine unuia dintre noi).

Masinuta va putea fi controlata inainte, inapoi, stanga si dreapta din aplicatie, folosind transmisia Bluetooth.De asemenea, am folosit 4 LED-uri, 2 in fata masinii si 2 in spate, reprezentand stopurile si farurile.

Proiecte similare de pe internet:
1.	https://create.arduino.cc/projecthub/samanfern/bluetooth-controlled-car-d5d9ca
2.	https://www.youtube.com/watch?v=P6bEdnm4hfs
3.	https://www.youtube.com/watch?v=Q36NbjPMV5k

Schema de  baza pentru functionare, realizata in Tinkercad a proiectului (schema de mai sus nu este in tocmai cu modelul fizic, deoarece programul pentru simulare nu contine tot ce este nevoie):

![Schema](https://user-images.githubusercontent.com/57183392/167270771-c0b2b2be-faf4-4b6d-bbea-9a069c7cdd52.png)

Modelul fizic va fi realizat pe o masinuta de jucarie mai veche, care initial era comandata radio printr-o telecomanda si antena.
 
 ![WhatsApp Image 2022-05-05 at 12 59 18](https://user-images.githubusercontent.com/57183392/167270779-0383dda6-d769-4da1-bb15-cca2efc6b7c2.jpeg)
 
Etapele proiectului:
1. Deschiderea masinuta si verificarea vechilor piese pentru a vedea daca putem pastra ceva. De asemenea a fost nevoie si de curatarea prafului, fiind vorba de o jucarie de aproape 20 de ani.

![WhatsApp Image 2022-05-05 at 12 56 23](https://user-images.githubusercontent.com/57183392/167270818-164c8fbd-96f4-4925-864e-5eb290625709.jpeg)

2. Am constat ca majoritatea pieselor erau intr-o stare nu tocmai potrivita sau nu puteau fi adaptate pentru obiectivele proiectului. Totusi am pastrat motorasul pentru mersul inainte si inapoi, precum si sistemul mecanic de virare, fiind destul de complex si util.
  
  ![WhatsApp Image 2022-05-05 at 12 56 22 (3)](https://user-images.githubusercontent.com/57183392/167270831-6c497147-9076-42b3-9fed-5ecf29875143.jpeg)
  
  ![WhatsApp Image 2022-05-05 at 12 56 22 (4)](https://user-images.githubusercontent.com/57183392/167270838-46df4ceb-50c0-4e4c-811a-0ddd45a2f75c.jpeg)

3. Am achizitionat componentele necesare si am inceput asamblarea. 

![Screenshot 2022-05-07 233401](https://user-images.githubusercontent.com/57183392/167270867-1f192b49-2c4e-460d-a637-3929a776b02e.png)

4. Dupa ce au fost livrate piesle a fost nevoie de o asezare foarte exacta a lor pe platforma masinutei, deoarece spatiul este foarte mic si ne dorim sa inchidem carcasa fara a fi nevoie sa taiem ceva.
  
![WhatsApp Image 2022-05-05 at 12 56 22 (2)](https://user-images.githubusercontent.com/57183392/167270887-5ff44634-7882-42d0-b414-d0f4bf1810df.jpeg)

![WhatsApp Image 2022-05-05 at 12 56 20 (1)](https://user-images.githubusercontent.com/57183392/167270891-c066e7a8-8b04-43ca-895d-6cf592fcf7b8.jpeg)

In prima poza se poate observa placuta Arduino ce va fu noul “creier” al jucariei.
In figura a doua am folosit motorul servo pe care l-am adaptat la vechiul sistem de virare, deoarece inainte, atunci cand roata ajungea la limita, exista un mecanism care decupla motorasul DC pentru a se roti in gol, pana cand comanda din telecomada era anulata, urmand ca motorasul sa se opreasca, iar arcul sa aduca rotile pe pozitiile initale. Noi vom pastra sistemul deoarece ne ajuta la fi siguri ca noul servo aduce rotiile pe pozitie dreapta.

Pentru a miscarea in fata, respective in spate, a masinutei, am folosit o Punte H care v-a schimba polaritatea. La aceasta am cuplat si 4 LED-uri care se vor aprinde: doua pentru mersul cu fata si doua pentru mersul spatele cu.
 
 ![WhatsApp Image 2022-05-05 at 12 56 21](https://user-images.githubusercontent.com/57183392/167270902-5bafd1a8-7da2-46c2-97c0-683542d2f683.jpeg)

5. In urma efectuarilor acestor pasi, rezultatul final pe partea de circuite si piese, am obtinut urmatorul rezultat:

![WhatsApp Image 2022-05-05 at 12 56 21 (2)](https://user-images.githubusercontent.com/57183392/167270922-28245555-b258-44c7-8092-56f17f214b7e.jpeg)

![WhatsApp Image 2022-05-16 at 18 47 44](https://user-images.githubusercontent.com/57183392/171645494-34853043-b9d6-40ed-8e86-fcb95c3c9dd7.jpeg)

6. Pentru controlul de la distanta, prin Bluetooth, avem nevoie de o aplicatie pe telefon. Am folosit site-ul MIT AppInventor unde am creat functiile si butoanele, iar mai apoi  am descarcat-o pe telefon (functioneaza doar pe android).
 
![WhatsApp Image 2022-05-05 at 13 30 52](https://user-images.githubusercontent.com/57183392/167270972-8f727e4e-0ede-4715-9bc1-526d037f4f06.jpeg)

Avem 8 butoane de control al directieim unul pentru claxon, unul de moduri de control si unul pentru conectarea la masinuta.
 
![image (1)](https://user-images.githubusercontent.com/57183392/167270976-44b9ecc4-c7a6-40b1-9358-6747bd442626.png)
