🌱 Soil Moisture Sensor YL-69 + YL-38 with Arduino    
Proyek ini menggunakan sensor kelembapan tanah YL-69 yang terhubung dengan modul penguat YL-38 untuk mendeteksi kadar air di dalam tanah. Sensor ini sangat cocok digunakan dalam sistem irigasi otomatis, pemantauan kebun pintar (smart farming), dan eksperimen pertanian berbasis IoT.

📦 Komponen yang Digunakan    
Sensor kelembapan tanah YL-69    
Modul pembanding YL-38    
Arduino (Uno, Mega, Nano, ESP32, dll)    
Kabel jumper    
buzzer    
Breadboard (opsional)    

🔌 Pinout    
Modul	Arduino    
VCC	5V    
GND	GND    
A0	A0    
D0	D7 (opsional, untuk pembacaan digital)    

📈 Output    
Analog (A0): Memberikan nilai kelembapan secara kuantitatif (0–1023).    
Digital (D0): Mengeluarkan nilai HIGH atau LOW berdasarkan threshold yang disetel via potensiometer.    

🧠 Cara Kerja    
Sensor mengukur konduktivitas antara dua probe logam. Semakin basah tanahnya, semakin besar konduktivitas (nilai analog akan lebih rendah). Semakin kering tanah, konduktivitas menurun (nilai analog naik).        

🎯 Aplikasi    
Sistem irigasi otomatis    
Monitoring tanaman indoor    
Proyek smart greenhouse    
Eksperimen edukasi berbasis sensor    

📎 Lisensi    
Proyek ini bersifat open source
