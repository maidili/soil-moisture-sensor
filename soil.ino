  const int sensorPin = A0; //untuk esp32 pinnya pakai 34

  void setup() {
    Serial.begin(9600); //untuk esp32 baud rate nya pakai 115200

  }
  
  void loop() {
    float kelembapan;
    int nilaiSensor = analogRead(sensorPin);
    kelembapan = (100 - ( (nilaiSensor/1023.00) *100)); //untuk esp32 ganti nilai 1023.00 dengan 4095.00

    Serial.print("nilai kelembapan tanah = ");
    Serial.print(kelembapan);
    Serial.println("%");
    delay(1000);
  }

//====================================================================================================================yg diatas untuk analog yg dibawah untuk digital

// int bzzr = 13;
// int sensorPin = 7; //untuk esp32 ganti dengan pin 12

// void setup(){
//   Serial.begin(9600) //untuk esp32 baud rate nya pakai 115200
//   pinMode (bzzr, OUTPUT);
//   pinMode (sensorPin, INPUT);
// }

// void loop(){
//   if(digitalRead(sensorPin) == HIGH) {
//     digitalWrite(bzzr, HIGH);
//     Serial.print("kondisi tanah kering");
//     delay(1000);
//   } else {
//     digitalWrite(bzzr, LOW);
//     Serial.println("kondisi tanah lembab");
//     delay(1000);
//   }
// }