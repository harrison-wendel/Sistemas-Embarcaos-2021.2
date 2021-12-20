int led = 13;
int chave = 10;
void setup() {
	pinMode(led, OUTPUT);
	pinMode(chave, INPUT);
}

void loop() {
	if (digitalRead(inPin)){
		digitalWrite(led, HIGH);
		delay(2000);
	else {
		digitalWrite(led, HIGH);
		delay(5000);
	}
	
	if (digitalRead(chave)){
		digitalWrite(led, LOW);
		delay(1000);
	else {
		digitalWrite(led, LOW);
		delay(30000);
	}
}