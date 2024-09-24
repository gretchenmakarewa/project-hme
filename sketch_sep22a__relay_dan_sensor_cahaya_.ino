// Definisikan pin untuk relay dan LDR
const int relayPin = 23; // Pin untuk relay
const int ldrPin = 34;   // Pin analog untuk LDR (gunakan pin ADC yang sesuai)
int ldrValue = 0;        // Variabel untuk menyimpan nilai LDR

void setup() {
  // Inisialisasi pin relay sebagai output
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); // Memastikan relay dalam keadaan mati saat program dimulai

  // Memulai komunikasi serial
  Serial.begin(115200);   
  Serial.println("Inisialisasi Sensor Cahaya..."); // Pesan awal
}

void loop() {
  // Baca nilai dari LDR
  ldrValue = analogRead(ldrPin);
  Serial.print("Nilai LDR: ");     // Tampilkan nilai
  Serial.println(ldrValue);
  
  // Logika untuk menghidupkan atau mematikan relay berdasarkan nilai LDR
  if (ldrValue < 300) { // Threshold cahaya rendah
    Serial.println("Cahaya Cukup, Menyalakan Relay.");
    digitalWrite(relayPin, HIGH); // Hidupkan relay
  } else {
    Serial.println("Cahaya Kurang, Mematikan Relay.");
    digitalWrite(relayPin, LOW); // Matikan relay
  }

  delay(1000);  // Delay 1 detik
}
