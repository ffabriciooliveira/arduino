unsigned long anterior = 0;
unsigned long intervalo = 500;
unsigned int liga = 1;
void setup() {
    pinMode(13, OUTPUT);
}
void loop() {
    unsigned long atual = millis();
    if (atual - anterior > intervalo)
        {
        if (liga == 1)
            {
            digitalWrite(13, 1);
            liga = 0;
            }
        else
            {
            digitalWrite(13, 0);
            liga = 1;
            }
        anterior = atual;
        }
}

//Abiezer Sidonio Jose Odanaca Junior - 1920573
// Fabricio Oliveira de Carvalho - 2011877
