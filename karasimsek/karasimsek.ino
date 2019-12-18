
int led1 = 3; //3. pini led1 olarak tanımladık.
int led2 = 4; //4. pini led2 olarak tanımladık.
int led3 = 5; //5. pini led3 olarak tanımladık.
int led4 = 6; //6. pini led4 olarak tanımladık.
int led5 = 7; //7. pini led5 olarak tanımladık.
void setup() {
pinMode (led1, OUTPUT); //8. pini çıkış olarak tanımladık.
pinMode (led2, OUTPUT); //9. pini çıkış olarak tanımladık.
pinMode (led3, OUTPUT); //10. pini çıkış olarak tanımladık.
pinMode (led4, OUTPUT); //11. pini çıkış olarak tanımladık.
pinMode (led5, OUTPUT); //12. pini çıkış olarak tanımladık.
}
void loop() {
digitalWrite (led1, HIGH); //led1 enerji verdik.
delay (100); //0.1s boyunca yanmasını sağladık
digitalWrite (led1, LOW); //led1 enerjisini kestik.
delay (100); //0.1s boyunca yanmasını sağladık
digitalWrite (led2, HIGH); //led2 enerji verdik.
delay (100); //0.1s boyunca yanmasını sağladık
digitalWrite (led2, LOW); //led2 enerjisini kestik.
delay (100); //0.1s boyunca yanmasını sağladık
digitalWrite (led3, HIGH); // led3 enerji verdik.
delay (100); //0.1s boyunca yanmasını sağladık
digitalWrite (led3, LOW); //led3 enerjisini kestik.
delay (100); //0.1s boyunca yanmasını sağladık
digitalWrite (led4, HIGH); // led4 enerji verdik.
delay (100); //0.1s boyunca yanmasını sağladık
digitalWrite (led4, LOW); //led4 enerjisini kestik.
delay (100); //0.1s boyunca yanmasını sağladık
digitalWrite (led5, HIGH); //led5 enerji verdik.
delay (100); //0.1s boyunca yanmasını sağladık
digitalWrite (led5, LOW); //led5 enerjisini kestik.
}
