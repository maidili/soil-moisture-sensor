#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int sensorPin = A0; //untuk esp32 pinnya pakai 34
LiquidCrystal_I2C lcd(0x27, 16, 2); // Ganti 0x27 ke 0x3F jika LCD tidak tampil

void setup() {
// Wire.begin(21, 22); // SDA = GPIO 21, SCL = GPIO 22  uncomment jika menggunakan esp32

  lcd.init();
  lcd.backlight();
  lcd.print("Tes Sensor");
  lcd.setCursor(0, 1);
  lcd.print("Soil Moisture");
  delay(1000);
}

void loop() {
  int nilaiSensor = analogRead(sensorPin);
    kelembapan = (100 - ( (nilaiSensor/1023.00) *100)); //untuk esp32 ganti nilai 1023.00 dengan 4095.00

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Kelembapan tanah:");
  lcd.setCursor(0, 1);
  lcd.print(kelembapan, 1); // Tampilkan 1 angka di belakang koma
  lcd.print(" %");

  delay(1000);
}

//======================================================================================= yg diatas pin A0 yg dibawah D0

// #include <Wire.h>
// #include <LiquidCrystal_I2C.h>

// int bzzr = 13;
// const int sensorPin = 7; //untuk esp32 ganti dengan pin 12
// LiquidCrystal_I2C lcd(0x27, 16, 2); // Ubah 0x27 ke 0x3F jika tidak tampil

// void setup() {
//   pinMode(bzzr, OUTPUT);
//   pinMode(sensorPin, INPUT);
//   lcd.init();
//   lcd.backlight();
//   lcd.print("Tes Sensor");
//   lcd.setCursor(0, 1);
//   lcd.print("Soil Moisture");
//   delay(1000);
// }

// void loop() {
//   if (digitalRead(sensorPin) == HIGH) {
//     digitalWrite(bzzr, HIGH);
//     lcd.clear();
//     lcd.setCursor(0, 0);
//     lcd.print("Tanah Kering!");
//   } else {
//     digitalWrite(bzzr, LOW);
//     lcd.clear();
//     lcd.setCursor(0, 0);
//     lcd.print("Tanah Lembab");
//   }

//   delay(1000);
// }
