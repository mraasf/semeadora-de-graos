

// led 
int indicaFuncionamento = 2;
//servo que empurra a muda
#include <Servo.h>
#define SERVO 3 // Porta Digital 3 (PWM)
Servo sPlantar;

// saidas do motores da direita e esquerda
int LowME = 4;
int HighME = 7;
int enableME = 5;
// motor que gira o cavador
int LowMC = 8;
int HighMC = 9;
int enableMC = 6;
//servo que baixa o cavador
#define SERVO 11 // Porta Digital 11 (PWM)
Servo sCavador; /
//buzzer
int buz = 10;

//rele 
int rele =12;

int poten = A0;
int controle = A7;


void setup()
{
  for (char i = 2 ; i<14 ; i++){
    pinMode(i,OUTPUT);
  }
  s.attach(SERVO);
  s.write(0); // Inicia o motor na posição zero
}

void loop()
{
}

void andar(){
// motores param
digitalWrite(LowMA, LOW);  
digitalWrite(HighMA, HIGH);
digitalWrite(enableMA, HIGH);  
}


void PararDeAndar(){
// motores param
digitalWrite(LowMA, LOW);  
digitalWrite(HighMA, LOW);
digitalWrite(enableMA, LOW);  

  
}

cavar(){
  // motor que gira o cavador
  digitalWrite(LowMC, LOW);  
  digitalWrite(HighMC, HIGH);
  digitalWrite(enableMC, HIGH);
  //servo que baixa o cavador
  for(int pos = 0; pos <= 90; pos++)
  {
    sCavador.write(pos);
    delay(2000);
  }

}
pararDEcavar(){
  // motor que gira o cavador
  digitalWrite(LowMC, LOW);  
  digitalWrite(HighMC, HIGH);
  digitalWrite(enableMC, HIGH);
  //servo que baixa o cavador
  sCavador.write(0); // Retorna o motor na posição zero

}

void plantar(){
for(int pos2 = 0; pos2 <= 90; pos++)
  {
    sPlantar.write(pos2);
    delay(250);
  }
}

void pararDEplantar(){
for(int pos3 = 90; pos3 <= 360; pos++)
  {
    sPlantar.write(pos2);
    delay(250);
  }
}