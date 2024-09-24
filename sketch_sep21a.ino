// Definisikan pin untuk relay
const int relayPin = 23; // Ubah sesuai pin yang Anda gunakan
void setup() {
  // Set pin relay sebagai output
  pinMode(relayPin, OUTPUT);
  // Memastikan relay dalam keadaan mati saat program dimulai
  digitalWrite(relayPin, LOW);
}

void loop() {
  // Menghidupkan relay
  digitalWrite(relayPin, HIGH); // Relay aktif
  delay(1000); // Tunggu selama 1 detik
  // Mematikan relay
  digitalWrite(relayPin, LOW); // Relay non-aktif
  delay(1000); // Tunggu selama 1 detik
}
