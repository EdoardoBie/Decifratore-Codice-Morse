const int outputPin = 10;
const int durataPunto = 300;
bool buzzer = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(outputPin, OUTPUT);
  Serial.println("Buzzer (b) o LED (l):");
  while(Serial.available() == 0){

  }
  String scelta = Serial.readString();
  if(scelta == 'b'){
    buzzer = true;
  }
}

void loop() {
  // Lettura testo da terminale
  Serial.println("Inserire testo da inviare in formato Morse:");
  while(Serial.available() == 0){
  }
  String trasmission = Serial.readString();
  trasmettiTesto(trasmission);
}


void trasmettiTesto(String trasmissione){
  trasmissione.toUpperCase();
  for(int i = 0; i < trasmissione.length(); i++){
    switch(trasmissione[i]){
      case 'A':
        A();
        break;
      case 'B':
        B();
        break;
      case 'C':
        C();
        break;
      case 'D':
        D();
        break;
      case 'E':
        E();
        break;
      case 'F':
        FMorse();
        break;
      case 'G':
        G();
        break;
      case 'H':
        H();
        break;
      case 'I':
        I();
        break;
      case 'J':
        J();
        break;
      case 'K':
        K();
        break;
      case 'L':
        L();
        break;
      case 'M':
        M();
        break;
      case 'N':
        N();
        break;
      case 'O':
        O();
        break;
      case 'P':
        P();
        break;
      case 'Q':
        Q();
        break;
      case 'R':
        R();
        break;
      case 'S':
        S();
        break;
      case 'T':
        T();
        break;
      case 'U':
        U();
        break;
      case 'V':
        V();
        break;
      case 'W':
        W();
        break;
      case 'X':
        X();
        break;
      case 'Y':
        Y();
        break;
      case 'Z':
        Z();
        break;
      case '1':
        UNO();
        break;
      case '2':
        DUE();
        break;
      case '3':
        TRE();
        break;
      case '4':
        QUATTRO();
        break;
      case '5':
        CINQUE();
        break;
      case '6':
        SEI();
        break;
      case '7':
        SETTE();
        break;
      case '8':
        OTTO();
        break;
      case '9':
        NOVE();
        break;
      case '0':
        ZERO();
        break;
      default:
        delay(durataPunto*7);
    }
  }
}
void punto(){
  if(buzzer){
    tone(outputPin, 1000);
    delay(durataPunto);
    noTone(outputPin);
  }
  else{
  digitalWrite(outputPin, HIGH);
  delay(durataPunto);
  digitalWrite(outputPin, LOW);
  }
  
}

void linea(){
  if(buzzer){
    tone(outputPin, 1000);
    delay(durataPunto);
    noTone(outputPin);
  }
  else{
  digitalWrite(outputPin, HIGH);
  delay(durataPunto*3);
  digitalWrite(outputPin, LOW);
  }
}

void A(){
  // . -
  punto();
  delay(durataPunto);
  linea();
  delay(durataPunto*3);
}

void B(){
  // - . . .
  linea();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto*3);
}

void C(){
  // - . - .
  linea();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  punto();
  delay(durataPunto*3);
}

void D(){
  // - . .
  linea();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto*3);
}

void E(){
  // .
  punto();
  delay(durataPunto*3);
}

void FMorse(){
  // . . - .
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  punto();
  delay(durataPunto*3);
}

void G(){
  // - - .
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  punto();
  delay(durataPunto*3);
}

void H(){
  // . . . .
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto*3);
}

void I(){
  // . .
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto*3);
}

void J(){
  // . - - -
  punto();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto*3);
}

void K(){
  // - . -
  linea();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  linea();
  delay(durataPunto*3);
}

void L(){
  // . - . .
  punto();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
}

void M(){
  // - -
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto*3);
}

void N(){
  // - .
  linea();
  delay(durataPunto);
  punto();
  delay(durataPunto*3);
}

void O(){
  // - - -
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto*3);
}

void P(){
  // . - - .
  punto();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  punto();
  delay(durataPunto*3);
}

void Q(){
  // - - . -
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  linea();
  delay(durataPunto*3);
}

void R(){
  // . - .
  punto();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  punto();
  delay(durataPunto*3);
}

void S(){
  // . . .
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto*3);
}

void T(){
  // -
  linea();
  delay(durataPunto);
}

void U(){
  // . . -
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  linea();
  delay(durataPunto*3);
}

void V(){
  // . . . -
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  linea();
  delay(durataPunto*3);
}

void W(){
  // . - -
  punto();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto*3);
}

void X(){
  // - . . -
  linea();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  linea();
  delay(durataPunto*3);
}

void Y(){
  // - . - -
  linea();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto*3);
}

void Z(){
  // - - . .
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto*3);
}

void UNO(){
  // . - - - -
  punto();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto*3);
}

void DUE(){
  // . . - - -
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto*3);
}

void TRE(){
  // . . . - -
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto*3);
}

void QUATTRO(){
  // . . . . -
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  linea();
  delay(durataPunto*3);
}

void CINQUE(){
  // . . . . .
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto*3);
}

void SEI(){
  // - . . . .
  linea();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto*3);
}

void SETTE(){
  // - - . . .
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto*3);
}

void OTTO(){
  // - - - . .
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  punto();
  delay(durataPunto);
  punto();
  delay(durataPunto*3);
}

void NOVE(){
  // - - - - .
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  punto();
  delay(durataPunto*3);
}

void ZERO(){
  // - - - - -
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto);
  linea();
  delay(durataPunto*3);
}
