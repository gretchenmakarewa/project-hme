const int ldrPin = 34;  // Pin analog untuk LDR (gunakan pin ADC yang sesuai)
int ldrValue = 0;       // Variabel untuk menyimpan nilai LDR

void setup() {
  Serial.begin(115200);   // Mulai komunikasi serial dengan baud rate lebih tinggi
  Serial.println("Inisialisasi Sensor Cahaya..."); // Pesan awal
}

void loop() {
  ldrValue = analogRead(ldrPin);  // Baca nilai dari LDR
  Serial.print("Nilai LDR: ");     // Tampilkan nilai
  Serial.println(ldrValue);
  
  // Tambahkan logika berdasarkan nilai LDR
  if (ldrValue < 300) { // Threshold cahaya rendah
    Serial.println("Cahaya Cukup");
  } else {
    Serial.println("Cahaya Kurang");
  }

  delay(1000);  // Delay 1 detik
}
