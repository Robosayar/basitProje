/*
 *  Mert VAROL
 *    Robosayar
 *        www.robosayar.com
 *            Arduino ile LED Yakıp Söndürme
 */

int led = 2;    //LED için kullanılan pin, değişkene aktarıldı.

void setup() {
  pinMode(led,OUTPUT);    //LED için kullanılan pin, çıkış olarak ayarlandı.
}

void loop() {
  digitalWrite(led,HIGH);     //LED'e güç ver, onu yak.
  delay(500);                 //500 milisaniye bekle - LED'i 500 ms yanık tut.
  digitalWrite(led,LOW);      //LED'e giden gücü kes, onu söndür.
  delay(500);                 //500 milisaniye bekle - LED'i 500 ms sönük tut.
}

/*
 * LED'imiz 500 milisaniyede bir yanıp sönecek.
 */
